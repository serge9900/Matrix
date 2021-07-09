cpp_main:main.o newmatrix.o upcalculate.o downcalculate.o bynary.o
	g++ $^ -o ../bin/$@
%.o:%.cpp
	g++ -c $^ -o $@
clean:
	rm  *.o 
