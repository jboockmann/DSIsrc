
# Use colors, but only if connected to a terminal that supports them.
if which tput >/dev/null 2>&1; then
    ncolors=$(tput colors)
fi
if [ -t 1 ] && [ -n "$ncolors" ] && [ "$ncolors" -ge 8 ]; then
  RED="$(tput setaf 1)"
  GREEN="$(tput setaf 2)"
  YELLOW="$(tput setaf 3)"
  BLUE="$(tput setaf 4)"
  BOLD="$(tput bold)"
  NORMAL="$(tput sgr0)"
else
  RED=""
  GREEN=""
  YELLOW=""
  BLUE=""
  BOLD=""
  NORMAL=""
fi


# TODO: do proper error handling.
# TODO: also store the output in a log file.


# store the path to the current working directory.
CWD="$(pwd)"

# Install dependencies via apt.
sudo apt-get install wget git unzip openjdk-7-jre openjdk-7-jdk ocaml ocaml-findlib

# Create a new folder in which all DSI related files will be placed, enter it and clone the DSIsrc and DSIlogger repository.
mkdir DSI
cd DSI
git clone https://github.com/uniba-swt/DSIsrc.git
git clone https://github.com/uniba-swt/DSIlogger.git

# Install and setup the C Intermediate Language (CIL), which is used for instrumenting C source code. First, download CIL (version 1.7.3) from GitHub (https://github.com/cil-project/cil/releases) and extract the archive.
wget https://github.com/cil-project/cil/archive/cil-1.7.3.zip
unzip -o cil-1.7.3.zip

# Setup a new symlink in the `src/ext` folder of CIL called `instrument.ml`, which points to `path/to/DSIsrc/resources/cil-inst/instrument.ml`. 
ln -s $CWD/DSI/DSIsrc/resources/cil-inst/instrument.ml $CWD/DSI/cil-cil-1.7.3/src/ext

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
sed -i 's/Liveness.feature;/Liveness.feature;\n    Instrument.feature;/g' $CWD/DSI/cil-cil-1.7.3/src/main.ml

# Configure and compile CIL by running the following commands within CIL's root directory.
cd cil-cil-1.7.3
./configure
make
make test

# Symlink the perl wrapper script `cilly`, which is located at `/path/to/CIL/bin/cilly`, as `CILLY_BIN`; it is used by the makefiles in the test program folder of DSIsrc.
sudo ln -s $CWD/DSI/cil-cil-1.7.3/bin/cilly /usr/local/bin/CILLY_BIN


#TODO: add further information on how to build DSIsrc here.


printf "${BLUE}"
echo ''
echo ''
echo '    ____  _____  ____'
echo '   / __ \/ ___/ /  _/'
echo '  / / / /\__ \  / /  '
echo ' / /_/ /___/ /_/ /   '
echo '/_____//____//___/ ....is now installed!'
echo ''
echo ''
echo 'Please consult the README.MD file for further information.'
printf "${NORMAL}"
