#include <doctest.h>

#include "example_cpp_cookiecutter/example_cpp_cookiecutter.hpp"
#include "example_cpp_cookiecutter/example_cpp_cookiecutter_config.hpp"



TEST_SUITE_BEGIN("core");

TEST_CASE("check version"){

    #ifndef EXAMPLE_CPP_COOKIECUTTER_VERSION_MAJOR
        #error "EXAMPLE_CPP_COOKIECUTTER_VERSION_MAJOR is undefined"
    #endif
    

    #ifndef EXAMPLE_CPP_COOKIECUTTER_VERSION_MINOR
        #error "EXAMPLE_CPP_COOKIECUTTER_VERSION_MINOR is undefined"
    #endif


    #ifndef EXAMPLE_CPP_COOKIECUTTER_VERSION_PATCH
        #error "EXAMPLE_CPP_COOKIECUTTER_VERSION_PATCH is undefined"
    #endif

    CHECK_EQ(EXAMPLE_CPP_COOKIECUTTER_VERSION_MAJOR , 0);
    CHECK_EQ(EXAMPLE_CPP_COOKIECUTTER_VERSION_MINOR , 1);
    CHECK_EQ(EXAMPLE_CPP_COOKIECUTTER_VERSION_PATCH , 0);
}



TEST_SUITE_END(); // end of testsuite core
