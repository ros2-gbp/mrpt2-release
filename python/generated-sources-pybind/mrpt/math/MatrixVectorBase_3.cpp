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

void bind_mrpt_math_MatrixVectorBase_3(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // mrpt::math::MatrixVectorBase file:mrpt/math/MatrixVectorBase.h line:57
		pybind11::class_<mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>, std::shared_ptr<mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>>> cl(M("mrpt::math"), "MatrixVectorBase_unsigned_short_mrpt_math_CMatrixDynamic_unsigned_short_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>(); } ) );
		cl.def( pybind11::init( [](mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>> const &o){ return new mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>(o); } ) );
		cl.def("fill", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const unsigned short &)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::fill, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::fill(const unsigned short &) --> void", pybind11::arg("val"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const unsigned short)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setConstant, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setConstant(const unsigned short) --> void", pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(size_t, size_t, const unsigned short)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setConstant, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setConstant(size_t, size_t, const unsigned short) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(size_t, const unsigned short)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setConstant, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setConstant(size_t, const unsigned short) --> void", pybind11::arg("nrows"), pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixDynamic<unsigned short> (*)(const unsigned short)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::Constant, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::Constant(const unsigned short) --> class mrpt::math::CMatrixDynamic<unsigned short>", pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixDynamic<unsigned short> (*)(size_t, size_t, const unsigned short)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::Constant, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::Constant(size_t, size_t, const unsigned short) --> class mrpt::math::CMatrixDynamic<unsigned short>", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("assign", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const unsigned long, const unsigned short)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::assign, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::assign(const unsigned long, const unsigned short) --> void", pybind11::arg("N"), pybind11::arg("value"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)()) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setZero, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setZero() --> void");
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setZero, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setZero(size_t, size_t) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(size_t)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setZero, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::setZero(size_t) --> void", pybind11::arg("nrows"));
		cl.def_static("Zero", (class mrpt::math::CMatrixDynamic<unsigned short> (*)()) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::Zero, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::Zero() --> class mrpt::math::CMatrixDynamic<unsigned short>");
		cl.def_static("Zero", (class mrpt::math::CMatrixDynamic<unsigned short> (*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::Zero, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::Zero(size_t, size_t) --> class mrpt::math::CMatrixDynamic<unsigned short>", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("coeffRef", (unsigned short & (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(int, int)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::coeffRef, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::coeffRef(int, int) --> unsigned short &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("coeff", (const unsigned short & (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(int, int) const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::coeff, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::coeff(int, int) const --> const unsigned short &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("isSquare", (bool (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::isSquare, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::isSquare() const --> bool");
		cl.def("empty", (bool (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::empty, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::empty() const --> bool");
		cl.def("norm_inf", (unsigned short (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::norm_inf, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::norm_inf() const --> unsigned short");
		cl.def("norm", (unsigned short (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::norm, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::norm() const --> unsigned short");
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(unsigned short)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator+=, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator+=(unsigned short) --> void", pybind11::arg("s"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(unsigned short)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator-=, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator-=(unsigned short) --> void", pybind11::arg("s"));
		cl.def("__imul__", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(unsigned short)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator*=, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator*=(unsigned short) --> void", pybind11::arg("s"));
		cl.def("__add__", (class mrpt::math::CMatrixDynamic<unsigned short> (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const class mrpt::math::CMatrixDynamic<unsigned short> &) const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator+, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator+(const class mrpt::math::CMatrixDynamic<unsigned short> &) const --> class mrpt::math::CMatrixDynamic<unsigned short>", pybind11::arg("m2"));
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const class mrpt::math::CMatrixDynamic<unsigned short> &)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator+=, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator+=(const class mrpt::math::CMatrixDynamic<unsigned short> &) --> void", pybind11::arg("m2"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const class mrpt::math::CMatrixDynamic<unsigned short> &)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator-=, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator-=(const class mrpt::math::CMatrixDynamic<unsigned short> &) --> void", pybind11::arg("m2"));
		cl.def("sum", (unsigned short (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::sum, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::sum() const --> unsigned short");
		cl.def("sum_abs", (unsigned short (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::sum_abs, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::sum_abs() const --> unsigned short");
		cl.def("asString", (std::string (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::asString, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::asString() const --> std::string");
		cl.def("inMatlabFormat", [](mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>> const &o) -> std::string { return o.inMatlabFormat(); }, "");
		cl.def("inMatlabFormat", (std::string (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const unsigned long) const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::inMatlabFormat, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::inMatlabFormat(const unsigned long) const --> std::string", pybind11::arg("decimal_digits"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>> const &o, const std::string & a0) -> void { return o.saveToTextFile(a0); }, "", pybind11::arg("file"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1) -> void { return o.saveToTextFile(a0, a1); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1, bool const & a2) -> void { return o.saveToTextFile(a0, a1, a2); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"));
		cl.def("saveToTextFile", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::saveToTextFile, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::saveToTextFile(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const --> void", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"), pybind11::arg("userHeader"));
		cl.def("loadFromTextFile", (void (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const std::string &)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::loadFromTextFile, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::loadFromTextFile(const std::string &) --> void", pybind11::arg("file"));
		cl.def("assign", (class mrpt::math::MatrixVectorBase<unsigned short, class mrpt::math::CMatrixDynamic<unsigned short> > & (mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>>::*)(const class mrpt::math::MatrixVectorBase<unsigned short, class mrpt::math::CMatrixDynamic<unsigned short> > &)) &mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator=, "C++: mrpt::math::MatrixVectorBase<unsigned short, mrpt::math::CMatrixDynamic<unsigned short>>::operator=(const class mrpt::math::MatrixVectorBase<unsigned short, class mrpt::math::CMatrixDynamic<unsigned short> > &) --> class mrpt::math::MatrixVectorBase<unsigned short, class mrpt::math::CMatrixDynamic<unsigned short> > &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		cl.def("__str__", [](mrpt::math::MatrixVectorBase<unsigned short,mrpt::math::CMatrixDynamic<unsigned short>> const &o) -> std::string { std::ostringstream s; using namespace mrpt::math; s << o; return s.str(); } );
	}
	{ // mrpt::math::MatrixVectorBase file:mrpt/math/MatrixVectorBase.h line:57
		pybind11::class_<mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>, std::shared_ptr<mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>>> cl(M("mrpt::math"), "MatrixVectorBase_float_mrpt_math_CMatrixFixed_float_3_3_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>(); } ) );
		cl.def("fill", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(const float &)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::fill, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::fill(const float &) --> void", pybind11::arg("val"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(const float)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setConstant, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setConstant(const float) --> void", pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(size_t, size_t, const float)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setConstant, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setConstant(size_t, size_t, const float) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(size_t, const float)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setConstant, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setConstant(size_t, const float) --> void", pybind11::arg("nrows"), pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixFixed<float, 3, 3> (*)(const float)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::Constant, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::Constant(const float) --> class mrpt::math::CMatrixFixed<float, 3, 3>", pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixFixed<float, 3, 3> (*)(size_t, size_t, const float)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::Constant, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::Constant(size_t, size_t, const float) --> class mrpt::math::CMatrixFixed<float, 3, 3>", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("assign", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(const unsigned long, const float)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::assign, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::assign(const unsigned long, const float) --> void", pybind11::arg("N"), pybind11::arg("value"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)()) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setZero, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setZero() --> void");
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setZero, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setZero(size_t, size_t) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(size_t)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setZero, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::setZero(size_t) --> void", pybind11::arg("nrows"));
		cl.def_static("Zero", (class mrpt::math::CMatrixFixed<float, 3, 3> (*)()) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::Zero, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::Zero() --> class mrpt::math::CMatrixFixed<float, 3, 3>");
		cl.def_static("Zero", (class mrpt::math::CMatrixFixed<float, 3, 3> (*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::Zero, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::Zero(size_t, size_t) --> class mrpt::math::CMatrixFixed<float, 3, 3>", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("coeffRef", (float & (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(int, int)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::coeffRef, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::coeffRef(int, int) --> float &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("coeff", (const float & (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(int, int) const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::coeff, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::coeff(int, int) const --> const float &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("isSquare", (bool (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)() const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::isSquare, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::isSquare() const --> bool");
		cl.def("empty", (bool (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)() const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::empty, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::empty() const --> bool");
		cl.def("norm_inf", (float (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)() const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::norm_inf, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::norm_inf() const --> float");
		cl.def("norm", (float (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)() const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::norm, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::norm() const --> float");
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(float)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator+=, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator+=(float) --> void", pybind11::arg("s"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(float)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator-=, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator-=(float) --> void", pybind11::arg("s"));
		cl.def("__imul__", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(float)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator*=, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator*=(float) --> void", pybind11::arg("s"));
		cl.def("__add__", (class mrpt::math::CMatrixFixed<float, 3, 3> (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(const class mrpt::math::CMatrixFixed<float, 3, 3> &) const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator+, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator+(const class mrpt::math::CMatrixFixed<float, 3, 3> &) const --> class mrpt::math::CMatrixFixed<float, 3, 3>", pybind11::arg("m2"));
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(const class mrpt::math::CMatrixFixed<float, 3, 3> &)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator+=, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator+=(const class mrpt::math::CMatrixFixed<float, 3, 3> &) --> void", pybind11::arg("m2"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(const class mrpt::math::CMatrixFixed<float, 3, 3> &)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator-=, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::operator-=(const class mrpt::math::CMatrixFixed<float, 3, 3> &) --> void", pybind11::arg("m2"));
		cl.def("sum", (float (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)() const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::sum, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::sum() const --> float");
		cl.def("sum_abs", (float (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)() const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::sum_abs, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::sum_abs() const --> float");
		cl.def("asString", (std::string (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)() const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::asString, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::asString() const --> std::string");
		cl.def("inMatlabFormat", [](mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>> const &o) -> std::string { return o.inMatlabFormat(); }, "");
		cl.def("inMatlabFormat", (std::string (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(const unsigned long) const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::inMatlabFormat, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::inMatlabFormat(const unsigned long) const --> std::string", pybind11::arg("decimal_digits"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>> const &o, const std::string & a0) -> void { return o.saveToTextFile(a0); }, "", pybind11::arg("file"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1) -> void { return o.saveToTextFile(a0, a1); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1, bool const & a2) -> void { return o.saveToTextFile(a0, a1, a2); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"));
		cl.def("saveToTextFile", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::saveToTextFile, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::saveToTextFile(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const --> void", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"), pybind11::arg("userHeader"));
		cl.def("loadFromTextFile", (void (mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>>::*)(const std::string &)) &mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::loadFromTextFile, "C++: mrpt::math::MatrixVectorBase<float, mrpt::math::CMatrixFixed<float, 3, 3>>::loadFromTextFile(const std::string &) --> void", pybind11::arg("file"));

		cl.def("__str__", [](mrpt::math::MatrixVectorBase<float,mrpt::math::CMatrixFixed<float, 3, 3>> const &o) -> std::string { std::ostringstream s; using namespace mrpt::math; s << o; return s.str(); } );
	}
}
