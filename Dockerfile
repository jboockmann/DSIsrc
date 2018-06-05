FROM ubuntu:14.04

LABEL description="A Dockerfile for running the DSIsrc front-end component and its DSIcore algorithm."
LABEL maintainer="Jan.Boockmann@uni-bamberg.de"
LABEL version="1.0"

ENV DSI_DIR /opt/DSI

# Store the path to the perl wrapper script `cilly`, which is located at `/path/to/CIL/bin/cilly`, as the environment variable `CILLY_BIN`. It is referenced by the Makefiles in the test-program folder of DSIsrc.
ENV CILLY_BIN=$DSI_DIR/cil-cil-1.7.3/bin/cilly

# TODO apt-get is prefered over apt for scripts
# Install dependencies via apt
RUN apt update --yes
RUN apt upgrade --yes
RUN apt install --yes wget git unzip openjdk-7-jre openjdk-7-jdk ocaml ocaml-findlib make build-essential

# Create a new folder in which all DSI related files will be placed, enter it and clone the DSIsrc and DSIlogger repository.
RUN mkdir $DSI_DIR
RUN cd $DSI_DIR; git clone https://github.com/uniba-swt/DSIsrc.git
RUN cd $DSI_DIR; git clone https://github.com/uniba-swt/DSIlogger.git

# Install and setup the C Intermediate Language (CIL), which is used for instrumenting C source code. First, download CIL (version 1.7.3) from GitHub (https://github.com/cil-project/cil/releases) and extract the archive.
RUN cd $DSI_DIR; wget https://github.com/cil-project/cil/archive/cil-1.7.3.zip
RUN cd $DSI_DIR; unzip -o cil-1.7.3.zip
RUN rm -f $DSI_DIR/cil-1.7.3.zip 

# Setup a new symlink in the `src/ext` folder of CIL called `instrument.ml`, which points to `path/to/DSIsrc/resources/cil-inst/instrument.ml`. 
RUN ln -s $DSI_DIR/DSIsrc/resources/cil-inst/instrument.ml $DSI_DIR/cil-cil-1.7.3/src/ext

# Add `Instrument.feature;` to `let features : C.featureDescr list = ...` in file `/path/to/CIL/src/main.ml`.
# ```
# let features : C.featureDescr list = 
# [ Epicenter.feature;
# ....
# Liveness.feature;
# Instrument.feature; // << add this line
# ] 
# @ Feature_config.features 
#  ```
RUN sed -i 's/Liveness.feature;/Liveness.feature;\n    Instrument.feature;/g' $DSI_DIR/cil-cil-1.7.3/src/main.ml

# Configure and compile CIL by running the following commands within CIL's root directory.
RUN cd $DSI_DIR/cil-cil-1.7.3; ./configure; make

# TODO compile DSIsrc
# TODO properly link the DSIsrc executable
