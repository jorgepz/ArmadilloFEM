
CXX = g++

CXXFLAGS = -Wall -g -O2 -larmadillo

EXE = ArmaFEM.lnx

main: ArmaFEM.o
	$(CXX) -o $(EXE) ArmaFEM.o $(CXXFLAGS)

ArmaFEM.o:
	$(CXX) $(CXXFLAGS) -c ArmaFEM.cpp
	
clean:
	rm $(EXE) *.o
