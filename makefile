cpp_main:main.o newmatrix.o upcalculate.o downcalculate.o bynary.o
	g++ $^ -o $@
%.o:%.cpp
	g++ -c $^ 
clean:
	rm  *.o cpp_main 
