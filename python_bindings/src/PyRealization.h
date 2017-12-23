#ifndef HALIDE_PYTHON_BINDINGS_PYREALIZATION_H
#define HALIDE_PYTHON_BINDINGS_PYREALIZATION_H

#include "PyHalide.h"

namespace Halide {
namespace PythonBindings {

void define_realization(py::module &m);

}  // namespace PythonBindings
}  // namespace Halide

#endif  // HALIDE_PYTHON_BINDINGS_PYREALIZATION_H
