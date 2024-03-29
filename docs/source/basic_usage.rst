Basic Usage
============


.. code-block:: shell

    cd example_cpp_cookiecutter
    conda env create -f example_cpp_cookiecutter-dev-requirements.yml
    source activate example_cpp_cookiecutter-dev-requirements
    mkdir build
    cd build
    cmake ..
    make -j2
    make cpp-test
    make python-test
    make install
    cd examples
    ./hello_world
    cd ..
    cd benchmark
    ./benchmark_cpptools


On a windows machine this looks like:

.. code-block:: shell

    cd example_cpp_cookiecutter
    conda env create -f example_cpp_cookiecutter-dev-requirements.yml
    call activate example_cpp_cookiecutter-dev-requirements
    mkdir build
    cd build
    cmake .. -G"Visual Studio 15 2017 Win64" -DCMAKE_BUILD_TYPE=Release  ^
          -DDEPENDENCY_SEARCH_PREFIX="%CONDA_PREFIX%\Library" -DCMAKE_PREFIX_PATH="%CONDA_PREFIX%\Library"
    call activate cpptools-dev-requirements
    cmake --build . --target ALL_BUILD
    cmake --build . --target python-test
    cmake --build . --target cpp-test
    cmake --build . --target install


