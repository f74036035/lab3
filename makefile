
sort:sort.o Clock.o
	g++ -o sort sort.o Clock.o
sort.o:sort.cpp Clock.h
	g++ -c sort.cpp
Clock.o:Clock.cpp Clock.h
	g++ -c Clock.cpp
