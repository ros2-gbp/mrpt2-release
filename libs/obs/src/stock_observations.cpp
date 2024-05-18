/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          https://www.mrpt.org/                         |
   |                                                                        |
   | Copyright (c) 2005-2024, Individual contributors, see AUTHORS file     |
   | See: https://www.mrpt.org/Authors - All rights reserved.               |
   | Released under BSD License. See: https://www.mrpt.org/License          |
   +------------------------------------------------------------------------+ */

#include "obs-precomp.h"  // Precompiled headers
//
#include <mrpt/io/CMemoryStream.h>
#include <mrpt/obs/CObservation2DRangeScan.h>
#include <mrpt/obs/stock_observations.h>
#include <mrpt/serialization/CArchive.h>

#include <array>

#include "sample_image1.h"
#include "sample_image2.h"

using namespace mrpt::obs;

void stock_observations::example2DRangeScan(mrpt::obs::CObservation2DRangeScan& s, int i)
{
  using scan_data_t = std::array<float, 361>;
  using scan_valid_data_t = std::array<char, 361>;

  // clang-format off
	const std::array<scan_data_t, 2> SCAN_RANGES = {
		{{0.910f,  0.900f,  0.910f,  0.900f,  0.900f,  0.890f,  0.890f,
		  0.880f,  0.890f,  0.880f,  0.880f,  0.880f,  0.880f,  0.880f,
		  0.880f,  0.870f,  0.880f,  0.870f,  0.870f,  0.870f,  0.880f,
		  0.880f,  0.880f,  0.880f,  0.880f,  0.880f,  0.880f,  0.880f,
		  0.880f,  0.880f,  0.880f,  0.880f,  0.880f,  0.880f,  0.880f,
		  0.880f,  0.890f,  0.880f,  0.880f,  0.880f,  0.890f,  0.880f,
		  0.890f,  0.890f,  0.880f,  0.890f,  0.890f,  0.880f,  0.890f,
		  0.890f,  0.890f,  0.890f,  0.890f,  0.890f,  0.900f,  0.900f,
		  0.900f,  0.900f,  0.900f,  0.910f,  0.910f,  0.910f,  0.910f,
		  0.920f,  0.920f,  0.920f,  0.920f,  0.920f,  0.930f,  0.930f,
		  0.930f,  0.930f,  0.940f,  0.940f,  0.950f,  0.950f,  0.950f,
		  0.950f,  0.960f,  0.960f,  0.970f,  0.970f,  0.970f,  0.980f,
		  0.980f,  0.990f,  1.000f,  1.000f,  1.000f,  1.010f,  1.010f,
		  1.020f,  1.030f,  1.030f,  1.030f,  1.040f,  1.050f,  1.060f,
		  1.050f,  1.060f,  1.070f,  1.070f,  1.080f,  1.080f,  1.090f,
		  1.100f,  1.110f,  1.120f,  1.120f,  1.130f,  1.140f,  1.140f,
		  1.160f,  1.170f,  1.180f,  1.180f,  1.190f,  1.200f,  1.220f,
		  1.220f,  1.230f,  1.230f,  1.240f,  1.250f,  1.270f,  1.280f,
		  1.290f,  1.300f,  1.320f,  1.320f,  1.350f,  1.360f,  1.370f,
		  1.390f,  1.410f,  1.410f,  1.420f,  1.430f,  1.450f,  1.470f,
		  1.490f,  1.500f,  1.520f,  1.530f,  1.560f,  1.580f,  1.600f,
		  1.620f,  1.650f,  1.670f,  1.700f,  1.730f,  1.750f,  1.780f,
		  1.800f,  1.830f,  1.850f,  1.880f,  1.910f,  1.940f,  1.980f,
		  2.010f,  2.060f,  2.090f,  2.130f,  2.180f,  2.220f,  2.250f,
		  2.300f,  2.350f,  2.410f,  2.460f,  2.520f,  2.570f,  2.640f,
		  2.700f,  2.780f,  2.850f,  2.930f,  3.010f,  3.100f,  3.200f,
		  3.300f,  3.390f,  3.500f,  3.620f,  3.770f,  3.920f,  4.070f,
		  4.230f,  4.430f,  4.610f,  4.820f,  5.040f,  5.290f,  5.520f,
		  8.970f,  8.960f,  8.950f,  8.930f,  8.940f,  8.930f,  9.050f,
		  9.970f,  9.960f,  10.110f, 13.960f, 18.870f, 19.290f, 81.910f,
		  20.890f, 48.750f, 48.840f, 48.840f, 19.970f, 19.980f, 19.990f,
		  15.410f, 20.010f, 19.740f, 17.650f, 17.400f, 14.360f, 12.860f,
		  11.260f, 11.230f, 8.550f,  8.630f,  9.120f,  9.120f,  8.670f,
		  8.570f,  7.230f,  7.080f,  7.040f,  6.980f,  6.970f,  5.260f,
		  5.030f,  4.830f,  4.620f,  4.440f,  4.390f,  4.410f,  4.410f,
		  4.410f,  4.430f,  4.440f,  4.460f,  4.460f,  4.490f,  4.510f,
		  4.540f,  3.970f,  3.820f,  3.730f,  3.640f,  3.550f,  3.460f,
		  3.400f,  3.320f,  3.300f,  3.320f,  3.320f,  3.340f,  2.790f,
		  2.640f,  2.600f,  2.570f,  2.540f,  2.530f,  2.510f,  2.490f,
		  2.490f,  2.480f,  2.470f,  2.460f,  2.460f,  2.460f,  2.450f,
		  2.450f,  2.450f,  2.460f,  2.460f,  2.470f,  2.480f,  2.490f,
		  2.490f,  2.520f,  2.510f,  2.550f,  2.570f,  2.610f,  2.640f,
		  2.980f,  3.040f,  3.010f,  2.980f,  2.940f,  2.920f,  2.890f,
		  2.870f,  2.830f,  2.810f,  2.780f,  2.760f,  2.740f,  2.720f,
		  2.690f,  2.670f,  2.650f,  2.630f,  2.620f,  2.610f,  2.590f,
		  2.560f,  2.550f,  2.530f,  2.510f,  2.500f,  2.480f,  2.460f,
		  2.450f,  2.430f,  2.420f,  2.400f,  2.390f,  2.380f,  2.360f,
		  2.350f,  2.340f,  2.330f,  2.310f,  2.300f,  2.290f,  2.280f,
		  2.270f,  2.260f,  2.250f,  2.240f,  2.230f,  2.230f,  2.220f,
		  2.210f,  2.200f,  2.190f,  2.180f,  2.170f,  1.320f,  1.140f,
		  1.130f,  1.130f,  1.120f,  1.120f,  1.110f,  1.110f,  1.110f,
		  1.110f,  1.100f,  1.110f,  1.100f},
		 {0.720f,  0.720f,  0.720f,  0.720f,  0.720f,  0.720f,  0.710f,
		  0.720f,  0.710f,  0.710f,  0.710f,  0.710f,  0.710f,  0.710f,
		  0.710f,  0.710f,  0.710f,  0.710f,  0.710f,  0.710f,  0.720f,
		  0.720f,  0.720f,  0.720f,  0.730f,  0.730f,  0.730f,  0.730f,
		  0.730f,  0.730f,  0.730f,  0.740f,  0.740f,  0.740f,  0.740f,
		  0.740f,  0.740f,  0.750f,  0.750f,  0.750f,  0.750f,  0.750f,
		  0.750f,  0.750f,  0.750f,  0.760f,  0.760f,  0.760f,  0.760f,
		  0.760f,  0.760f,  0.760f,  0.760f,  0.770f,  0.770f,  0.770f,
		  0.770f,  0.780f,  0.780f,  0.780f,  0.790f,  0.790f,  0.800f,
		  0.800f,  0.800f,  0.800f,  0.800f,  0.800f,  0.810f,  0.810f,
		  0.820f,  0.820f,  0.830f,  0.830f,  0.840f,  0.840f,  0.850f,
		  0.850f,  0.860f,  0.860f,  0.860f,  0.870f,  0.870f,  0.880f,
		  0.890f,  0.890f,  0.900f,  0.900f,  0.910f,  0.920f,  0.930f,
		  0.930f,  0.940f,  0.940f,  0.940f,  0.950f,  0.960f,  0.960f,
		  0.970f,  0.980f,  0.990f,  1.000f,  1.010f,  1.020f,  1.030f,
		  1.040f,  1.050f,  1.060f,  1.070f,  1.080f,  1.080f,  1.100f,
		  1.100f,  1.120f,  1.120f,  1.140f,  1.140f,  1.170f,  1.160f,
		  1.180f,  1.190f,  1.210f,  1.220f,  1.240f,  1.250f,  1.280f,
		  1.290f,  1.300f,  1.320f,  1.340f,  1.350f,  1.380f,  1.390f,
		  1.420f,  1.440f,  1.460f,  1.470f,  1.500f,  1.520f,  1.550f,
		  1.570f,  1.600f,  1.630f,  1.670f,  1.690f,  1.730f,  1.760f,
		  1.790f,  1.820f,  1.870f,  1.900f,  1.940f,  1.970f,  2.030f,
		  2.080f,  2.130f,  2.170f,  2.230f,  2.280f,  2.340f,  2.400f,
		  2.490f,  2.550f,  2.630f,  2.700f,  2.810f,  2.880f,  3.010f,
		  3.090f,  3.240f,  3.340f,  3.500f,  3.620f,  3.810f,  3.950f,
		  4.180f,  4.340f,  4.620f,  8.170f,  8.140f,  8.150f,  8.120f,
		  8.110f,  8.100f,  8.100f,  8.300f,  9.040f,  9.130f,  9.130f,
		  13.030f, 18.050f, 19.150f, 81.910f, 20.070f, 47.980f, 48.040f,
		  48.030f, 19.140f, 19.180f, 19.180f, 19.190f, 14.550f, 19.210f,
		  16.850f, 16.840f, 7.800f,  7.770f,  7.770f,  7.750f,  7.770f,
		  7.760f,  7.780f,  7.760f,  8.320f,  8.350f,  8.350f,  8.090f,
		  7.720f,  7.730f,  6.430f,  6.360f,  6.290f,  6.260f,  6.230f,
		  6.220f,  6.160f,  5.800f,  4.510f,  4.410f,  4.240f,  4.140f,
		  4.000f,  3.910f,  3.790f,  3.680f,  3.660f,  3.680f,  3.680f,
		  3.700f,  3.710f,  3.730f,  3.730f,  3.760f,  3.770f,  3.790f,
		  3.820f,  3.850f,  3.900f,  3.940f,  3.980f,  3.250f,  3.180f,
		  3.140f,  3.070f,  3.030f,  2.970f,  2.930f,  2.880f,  2.850f,
		  2.790f,  2.760f,  2.710f,  2.680f,  2.660f,  2.670f,  2.690f,
		  2.710f,  2.720f,  2.740f,  2.760f,  2.770f,  2.780f,  2.800f,
		  2.170f,  2.120f,  2.090f,  2.060f,  2.020f,  2.010f,  1.990f,
		  1.980f,  1.970f,  1.960f,  1.950f,  1.950f,  1.940f,  1.940f,
		  1.950f,  1.940f,  1.940f,  1.950f,  1.930f,  1.940f,  1.940f,
		  1.940f,  1.940f,  1.940f,  1.950f,  1.960f,  1.960f,  1.980f,
		  1.980f,  2.000f,  2.010f,  2.030f,  2.060f,  2.090f,  2.120f,
		  2.190f,  2.560f,  2.540f,  2.530f,  2.520f,  2.500f,  2.490f,
		  2.470f,  2.460f,  2.450f,  2.440f,  2.420f,  2.410f,  2.400f,
		  2.390f,  2.380f,  2.370f,  2.360f,  2.350f,  2.340f,  2.340f,
		  2.330f,  2.320f,  2.310f,  2.300f,  2.290f,  2.290f,  2.290f,
		  2.280f,  2.270f,  2.260f,  2.260f,  2.250f,  2.240f,  2.240f,
		  2.230f,  2.230f,  2.220f,  2.220f,  2.210f,  2.210f,  2.200f,
		  2.200f,  2.190f,  2.190f,  2.190f,  2.180f,  2.180f,  2.170f,
		  2.170f,  2.170f,  2.160f,  2.160f}}};
	const std::array<scan_valid_data_t, 2> SCAN_VALID = {
		{{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}}};
  // clang-format on

  s.aperture = M_PIf;
  s.rightToLeft = true;
  s.loadFromVectors(SCAN_RANGES.at(i).size(), &SCAN_RANGES.at(i).at(0), &SCAN_VALID.at(i).at(0));
}

void stock_observations::exampleImage(mrpt::img::CImage& im, int i)
{
  mrpt::io::CMemoryStream buf;
  switch (i)
  {
    case 0:
      buf.assignMemoryNotOwn(sample_image1, sizeof(sample_image1));
      break;
    case 1:
      buf.assignMemoryNotOwn(sample_image2, sizeof(sample_image2));
      break;
    default:
      THROW_EXCEPTION("Out of bound index in exampleImage()");
  }
  mrpt::serialization::archiveFrom(buf) >> im;
}
