/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          https://www.mrpt.org/                         |
   |                                                                        |
   | Copyright (c) 2005-2024, Individual contributors, see AUTHORS file     |
   | See: https://www.mrpt.org/Authors - All rights reserved.               |
   | Released under BSD License. See: https://www.mrpt.org/License          |
   +------------------------------------------------------------------------+ */

#include <mrpt/gui/CDisplayWindow.h>
#include <mrpt/img/CImage.h>
#include <mrpt/system/CTimeLogger.h>
#include <mrpt/vision/chessboard_find_corners.h>

#include <chrono>
#include <iostream>
#include <thread>

using namespace std;
using namespace mrpt;
using namespace mrpt::img;
using namespace mrpt::system;
using namespace mrpt::gui;

#include <mrpt/examples_config.h>
std::string myDataDir =
	MRPT_EXAMPLES_BASE_DIRECTORY + string("vision_checkerboard_detectors/");

// ------------------------------------------------------
//				TestCheckerboardDetectors
// ------------------------------------------------------
void TestCheckerboardDetectors()
{
	CTimeLogger timlog;

	// Load img:
	CImage img;
	if (!img.loadFromFile(myDataDir + string("test_1_checkerboard_9x6.jpg")))
		throw std::runtime_error("Can't load demo image!");

	// Detect multiple-checkerboards:
	vector<TPixelCoordf> cornerCoords;
	const unsigned int checkerboard_size_x = 6;
	const unsigned int checkerboard_size_y = 9;

	// Detect:
	timlog.enter("findChessboardCorners");

	// bool detectOk1 =
	mrpt::vision::findChessboardCorners(
		img, cornerCoords, checkerboard_size_x, checkerboard_size_y,
		true  // normalize_image
	);

	timlog.leave("findChessboardCorners");

	// Draw:
	CImage img_detect1 = img;
	img_detect1.drawChessboardCorners(
		cornerCoords, checkerboard_size_x, checkerboard_size_y);

	// Show results:
	CDisplayWindow win1("Detected checkerboard");
	win1.showImage(img_detect1);

	timlog.dumpAllStats();
	timlog.clear();

	// wait till user closes any window:
	while (win1.isOpen())
	{
		std::this_thread::sleep_for(10ms);
	}
}

// ------------------------------------------------------
//						MAIN
// ------------------------------------------------------
int main()
{
	try
	{
		TestCheckerboardDetectors();
		return 0;
	}
	catch (const std::exception& e)
	{
		std::cerr << "MRPT error: " << mrpt::exception_to_str(e) << std::endl;
		return -1;
	}
}
