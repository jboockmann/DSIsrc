# DSIsrc

This project contains the DSIsrc front-end component and its DSIcore algorithm implementation. The front-end uses CIL, the C Intermediate Language [[1]], to instrument the source code by inserting instructions for recording pointer writes and memory (de-)allocations. A trace is generated upon executing the instrumented source file. This trace is evaluated by DSIcore wrt. to the observed data structures and their relationships [[2]].


## Basic Installation
DSIsrc is shipped as a [Docker](https://www.docker.com/) container. First, clone this repository and navigate inside and run `docker build -t dsisrc .`. Then use `docker run -v "$(pwd)":/root/ -it /bin/bash dsimachine` to spawn a new container with `/root` pointing to your current working directory. Finally, use the interactive bash shell to trigger the DSIsrc toolchain.

Consult the instructions and comments in the [Dockerfile](Dockerfile) to setup DSIsrc on your host machine directly.


### Setting up the Eclipse environment
Download and extract Eclipse for Scala (version 3.0.4):  
`$ wget http://downloads.typesafe.com/scalaide-pack/3.0.4.vfinal-211-20140421/scala-SDK-3.0.4-2.11-2.11-linux.gtk.x86_64.tar.gz; tar -xf scala-SDK-3.0.4-2.11-2.11-linux.gtk.x86_64.tar.gz`

Run Eclipse and import the projects DSIsrc and DSIlogger via the Eclipse import dialogue `Project > Import > General > Existing Projects into Workspace`. If necessary, download missing libraries and add these to the Build Path (consult (this README.MD)[resources/libs/README.MD] for further information). Project References should already be setup.


## Running an example using DSIsrc

[//]: # (provide a brief guide for running an example using the built executable)

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

An aggregated strand graph is generated for each entry pointer and encoded as a `dot` file.
In most cases, the aggregated strand graph for the longest running entry pointer is of interest, which can be found and opened with the command `$ rm graph_[^c]*;grep aggCnt * | sed -e 's/^.*ep: //' -e 's/ start.*aggCnt: /,/' -e 's/<.*//' | sort -t, -nk2 | tail -n 1 | sed -e s'/\([0-9]\+\).*/*x_\1.dot/'| xargs find . -name | xargs xdot`.


## References
1. [CIL - The C Intermediate Language][1]
2. [DSI: An evidence-based approach to identify dynamic data structures in C programs][2]


[1]:https://sourceforge.net/projects/cil/
[2]:https://doi.org/10.1145/2931037.2931071
