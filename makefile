./bin/cpp_main:./src/main.o ./src/newmatrix.o ./src/upcalculate.o ./src/downcalculate.o ./src/bynary.o
	g++ $^ -o $@
	rm -r ./src/*.o
./src/%.o:./src/%.cpp
	g++ -c $^ -o $@
clean:
	rm  ./src/*.o ./bin/cpp_main
