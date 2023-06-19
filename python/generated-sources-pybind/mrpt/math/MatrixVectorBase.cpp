#include <Eigen/Dense>
#include <ios>
#include <istream>
#include <iterator>
#include <locale>
#include <memory>
#include <mrpt/math/CMatrixDynamic.h>
#include <mrpt/math/CMatrixFixed.h>
#include <mrpt/math/CVectorDynamic.h>
#include <mrpt/math/MatrixVectorBase.h>
#include <mrpt/math/math_frwds.h>
#include <mrpt/math/matrix_size_t.h>
#include <optional>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
#include <string>

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

void bind_mrpt_math_MatrixVectorBase(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // mrpt::math::MatrixVectorBase file:mrpt/math/MatrixVectorBase.h line:57
		pybind11::class_<mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>, std::shared_ptr<mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>>> cl(M("mrpt::math"), "MatrixVectorBase_double_mrpt_math_CMatrixDynamic_double_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>(); } ) );
		cl.def( pybind11::init( [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>> const &o){ return new mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>(o); } ) );
		cl.def("fill", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const double &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::fill, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::fill(const double &) --> void", pybind11::arg("val"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setConstant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setConstant(const double) --> void", pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(size_t, size_t, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setConstant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setConstant(size_t, size_t, const double) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(size_t, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setConstant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setConstant(size_t, const double) --> void", pybind11::arg("nrows"), pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixDynamic<double> (*)(const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::Constant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::Constant(const double) --> class mrpt::math::CMatrixDynamic<double>", pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixDynamic<double> (*)(size_t, size_t, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::Constant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::Constant(size_t, size_t, const double) --> class mrpt::math::CMatrixDynamic<double>", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("assign", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const unsigned long, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::assign, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::assign(const unsigned long, const double) --> void", pybind11::arg("N"), pybind11::arg("value"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)()) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setZero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setZero() --> void");
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setZero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setZero(size_t, size_t) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(size_t)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setZero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::setZero(size_t) --> void", pybind11::arg("nrows"));
		cl.def_static("Zero", (class mrpt::math::CMatrixDynamic<double> (*)()) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::Zero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::Zero() --> class mrpt::math::CMatrixDynamic<double>");
		cl.def_static("Zero", (class mrpt::math::CMatrixDynamic<double> (*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::Zero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::Zero(size_t, size_t) --> class mrpt::math::CMatrixDynamic<double>", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("coeffRef", (double & (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(int, int)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::coeffRef, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::coeffRef(int, int) --> double &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("coeff", (const double & (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(int, int) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::coeff, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::coeff(int, int) const --> const double &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("isSquare", (bool (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::isSquare, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::isSquare() const --> bool");
		cl.def("empty", (bool (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::empty, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::empty() const --> bool");
		cl.def("norm_inf", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::norm_inf, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::norm_inf() const --> double");
		cl.def("norm", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::norm, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::norm() const --> double");
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator+=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator+=(double) --> void", pybind11::arg("s"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator-=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator-=(double) --> void", pybind11::arg("s"));
		cl.def("__imul__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator*=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator*=(double) --> void", pybind11::arg("s"));
		cl.def("__add__", (class mrpt::math::CMatrixDynamic<double> (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const class mrpt::math::CMatrixDynamic<double> &) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator+, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator+(const class mrpt::math::CMatrixDynamic<double> &) const --> class mrpt::math::CMatrixDynamic<double>", pybind11::arg("m2"));
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const class mrpt::math::CMatrixDynamic<double> &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator+=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator+=(const class mrpt::math::CMatrixDynamic<double> &) --> void", pybind11::arg("m2"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const class mrpt::math::CMatrixDynamic<double> &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator-=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator-=(const class mrpt::math::CMatrixDynamic<double> &) --> void", pybind11::arg("m2"));
		cl.def("sum", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::sum, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::sum() const --> double");
		cl.def("sum_abs", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::sum_abs, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::sum_abs() const --> double");
		cl.def("asString", (std::string (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::asString, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::asString() const --> std::string");
		cl.def("inMatlabFormat", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>> const &o) -> std::string { return o.inMatlabFormat(); }, "");
		cl.def("inMatlabFormat", (std::string (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const unsigned long) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::inMatlabFormat, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::inMatlabFormat(const unsigned long) const --> std::string", pybind11::arg("decimal_digits"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>> const &o, const std::string & a0) -> void { return o.saveToTextFile(a0); }, "", pybind11::arg("file"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1) -> void { return o.saveToTextFile(a0, a1); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1, bool const & a2) -> void { return o.saveToTextFile(a0, a1, a2); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"));
		cl.def("saveToTextFile", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::saveToTextFile, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::saveToTextFile(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const --> void", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"), pybind11::arg("userHeader"));
		cl.def("loadFromTextFile", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const std::string &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::loadFromTextFile, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::loadFromTextFile(const std::string &) --> void", pybind11::arg("file"));
		cl.def("assign", (class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixDynamic<double> > & (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>>::*)(const class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixDynamic<double> > &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixDynamic<double>>::operator=(const class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixDynamic<double> > &) --> class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixDynamic<double> > &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		cl.def("__str__", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixDynamic<double>> const &o) -> std::string { std::ostringstream s; using namespace mrpt::math; s << o; return s.str(); } );
	}
	{ // mrpt::math::MatrixVectorBase file:mrpt/math/MatrixVectorBase.h line:57
		pybind11::class_<mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>, std::shared_ptr<mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>>> cl(M("mrpt::math"), "MatrixVectorBase_double_mrpt_math_CMatrixFixed_double_4_4_t", "");
		cl.def( pybind11::init( [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>> const &o){ return new mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>(o); } ) );
		cl.def( pybind11::init( [](){ return new mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>(); } ) );
		cl.def("fill", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const double &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::fill, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::fill(const double &) --> void", pybind11::arg("val"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setConstant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setConstant(const double) --> void", pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(size_t, size_t, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setConstant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setConstant(size_t, size_t, const double) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(size_t, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setConstant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setConstant(size_t, const double) --> void", pybind11::arg("nrows"), pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixFixed<double, 4, 4> (*)(const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::Constant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::Constant(const double) --> class mrpt::math::CMatrixFixed<double, 4, 4>", pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixFixed<double, 4, 4> (*)(size_t, size_t, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::Constant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::Constant(size_t, size_t, const double) --> class mrpt::math::CMatrixFixed<double, 4, 4>", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("assign", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const unsigned long, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::assign, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::assign(const unsigned long, const double) --> void", pybind11::arg("N"), pybind11::arg("value"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)()) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setZero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setZero() --> void");
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setZero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setZero(size_t, size_t) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(size_t)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setZero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::setZero(size_t) --> void", pybind11::arg("nrows"));
		cl.def_static("Zero", (class mrpt::math::CMatrixFixed<double, 4, 4> (*)()) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::Zero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::Zero() --> class mrpt::math::CMatrixFixed<double, 4, 4>");
		cl.def_static("Zero", (class mrpt::math::CMatrixFixed<double, 4, 4> (*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::Zero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::Zero(size_t, size_t) --> class mrpt::math::CMatrixFixed<double, 4, 4>", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("coeffRef", (double & (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(int, int)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::coeffRef, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::coeffRef(int, int) --> double &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("coeff", (const double & (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(int, int) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::coeff, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::coeff(int, int) const --> const double &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("isSquare", (bool (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::isSquare, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::isSquare() const --> bool");
		cl.def("empty", (bool (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::empty, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::empty() const --> bool");
		cl.def("norm_inf", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::norm_inf, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::norm_inf() const --> double");
		cl.def("norm", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::norm, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::norm() const --> double");
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator+=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator+=(double) --> void", pybind11::arg("s"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator-=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator-=(double) --> void", pybind11::arg("s"));
		cl.def("__imul__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator*=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator*=(double) --> void", pybind11::arg("s"));
		cl.def("__add__", (class mrpt::math::CMatrixFixed<double, 4, 4> (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const class mrpt::math::CMatrixFixed<double, 4, 4> &) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator+, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator+(const class mrpt::math::CMatrixFixed<double, 4, 4> &) const --> class mrpt::math::CMatrixFixed<double, 4, 4>", pybind11::arg("m2"));
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const class mrpt::math::CMatrixFixed<double, 4, 4> &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator+=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator+=(const class mrpt::math::CMatrixFixed<double, 4, 4> &) --> void", pybind11::arg("m2"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const class mrpt::math::CMatrixFixed<double, 4, 4> &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator-=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator-=(const class mrpt::math::CMatrixFixed<double, 4, 4> &) --> void", pybind11::arg("m2"));
		cl.def("sum", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::sum, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::sum() const --> double");
		cl.def("sum_abs", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::sum_abs, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::sum_abs() const --> double");
		cl.def("asString", (std::string (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::asString, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::asString() const --> std::string");
		cl.def("inMatlabFormat", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>> const &o) -> std::string { return o.inMatlabFormat(); }, "");
		cl.def("inMatlabFormat", (std::string (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const unsigned long) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::inMatlabFormat, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::inMatlabFormat(const unsigned long) const --> std::string", pybind11::arg("decimal_digits"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>> const &o, const std::string & a0) -> void { return o.saveToTextFile(a0); }, "", pybind11::arg("file"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1) -> void { return o.saveToTextFile(a0, a1); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1, bool const & a2) -> void { return o.saveToTextFile(a0, a1, a2); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"));
		cl.def("saveToTextFile", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::saveToTextFile, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::saveToTextFile(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const --> void", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"), pybind11::arg("userHeader"));
		cl.def("loadFromTextFile", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const std::string &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::loadFromTextFile, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::loadFromTextFile(const std::string &) --> void", pybind11::arg("file"));
		cl.def("assign", (class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixFixed<double, 4, 4> > & (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>>::*)(const class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixFixed<double, 4, 4> > &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 4, 4>>::operator=(const class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixFixed<double, 4, 4> > &) --> class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixFixed<double, 4, 4> > &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		cl.def("__str__", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 4, 4>> const &o) -> std::string { std::ostringstream s; using namespace mrpt::math; s << o; return s.str(); } );
	}
}
