#pragma once
#ifndef EXAMPLE_CPP_COOKIECUTTER_EXAMPLE_CPP_COOKIECUTTER_HPP
#define EXAMPLE_CPP_COOKIECUTTER_EXAMPLE_CPP_COOKIECUTTER_HPP

#include <cstdint>
#include <iostream>

namespace example_cpp_cookiecutter {
    
    class MyClass
    {
    public:
        MyClass(const uint64_t size)
        : m_size(size)
        {

        }
        
        void hello_world()
        {
            std::cout<<"Hello World!\n";
        }
    private:
        uint64_t m_size;
    };

} // end namespace example_cpp_cookiecutter


#endif // EXAMPLE_CPP_COOKIECUTTER_EXAMPLE_CPP_COOKIECUTTER_HPP