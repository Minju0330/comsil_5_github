test : main2.o
	g++ -o main main2.o 
main2.o : main2.cpp linkedlist.h stack.h
	g++ -c main2.cpp
clean : 
	rm -rf *.o main
