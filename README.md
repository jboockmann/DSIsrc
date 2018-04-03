# DSIsrc

This project contains the DSIsrc front-end component and its DSIcore algorithm implementation. The front-end uses CIL, the C Intermediate Language [[1]], to instrument the source code by inserting instructions for recording pointer writes and memory (de-)allocations. A trace is generated upon executing the instrumented source file. This trace is evaluated by DSIcore wrt. to the observed data structures and their relationships [[2]].


## Basic Installation

The following installation procedure requires [Ubuntu 14.04 LTS (Trusty Tahr)](http://releases.ubuntu.com/14.04/). DSIsrc is installed in the current working directory by running the following command in your terminal. (Note: `wget` is required).

`sh -c "$(wget https://raw.githubusercontent.com/uniba-swt/DSIsrc/master/install.sh -O -)"`

Consult the step-by-step installation instructions below in case of a problem occuring during the basic installation.

## Step-by-step Installation

1. Install dependencies via apt:  
`$ sudo apt-get install wget git openjdk-7-jre openjdk-7-jdk ocaml ocaml-findlib`

2. Clone the DSIsrc and DSIlogger repository:  
`$ mkdir DSI`  
`$ git clone https://github.com/uniba-swt/DSIsrc.git DSI/`  
`$ git clone https://github.com/uniba-swt/DSIlogger.git DSI/`

3. Install and setup the C Intermediate Language (CIL) required for instrumenting C source code:
  1. Download CIL (version 1.7.3) from [GitHub](https://github.com/cil-project/cil/releases) and extract the archive:  
  `wget https://github.com/cil-project/cil/archive/cil-1.7.3.zip`
  3. Setup a new symlink in the `src/ext` folder of CIL called `instrument.ml`, which points to `path/to/DSIsrc/resources/cil-inst/instrument.ml`:  
  `ln -s path/to/DSIsrc/resources/cil-inst/instrument.ml /path/to/CIL/src/ext`
  4. Add `Instrument.feature;` to `let features : C.featureDescr list = ...` in file `/path/to/CIL/src/main.ml`:
  ```
  let features : C.featureDescr list = 
  [ Epicenter.feature;
  ....
  Instrument.feature;
  ] 
  @ Feature_config.features 
   ```
  5. Configure and compile CIL by running the following commands within CIL's root directory:  
  `$ ./configure; `  
  `$ make`  
  `$ make test`
  TODO: better use a symlink for CILLY_BIN instead of an env var
  6. Export the path to the `cilly` script, which is located at `/path/to/CIL/bin/cilly`, under the environment name `CILLY_BIN`; this environment variable is used by the makefiles in the test program folder of DSIsrc:  
  `CILLY_BIN=/path/to/CIL/bin/cilly; export CILLY_BIN`

TODO: setup a SBT buildfile
TODO: provide information on how to build the project


### Setting up the Eclipse environment
Download and extract Eclipse for Scala (version 3.0.4):  
`$ wget http://downloads.typesafe.com/scalaide-pack/3.0.4.vfinal-211-20140421/scala-SDK-3.0.4-2.11-2.11-linux.gtk.x86_64.tar.gz; tar -xf scala-SDK-3.0.4-2.11-2.11-linux.gtk.x86_64.tar.gz`

Run Eclipse and import the projects DSIsrc and DSIlogger via the Eclipse import dialogue `Project > Import > General > Existing Projects into Workspace`. Each required library should be listed in the Build Path, and the Project References should already have been established.


## Running an example using DSIsrc
TODO: also provide a brief guide for running an example using the previous built executable
To run an example, use Eclipse and the provided launch configurations located in `/path/to/DSIsrc/resources/eclipse-run-configurations`.
Install CIL as described above in order to run user provided examples from scratch, and consult the makefiles from the supplied examples to create a proper makefile target.
Note that the source file containing the example program must be instrumented, compiled, and executed using CIL.
Upon running the instrumented executable, the `types.xml` and `trace.xml` are created.

Sample command line parameters of test program `mbg-dll-with-dll-children`:
```
--xml:resources/test-programs/mbg-dll-with-dll-children/trace.xml  
--typexml:resources/test-programs/mbg-dll-with-dll-children/types.xml
--xsd:resources/xml/trace-schema.xsd  
--featuretracexsd:resources/xml/feature-trace-schema.xsd
```
In order to adjust this example to a user's needs, point xml and typexml to the appropriate trace and type files. The xsd and featuretracexsd remain the same.


## Files used/produced by DSI
All test programs are located in the folder `resources/test-programs` relative to the DSIbin root directory. Each test case folder comprises the following files:

### DSIsrc

| Filename | Description |
| ------------- |-------------|
| `C source code` | The source code of the test program, often named as the folder in which it resides.  |
| `Makefile` | Used to compile the source files and generate an executable. |
| `types.xml` | Stores type information about the executable. |
| `trace.xml` | Contains a sequence of events obtained from running an instrumented  executable. |

To ease using Eclipse for running examples, each test program has its own launch configuration file stored in `resources/eclipse-run-configurations`.


### Data produced by running DSI

If logging is enabled in the source code, DSIsrc/bin will generate the following output for a given test case.

| Folder | Description |
| ------------- |-------------|
| log/* | Contains one points-to-graph for each event.
| log/mbg | Contains the strand graphs annotated with data structure labels and evidences.|
| log/mmbg | Contains the folded strand graphs annotated with data structure labels and evidences representing the structural repetition.|
| log/agg | Contains the final result for each entry pointer, i.e., the aggregated strand graph with the highest ranked label on top.|

TODO: move this to a better section
An aggregated strand graph is generated for each entry pointer and encoded as a `dot` file.
In most cases, the aggregated strand graph for the longest running entry pointer is of interest, which can be found and opened with the command `$ rm graph_[^c]*;grep aggCnt * | sed -e 's/^.*ep: //' -e 's/ start.*aggCnt: /,/' -e 's/<.*//' | sort -t, -nk2 | tail -n 1 | sed -e s'/\([0-9]\+\).*/*x_\1.dot/'| xargs find . -name | xargs xdot`.


## References
1. [CIL - The C Intermediate Language][1]
2. [DSI: An evidence-based approach to identify dynamic data structures in C programs][2]


[1]:https://sourceforge.net/projects/cil/
[2]:https://doi.org/10.1145/2931037.2931071
