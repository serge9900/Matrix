cpp_main:main.o newmatrix.o upcalculate.o downcalculate.o bynary.o
	g++ $^ -o ./bin/$@
%.o:%.cpp
	mkdir bin
	g++ -c $^ -o ./bin/$@ 
clean:
	rm  *.o cpp_main bin 
