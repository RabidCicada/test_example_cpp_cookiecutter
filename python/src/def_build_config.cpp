#include "pybind11/pybind11.h"
#include "pybind11/numpy.h"

#include <iostream>
#include <numeric>


// our headers
#include "example_cpp_cookiecutter/example_cpp_cookiecutter.hpp"
#include "example_cpp_cookiecutter/example_cpp_cookiecutter_config.hpp"


namespace py = pybind11;



namespace example_cpp_cookiecutter {

    void def_build_config(py::module & m)
    {

        struct BuildConfiguration        {
            
        };


        py::class_<BuildConfiguration>(m, "BuildConfiguration",
        "This class show the compile/build configuration\n"
        "Of example_cpp_cookiecutter\n"
        )
        .def_property_readonly_static("VERSION_MAJOR", [](py::object /* self */) {
           return EXAMPLE_CPP_COOKIECUTTER_VERSION_MAJOR ;
        })
        .def_property_readonly_static("VERSION_MINOR", [](py::object /* self */) {
           return EXAMPLE_CPP_COOKIECUTTER_VERSION_MINOR ;
        })
        .def_property_readonly_static("VERSION_PATCH", [](py::object /* self */) {
           return EXAMPLE_CPP_COOKIECUTTER_VERSION_MAJOR ;
        })
        .def_property_readonly_static("DEBUG", [](py::object /* self */) {
            #ifdef  NDEBUG
            return false;
            #else
            return true;
            #endif
        })

;



    }

}
