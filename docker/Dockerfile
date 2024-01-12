FROM continuumio/anaconda3:5.0.1

# install sys requirements
RUN apt-get update
RUN apt-get install -y build-essential git

# clone in repo
RUN git clone https://github.com/JohnDoe/example_cpp_cookiecutter

# update conda
RUN conda update --yes conda

# go into repo
RUN cd example_cpp_cookiecutter && conda env create -f example_cpp_cookiecutter-dev-requirements.yml

# activate
RUN echo "source activate example_cpp_cookiecutter-dev-requirements" > ~/.bash
ENV PATH /opt/conda/envs/example_cpp_cookiecutter-dev-requirements/bin:$PATH

# activate
#RUN conda activate example_cpp_cookiecutter-dev-requirements

# make build dir
RUN cd example_cpp_cookiecutter && mkdir build

# run cmake
RUN  cd example_cpp_cookiecutter/build && \
    cmake .. -DCMAKE_INSTALL_PREFIX=$(conda info --base)/envs/example_cpp_cookiecutter-dev-requirements

# build and install project
RUN cd example_cpp_cookiecutter/build && \
    make -j2 install