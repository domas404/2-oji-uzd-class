main: test.o studentas.o file_read.o calculations.o sort.o student_division.o file_generation.o file_output.o
	g++ -o main -O2 main.cpp test.o studentas.o file_read.o calculations.o sort.o student_division.o file_generation.o file_output.o
fun:
	g++ -c test.cpp
	studentas.cpp
	file_read.cpp
	calculations.cpp
	sort.cpp
	student_division.cpp
	file_generation.cpp
	file_output.cpp