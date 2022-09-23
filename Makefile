exemple01: exemple01.cpp
	g++ -o exemple01 exemple01.cpp

exemple02: exemple02.cpp
	g++ -o exemple02 exemple02.cpp

exemple03: exemple03.cpp
	g++ -o exemple03 exemple03.cpp

clean:
	rm exemple01
	rm exemple02
	rm exemple03