######Makefile.main#############
######This contains all the dependencies, for example###########
executable: executable.o
$(CXX) executable.o -o executable $(LINK)
executable.o: executable.cpp
$(CXX) -c executable.cpp -o executable.o $(INCLUDES)

######This needs to be set only once! It's machine independent!###########


#######Makefile.mylaptop###########

#######This contains the paths to the local compilers, for example#########
CXX = clang++
INCLUDES = -I/usr/local
LINK = -L/usr/local -lfftw3

#######Makefile.cluster###########

#######This contains the paths to the remote compilers, for example#########
CXX = /path/to/c++/compiler/g++
INCLUDES = -I/path/to/fftw_library/include
LINK = -L/path/to/fftw_library/lib -lfftw3

#######Makefile###########

#######This contains only three lines, and that's the file that "make" will read!############
me = ${THIS}
include Makefile.$(me)
include Makefile.main