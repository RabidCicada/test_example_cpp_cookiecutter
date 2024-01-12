.. role:: bash(code)
   :language: bash

Folder Structure
=================

The generated project has the following folder structure

::

    example_cpp_cookiecutter
      ├──azure-pipelines.yml                                # Ci script
      │
      ├──benchmark                                          # C++ benchmark code
      │   └── ...
      │
      ├──binder                                             # dockerfile for mybinder.org
      │   └── Dockerfile
      │
      ├──cmake                                              # Cmake script/modules
      │   └── ...
      │
      ├──CMakeLists.txt                                     # Main cmake list
      │
      ├──CONTRIBUTING.rst                                   # Introduction how to constribute
      │
      ├──example_cpp_cookiecutterConfig.cmake.in # Script to make find_package(...) 
      │                                                     # work for this package 
      │
      ├──example_cpp_cookiecutter.pc.in          # Packaging info
      │
      ├──example_cpp_cookiecutter-dev-requirements.yml # List of development conda dependencies
      │
      ├──docker                                              # dockerfile for dockerhub
      │   └── Dockerfile
      ├──docs                                               # Sources for sphinx documentation
      │   └── ...
      │
      ├──examples                                           # C++ examples
      │   └── ...
      │
      ├──include                                            # C++ include directory for this folder
      │   └── ...
      │
      ├──LICENCE.txt                                        # License file
      │
      ├──python                                             # Python binding source code
      │   └── ...
      │
      ├──README.rst                                         # Readme shown on github
      │
      ├──readthedocs.yml                                    # Entry point for automated
      │                                                     # documentation build on readthedocs.org
      │
      ├──recipe                                             # Folder for conda recipes
      │   └── ...
      │
      └──test                                               # Folder containing C++ unit tests
          └── ...

