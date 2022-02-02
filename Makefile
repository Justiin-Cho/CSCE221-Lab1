output: collection_tests.o
	g++ -g -Wall -std=c++17 collection_tests.o -o output

collection_tests.o: collection_tests.cpp collection.h
	g++ -g -Wall -std=c++17 -c collection_tests.cpp

clean: