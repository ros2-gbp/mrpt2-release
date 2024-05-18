/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          https://www.mrpt.org/                         |
   |                                                                        |
   | Copyright (c) 2005-2024, Individual contributors, see AUTHORS file     |
   | See: https://www.mrpt.org/Authors - All rights reserved.               |
   | Released under BSD License. See: https://www.mrpt.org/License          |
   +------------------------------------------------------------------------+ */

#include <mrpt/core/exceptions.h>
#include <mrpt/core/get_env.h>
#include <mrpt/hwdrivers/CNTRIPClient.h>
#include <mrpt/system/os.h>

#include <chrono>
#include <cstdio>
#include <iostream>
#include <thread>

using namespace std;
using namespace mrpt;
using namespace mrpt::hwdrivers;
using namespace mrpt::system;

std::string ntrip_user = mrpt::get_env<std::string>("NTRIP_USER");
std::string ntrip_pass = mrpt::get_env<std::string>("NTRIP_PASS");

// ------------------------------------------------------
//				TestNTRIP
// ------------------------------------------------------
void TestNTRIP()
{
  const string server = "www.euref-ip.net";
  const int server_port = 2101;

  CNTRIPClient::TListMountPoints lst;
  string errMsg;

  bool ret = CNTRIPClient::retrieveListOfMountpoints(lst, errMsg, server, server_port);

  if (!ret)
  {
    cout << "Error: " << errMsg << endl;
    return;
  }

  if (lst.empty())
  {
    cout << "Zero streams listed in caster...?" << endl;
    return;
  }

  // List:
  // -----------------------------------
  for (CNTRIPClient::TListMountPoints::const_iterator it = lst.begin(); it != lst.end(); it++)
  {
    const CNTRIPClient::TMountPoint& m = *it;
    cout << "MOUNT: " << m.mountpoint_name << "  | COUNTRY: " << m.country_code
         << "  | NMEA?: " << m.needs_nmea << "  | FORMAT: " << m.format << " (" << m.id << ") "
         << m.extra_info << endl;
  }

  // Now connect to a random server:
  // -----------------------------------
  CNTRIPClient ntrip;
  CNTRIPClient::NTRIPArgs params;

  CNTRIPClient::TListMountPoints::iterator it = lst.begin();
  // std::advance(it,8);

  cout << "Connecting to: " << it->mountpoint_name << " - " << it->id << endl;
  params.mountpoint = it->mountpoint_name;
  params.server = server;
  params.port = server_port;

  cout << "Using user: " << ntrip_user << endl;
  cout << "Using pass: " << ntrip_pass << endl;
  cout << "(You can change them with env variables NTRIP_USER and "
          "NTRIP_PASS"
       << endl;

  params.user = ntrip_user;
  params.password = ntrip_pass;

  string msgerr;

  if (!ntrip.open(params, msgerr))
  {
    cout << "ERROR: " << msgerr << endl;
  }
  else
  {
    cout << "Reading stream... press any key to finish." << endl;

    std::vector<uint8_t> dat;
    while (!mrpt::system::os::kbhit())
    {
      ntrip.stream_data.readAndClear(dat);
      cout << "Read " << dat.size() << " bytes." << endl;
      std::this_thread::sleep_for(1000ms);
    }
  }
}

void TestNTRIP2()
{
  // const string server = "www.euref-ip.net";
  const string server = "193.144.251.13";
  const int server_port = 2101;

  // Now connect to a random server:
  // -----------------------------------
  CNTRIPClient ntrip;
  CNTRIPClient::NTRIPArgs params;

  params.mountpoint = "ACOR0";
  params.server = server;
  params.port = server_port;
  params.user = "";
  params.password = "";

  string msgerr;

  if (!ntrip.open(params, msgerr))
  {
    cout << "ERROR: " << msgerr << endl;
  }
  else
  {
    cout << "Reading stream... press any key to finish." << endl;

    std::vector<uint8_t> dat;
    while (!mrpt::system::os::kbhit())
    {
      ntrip.stream_data.readAndClear(dat);
      cout << "Read " << dat.size() << " bytes." << endl;
      std::this_thread::sleep_for(1000ms);
    }
  }
}

int main()
{
  try
  {
    TestNTRIP();
    // TestNTRIP2();

    return 0;
  }
  catch (const std::exception& e)
  {
    std::cerr << "MRPT error: " << mrpt::exception_to_str(e) << std::endl;
    return -1;
  }
}
