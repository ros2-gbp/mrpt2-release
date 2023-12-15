#include <istream>
#include <iterator>
#include <memory>
#include <mrpt/core/aligned_allocator.h>
#include <mrpt/img/TColor.h>
#include <mrpt/img/color_maps.h>
#include <mrpt/maps/CLogOddsGridMapLUT.h>
#include <mrpt/maps/CMetricMap.h>
#include <mrpt/maps/CPointsMap.h>
#include <mrpt/maps/CSimplePointsMap.h>
#include <mrpt/maps/CVoxelMapOccupancyBase.h>
#include <mrpt/maps/CVoxelMapRGB.h>
#include <mrpt/maps/metric_map_types.h>
#include <mrpt/math/CMatrixFixed.h>
#include <mrpt/math/TBoundingBox.h>
#include <mrpt/math/TPoint2D.h>
#include <mrpt/math/TPoint3D.h>
#include <mrpt/math/TPose2D.h>
#include <mrpt/math/TPose3D.h>
#include <mrpt/obs/CObservation.h>
#include <mrpt/obs/CObservation2DRangeScan.h>
#include <mrpt/obs/CObservation3DRangeScan.h>
#include <mrpt/obs/CObservationVelodyneScan.h>
#include <mrpt/opengl/COctoMapVoxels.h>
#include <mrpt/opengl/CRenderizable.h>
#include <mrpt/opengl/CSetOfObjects.h>
#include <mrpt/poses/CPose2D.h>
#include <mrpt/poses/CPose3D.h>
#include <mrpt/rtti/CObject.h>
#include <mrpt/tfest/TMatchingPair.h>
#include <mrpt/typemeta/static_string.h>
#include <optional>
#include <ostream>
#include <sstream> // __str__
#include <string>
#include <vector>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include <pybind11/stl.h>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_mrpt_maps_CVoxelMapOccupancyBase_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // mrpt::maps::CVoxelMapOccupancyBase file:mrpt/maps/CVoxelMapOccupancyBase.h line:116
		pybind11::class_<mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>, std::shared_ptr<mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>>, mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>, mrpt::maps::NearestNeighborsCapable> cl(M("mrpt::maps"), "CVoxelMapOccupancyBase_mrpt_maps_VoxelNodeOccRGB_signed_char_t", "");
		cl.def_readwrite("insertionOptions", &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::insertionOptions);
		cl.def_readwrite("likelihoodOptions", &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::likelihoodOptions);
		cl.def_readwrite("renderingOptions", &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::renderingOptions);
		cl.def("isEmpty", (bool (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)() const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::isEmpty, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::isEmpty() const --> bool");
		cl.def("getAsOctoMapVoxels", (void (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)(class mrpt::opengl::COctoMapVoxels &) const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::getAsOctoMapVoxels, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::getAsOctoMapVoxels(class mrpt::opengl::COctoMapVoxels &) const --> void", pybind11::arg("gl_obj"));
		cl.def("updateVoxel", (void (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)(const double, const double, const double, bool)) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::updateVoxel, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::updateVoxel(const double, const double, const double, bool) --> void", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("occupied"));
		cl.def("getPointOccupancy", (bool (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)(const double, const double, const double, double &) const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::getPointOccupancy, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::getPointOccupancy(const double, const double, const double, double &) const --> bool", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("prob_occupancy"));
		cl.def("getOccupiedVoxels", (class std::shared_ptr<class mrpt::maps::CSimplePointsMap> (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)() const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::getOccupiedVoxels, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::getOccupiedVoxels() const --> class std::shared_ptr<class mrpt::maps::CSimplePointsMap>");
		cl.def("boundingBox", (struct mrpt::math::TBoundingBox_<float> (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)() const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::boundingBox, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::boundingBox() const --> struct mrpt::math::TBoundingBox_<float>");
		cl.def("updateCell_fast_occupied", (void (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)(struct mrpt::maps::VoxelNodeOccRGB *, const signed char, const signed char)) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::updateCell_fast_occupied, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::updateCell_fast_occupied(struct mrpt::maps::VoxelNodeOccRGB *, const signed char, const signed char) --> void", pybind11::arg("theCell"), pybind11::arg("logodd_obs"), pybind11::arg("thres"));
		cl.def("updateCell_fast_free", (void (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)(struct mrpt::maps::VoxelNodeOccRGB *, const signed char, const signed char)) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::updateCell_fast_free, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::updateCell_fast_free(struct mrpt::maps::VoxelNodeOccRGB *, const signed char, const signed char) --> void", pybind11::arg("theCell"), pybind11::arg("logodd_obs"), pybind11::arg("thres"));
		cl.def_static("get_logodd_lut", (struct mrpt::maps::CLogOddsGridMapLUT<signed char> & (*)()) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::get_logodd_lut, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::get_logodd_lut() --> struct mrpt::maps::CLogOddsGridMapLUT<signed char> &", pybind11::return_value_policy::automatic);
		cl.def_static("l2p", (float (*)(const signed char)) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::l2p, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::l2p(const signed char) --> float", pybind11::arg("l"));
		cl.def_static("l2p_255", (uint8_t (*)(const signed char)) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::l2p_255, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::l2p_255(const signed char) --> uint8_t", pybind11::arg("l"));
		cl.def_static("p2l", (signed char (*)(const float)) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::p2l, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::p2l(const float) --> signed char", pybind11::arg("p"));
		cl.def("nn_prepare_for_2d_queries", (void (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)() const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_prepare_for_2d_queries, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_prepare_for_2d_queries() const --> void");
		cl.def("nn_prepare_for_3d_queries", (void (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)() const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_prepare_for_3d_queries, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_prepare_for_3d_queries() const --> void");
		cl.def("nn_has_indices_or_ids", (bool (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)() const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_has_indices_or_ids, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_has_indices_or_ids() const --> bool");
		cl.def("nn_index_count", (size_t (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)() const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_index_count, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_index_count() const --> size_t");
		cl.def("nn_single_search", (bool (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)(const struct mrpt::math::TPoint3D_<float> &, struct mrpt::math::TPoint3D_<float> &, float &, uint64_t &) const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_single_search, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_single_search(const struct mrpt::math::TPoint3D_<float> &, struct mrpt::math::TPoint3D_<float> &, float &, uint64_t &) const --> bool", pybind11::arg("query"), pybind11::arg("result"), pybind11::arg("out_dist_sqr"), pybind11::arg("resultIndexOrID"));
		cl.def("nn_single_search", (bool (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)(const struct mrpt::math::TPoint2D_<float> &, struct mrpt::math::TPoint2D_<float> &, float &, uint64_t &) const) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_single_search, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::nn_single_search(const struct mrpt::math::TPoint2D_<float> &, struct mrpt::math::TPoint2D_<float> &, float &, uint64_t &) const --> bool", pybind11::arg("query"), pybind11::arg("result"), pybind11::arg("out_dist_sqr"), pybind11::arg("resultIndexOrID"));
		cl.def("assign", (class mrpt::maps::CVoxelMapOccupancyBase<struct mrpt::maps::VoxelNodeOccRGB> & (mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB,signed char>::*)(const class mrpt::maps::CVoxelMapOccupancyBase<struct mrpt::maps::VoxelNodeOccRGB> &)) &mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::operator=, "C++: mrpt::maps::CVoxelMapOccupancyBase<mrpt::maps::VoxelNodeOccRGB>::operator=(const class mrpt::maps::CVoxelMapOccupancyBase<struct mrpt::maps::VoxelNodeOccRGB> &) --> class mrpt::maps::CVoxelMapOccupancyBase<struct mrpt::maps::VoxelNodeOccRGB> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("assign", (class mrpt::maps::CVoxelMapBase<struct mrpt::maps::VoxelNodeOccRGB> & (mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::*)(const class mrpt::maps::CVoxelMapBase<struct mrpt::maps::VoxelNodeOccRGB> &)) &mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::operator=, "C++: mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::operator=(const class mrpt::maps::CVoxelMapBase<struct mrpt::maps::VoxelNodeOccRGB> &) --> class mrpt::maps::CVoxelMapBase<struct mrpt::maps::VoxelNodeOccRGB> &", pybind11::return_value_policy::automatic, pybind11::arg("o"));
		cl.def("asString", (std::string (mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::*)() const) &mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::asString, "C++: mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::asString() const --> std::string");
		cl.def("getVisualizationInto", (void (mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::*)(class mrpt::opengl::CSetOfObjects &) const) &mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::getVisualizationInto, "C++: mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::getVisualizationInto(class mrpt::opengl::CSetOfObjects &) const --> void", pybind11::arg("o"));
		cl.def("getAsOctoMapVoxels", (void (mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::*)(class mrpt::opengl::COctoMapVoxels &) const) &mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::getAsOctoMapVoxels, "C++: mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::getAsOctoMapVoxels(class mrpt::opengl::COctoMapVoxels &) const --> void", pybind11::arg("gl_obj"));
		cl.def("saveMetricMapRepresentationToFile", (void (mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::*)(const std::string &) const) &mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::saveMetricMapRepresentationToFile, "C++: mrpt::maps::CVoxelMapBase<mrpt::maps::VoxelNodeOccRGB>::saveMetricMapRepresentationToFile(const std::string &) const --> void", pybind11::arg("filNamePrefix"));
		cl.def_readwrite("genericMapParams", &mrpt::maps::CMetricMap::genericMapParams);
		cl.def("GetRuntimeClass", (const struct mrpt::rtti::TRuntimeClassId * (mrpt::maps::CMetricMap::*)() const) &mrpt::maps::CMetricMap::GetRuntimeClass, "C++: mrpt::maps::CMetricMap::GetRuntimeClass() const --> const struct mrpt::rtti::TRuntimeClassId *", pybind11::return_value_policy::automatic);
		cl.def_static("GetRuntimeClassIdStatic", (const struct mrpt::rtti::TRuntimeClassId & (*)()) &mrpt::maps::CMetricMap::GetRuntimeClassIdStatic, "C++: mrpt::maps::CMetricMap::GetRuntimeClassIdStatic() --> const struct mrpt::rtti::TRuntimeClassId &", pybind11::return_value_policy::automatic);
		cl.def("clear", (void (mrpt::maps::CMetricMap::*)()) &mrpt::maps::CMetricMap::clear, "Erase all the contents of the map \n\nC++: mrpt::maps::CMetricMap::clear() --> void");
		cl.def("isEmpty", (bool (mrpt::maps::CMetricMap::*)() const) &mrpt::maps::CMetricMap::isEmpty, "Returns true if the map is empty/no observation has been inserted.\n\nC++: mrpt::maps::CMetricMap::isEmpty() const --> bool");
		cl.def("boundingBox", (struct mrpt::math::TBoundingBox_<float> (mrpt::maps::CMetricMap::*)() const) &mrpt::maps::CMetricMap::boundingBox, "Returns the bounding box of the metric map, or (0,0,0)-(0,0,0) (the\n default value of mrpt::math::TBoundingBoxf() if not implemented in the\n derived class or the map is empty.\n\nC++: mrpt::maps::CMetricMap::boundingBox() const --> struct mrpt::math::TBoundingBox_<float>");
		cl.def("loadFromProbabilisticPosesAndObservations", (void (mrpt::maps::CMetricMap::*)(const class mrpt::maps::CSimpleMap &)) &mrpt::maps::CMetricMap::loadFromProbabilisticPosesAndObservations, "Load the map contents from a CSimpleMap object, erasing all previous\n content of the map. This is done invoking `insertObservation()` for each\n observation at the mean 3D robot pose of each pose-observations pair in\n the CSimpleMap object.\n\n \n insertObservation, CSimpleMap\n \n\n std::exception Some internal steps in invoked methods can\n raise exceptions on invalid parameters, etc...\n\nC++: mrpt::maps::CMetricMap::loadFromProbabilisticPosesAndObservations(const class mrpt::maps::CSimpleMap &) --> void", pybind11::arg("Map"));
		cl.def("loadFromSimpleMap", (void (mrpt::maps::CMetricMap::*)(const class mrpt::maps::CSimpleMap &)) &mrpt::maps::CMetricMap::loadFromSimpleMap, "! \n\nC++: mrpt::maps::CMetricMap::loadFromSimpleMap(const class mrpt::maps::CSimpleMap &) --> void", pybind11::arg("Map"));
		cl.def("insertObs", [](mrpt::maps::CMetricMap &o, const class mrpt::obs::CObservation & a0) -> bool { return o.insertObs(a0); }, "", pybind11::arg("obs"));
		cl.def("insertObs", (bool (mrpt::maps::CMetricMap::*)(const class mrpt::obs::CObservation &, const class mrpt::poses::CPose3D *)) &mrpt::maps::CMetricMap::insertObs, "C++: mrpt::maps::CMetricMap::insertObs(const class mrpt::obs::CObservation &, const class mrpt::poses::CPose3D *) --> bool", pybind11::arg("obs"), pybind11::arg("robotPose"));
		cl.def("insertObs", [](mrpt::maps::CMetricMap &o, const class mrpt::obs::CSensoryFrame & a0) -> bool { return o.insertObs(a0); }, "", pybind11::arg("sf"));
		cl.def("insertObs", (bool (mrpt::maps::CMetricMap::*)(const class mrpt::obs::CSensoryFrame &, const class mrpt::poses::CPose3D *)) &mrpt::maps::CMetricMap::insertObs, "C++: mrpt::maps::CMetricMap::insertObs(const class mrpt::obs::CSensoryFrame &, const class mrpt::poses::CPose3D *) --> bool", pybind11::arg("sf"), pybind11::arg("robotPose"));
		cl.def("computeObservationLikelihood", (double (mrpt::maps::CMetricMap::*)(const class mrpt::obs::CObservation &, const class mrpt::poses::CPose3D &) const) &mrpt::maps::CMetricMap::computeObservationLikelihood, "Computes the log-likelihood of a given observation given an arbitrary\n robot 3D pose.\n See: \n\n \n The robot's pose the observation is supposed to be taken\n from.\n \n\n The observation.\n \n\n This method returns a log-likelihood.\n\n \n Used in particle filter algorithms, see: CMultiMetricMapPDF::update\n\nC++: mrpt::maps::CMetricMap::computeObservationLikelihood(const class mrpt::obs::CObservation &, const class mrpt::poses::CPose3D &) const --> double", pybind11::arg("obs"), pybind11::arg("takenFrom"));
		cl.def("canComputeObservationLikelihood", (bool (mrpt::maps::CMetricMap::*)(const class mrpt::obs::CObservation &) const) &mrpt::maps::CMetricMap::canComputeObservationLikelihood, "Returns true if this map is able to compute a sensible likelihood\n function for this observation (i.e. an occupancy grid map cannot with an\n image).\n See: \n\n \n The observation.\n \n\n computeObservationLikelihood,\n genericMapParams.enableObservationLikelihood\n\nC++: mrpt::maps::CMetricMap::canComputeObservationLikelihood(const class mrpt::obs::CObservation &) const --> bool", pybind11::arg("obs"));
		cl.def("computeObservationsLikelihood", (double (mrpt::maps::CMetricMap::*)(const class mrpt::obs::CSensoryFrame &, const class mrpt::poses::CPose3D &)) &mrpt::maps::CMetricMap::computeObservationsLikelihood, "Returns the sum of the log-likelihoods of each individual observation\n within a mrpt::obs::CSensoryFrame.\n See: \n\n \n The robot's pose the observation is supposed to be taken\n from.\n \n\n The set of observations in a CSensoryFrame.\n \n\n This method returns a log-likelihood.\n \n\n canComputeObservationsLikelihood\n\nC++: mrpt::maps::CMetricMap::computeObservationsLikelihood(const class mrpt::obs::CSensoryFrame &, const class mrpt::poses::CPose3D &) --> double", pybind11::arg("sf"), pybind11::arg("takenFrom"));
		cl.def("canComputeObservationsLikelihood", (bool (mrpt::maps::CMetricMap::*)(const class mrpt::obs::CSensoryFrame &) const) &mrpt::maps::CMetricMap::canComputeObservationsLikelihood, "Returns true if this map is able to compute a sensible likelihood\n function for this observation (i.e. an occupancy grid map cannot with an\n image).\n See: \n\n \n The observations.\n \n\n canComputeObservationLikelihood\n\nC++: mrpt::maps::CMetricMap::canComputeObservationsLikelihood(const class mrpt::obs::CSensoryFrame &) const --> bool", pybind11::arg("sf"));
		cl.def("determineMatching2D", (void (mrpt::maps::CMetricMap::*)(const class mrpt::maps::CMetricMap *, const class mrpt::poses::CPose2D &, class mrpt::tfest::TMatchingPairListTempl<float> &, const struct mrpt::maps::TMatchingParams &, struct mrpt::maps::TMatchingExtraResults &) const) &mrpt::maps::CMetricMap::determineMatching2D, "Computes the matching between this and another 2D point map, which\nincludes finding:\n   - The set of points pairs in each map\n   - The mean squared distance between corresponding pairs.\n\n   The algorithm is:\n		- For each point in \"otherMap\":\n			- Transform the point according to otherMapPose\n			- Search with a KD-TREE the closest correspondences in \"this\"\nmap.\n			- Add to the set of candidate matchings, if it passes all the\nthresholds in params.\n\n   This method is the most time critical one into ICP-like algorithms.\n\n \n        [IN] The other map to compute the matching with.\n \n\n    [IN] The pose of the other map as seen from\n\"this\".\n \n\n          [IN] Parameters for the determination of\npairings.\n \n\n [OUT] The detected matchings pairs.\n \n\n    [OUT] Other results.\n \n\n compute3DMatchingRatio\n\nC++: mrpt::maps::CMetricMap::determineMatching2D(const class mrpt::maps::CMetricMap *, const class mrpt::poses::CPose2D &, class mrpt::tfest::TMatchingPairListTempl<float> &, const struct mrpt::maps::TMatchingParams &, struct mrpt::maps::TMatchingExtraResults &) const --> void", pybind11::arg("otherMap"), pybind11::arg("otherMapPose"), pybind11::arg("correspondences"), pybind11::arg("params"), pybind11::arg("extraResults"));
		cl.def("determineMatching3D", (void (mrpt::maps::CMetricMap::*)(const class mrpt::maps::CMetricMap *, const class mrpt::poses::CPose3D &, class mrpt::tfest::TMatchingPairListTempl<float> &, const struct mrpt::maps::TMatchingParams &, struct mrpt::maps::TMatchingExtraResults &) const) &mrpt::maps::CMetricMap::determineMatching3D, "Computes the matchings between this and another 3D points map - method\nused in 3D-ICP.\n  This method finds the set of point pairs in each map.\n\n  The method is the most time critical one into ICP-like algorithms.\n\n  The algorithm is:\n		- For each point in \"otherMap\":\n			- Transform the point according to otherMapPose\n			- Search with a KD-TREE the closest correspondences in \"this\"\nmap.\n			- Add to the set of candidate matchings, if it passes all the\nthresholds in params.\n\n \n        [IN] The other map to compute the matching with.\n \n\n    [IN] The pose of the other map as seen from\n\"this\".\n \n\n          [IN] Parameters for the determination of\npairings.\n \n\n [OUT] The detected matchings pairs.\n \n\n    [OUT] Other results.\n \n\n compute3DMatchingRatio\n\nC++: mrpt::maps::CMetricMap::determineMatching3D(const class mrpt::maps::CMetricMap *, const class mrpt::poses::CPose3D &, class mrpt::tfest::TMatchingPairListTempl<float> &, const struct mrpt::maps::TMatchingParams &, struct mrpt::maps::TMatchingExtraResults &) const --> void", pybind11::arg("otherMap"), pybind11::arg("otherMapPose"), pybind11::arg("correspondences"), pybind11::arg("params"), pybind11::arg("extraResults"));
		cl.def("compute3DMatchingRatio", (float (mrpt::maps::CMetricMap::*)(const class mrpt::maps::CMetricMap *, const class mrpt::poses::CPose3D &, const struct mrpt::maps::TMatchingRatioParams &) const) &mrpt::maps::CMetricMap::compute3DMatchingRatio, "Computes the ratio in [0,1] of correspondences between \"this\" and the\n \"otherMap\" map, whose 6D pose relative to \"this\" is \"otherMapPose\"\n   In the case of a multi-metric map, this returns the average between the\n maps. This method always return 0 for grid maps.\n \n\n      [IN] The other map to compute the matching with.\n \n\n  [IN] The 6D pose of the other map as seen from\n \"this\".\n \n\n        [IN] Matching parameters\n \n\n The matching ratio [0,1]\n \n\n determineMatching2D\n\nC++: mrpt::maps::CMetricMap::compute3DMatchingRatio(const class mrpt::maps::CMetricMap *, const class mrpt::poses::CPose3D &, const struct mrpt::maps::TMatchingRatioParams &) const --> float", pybind11::arg("otherMap"), pybind11::arg("otherMapPose"), pybind11::arg("params"));
		cl.def("saveMetricMapRepresentationToFile", (void (mrpt::maps::CMetricMap::*)(const std::string &) const) &mrpt::maps::CMetricMap::saveMetricMapRepresentationToFile, "This virtual method saves the map to a file \"filNamePrefix\"+<\n some_file_extension >, as an image or in any other applicable way (Notice\n that other methods to save the map may be implemented in classes\n implementing this virtual interface). \n\nC++: mrpt::maps::CMetricMap::saveMetricMapRepresentationToFile(const std::string &) const --> void", pybind11::arg("filNamePrefix"));
		cl.def("auxParticleFilterCleanUp", (void (mrpt::maps::CMetricMap::*)()) &mrpt::maps::CMetricMap::auxParticleFilterCleanUp, "This method is called at the end of each \"prediction-update-map\n insertion\" cycle within\n \"mrpt::slam::CMetricMapBuilderRBPF::processActionObservation\".\n  This method should normally do nothing, but in some cases can be used\n to free auxiliary cached variables.\n\nC++: mrpt::maps::CMetricMap::auxParticleFilterCleanUp() --> void");
		cl.def("squareDistanceToClosestCorrespondence", (float (mrpt::maps::CMetricMap::*)(float, float) const) &mrpt::maps::CMetricMap::squareDistanceToClosestCorrespondence, "Returns the square distance from the 2D point (x0,y0) to the closest\n correspondence in the map. \n\nC++: mrpt::maps::CMetricMap::squareDistanceToClosestCorrespondence(float, float) const --> float", pybind11::arg("x0"), pybind11::arg("y0"));
		cl.def("getAsSimplePointsMap", (class mrpt::maps::CSimplePointsMap * (mrpt::maps::CMetricMap::*)()) &mrpt::maps::CMetricMap::getAsSimplePointsMap, "C++: mrpt::maps::CMetricMap::getAsSimplePointsMap() --> class mrpt::maps::CSimplePointsMap *", pybind11::return_value_policy::automatic);
		cl.def("assign", (class mrpt::maps::CMetricMap & (mrpt::maps::CMetricMap::*)(const class mrpt::maps::CMetricMap &)) &mrpt::maps::CMetricMap::operator=, "C++: mrpt::maps::CMetricMap::operator=(const class mrpt::maps::CMetricMap &) --> class mrpt::maps::CMetricMap &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("nn_has_indices_or_ids", (bool (mrpt::maps::NearestNeighborsCapable::*)() const) &mrpt::maps::NearestNeighborsCapable::nn_has_indices_or_ids, "Returns true if the rest of `nn_*` methods will populate the output\n indices values with 0-based contiguous **indices**.\n Returns false if indices are actually sparse **ID numbers** without any\n expectation of they be contiguous or start near zero.\n\nC++: mrpt::maps::NearestNeighborsCapable::nn_has_indices_or_ids() const --> bool");
		cl.def("nn_prepare_for_2d_queries", (void (mrpt::maps::NearestNeighborsCapable::*)() const) &mrpt::maps::NearestNeighborsCapable::nn_prepare_for_2d_queries, "Must be called before calls to `nn_*_search()` to ensure the required\n  data structures are ready for queries (e.g. KD-trees). Useful in\n  multithreading applications.\n\nC++: mrpt::maps::NearestNeighborsCapable::nn_prepare_for_2d_queries() const --> void");
		cl.def("nn_prepare_for_3d_queries", (void (mrpt::maps::NearestNeighborsCapable::*)() const) &mrpt::maps::NearestNeighborsCapable::nn_prepare_for_3d_queries, "Must be called before calls to `nn_*_search()` to ensure the required\n  data structures are ready for queries (e.g. KD-trees). Useful in\n  multithreading applications.\n\nC++: mrpt::maps::NearestNeighborsCapable::nn_prepare_for_3d_queries() const --> void");
		cl.def("nn_index_count", (size_t (mrpt::maps::NearestNeighborsCapable::*)() const) &mrpt::maps::NearestNeighborsCapable::nn_index_count, "If nn_has_indices_or_ids() returns `true`, this must return the number\n of \"points\" (or whatever entity) the indices correspond to. Otherwise,\n the return value should be ignored.\n\nC++: mrpt::maps::NearestNeighborsCapable::nn_index_count() const --> size_t");
		cl.def("nn_single_search", (bool (mrpt::maps::NearestNeighborsCapable::*)(const struct mrpt::math::TPoint3D_<float> &, struct mrpt::math::TPoint3D_<float> &, float &, uint64_t &) const) &mrpt::maps::NearestNeighborsCapable::nn_single_search, "Search for the closest 3D point to a given one.\n\n \n The query input point.\n \n\n The found closest point.\n \n\n The square Euclidean distance between the query\n and the returned point.\n \n\n The index or ID of the result point in the\n map.\n\n \n True if successful, false if no point was found.\n\nC++: mrpt::maps::NearestNeighborsCapable::nn_single_search(const struct mrpt::math::TPoint3D_<float> &, struct mrpt::math::TPoint3D_<float> &, float &, uint64_t &) const --> bool", pybind11::arg("query"), pybind11::arg("result"), pybind11::arg("out_dist_sqr"), pybind11::arg("resultIndexOrIDOrID"));
		cl.def("nn_single_search", (bool (mrpt::maps::NearestNeighborsCapable::*)(const struct mrpt::math::TPoint2D_<float> &, struct mrpt::math::TPoint2D_<float> &, float &, uint64_t &) const) &mrpt::maps::NearestNeighborsCapable::nn_single_search, "C++: mrpt::maps::NearestNeighborsCapable::nn_single_search(const struct mrpt::math::TPoint2D_<float> &, struct mrpt::math::TPoint2D_<float> &, float &, uint64_t &) const --> bool", pybind11::arg("query"), pybind11::arg("result"), pybind11::arg("out_dist_sqr"), pybind11::arg("resultIndexOrIDOrID"));
		cl.def("assign", (class mrpt::maps::NearestNeighborsCapable & (mrpt::maps::NearestNeighborsCapable::*)(const class mrpt::maps::NearestNeighborsCapable &)) &mrpt::maps::NearestNeighborsCapable::operator=, "C++: mrpt::maps::NearestNeighborsCapable::operator=(const class mrpt::maps::NearestNeighborsCapable &) --> class mrpt::maps::NearestNeighborsCapable &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
