#include <cstdio>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include "test5.cpp"
#include "test10.cpp"
#include "test1.cpp"
#include "test2.cpp"
#include "test3.cpp"
#include "test4.cpp"
#include "test6.cpp"
#include "test7.cpp"
#include "test8.cpp"
#include "test9.cpp"
#include <stdio.h>
int main() {
	string line1, line2;
	std::ifstream File2;
	std::ifstream File1;
	int pass = 1;
	TEST1();
	File1.open("../test1myresult.txt");
	File2.open("../test1result.txt");
	while (!File1.eof() || !File2.eof()) {
		getline(File1, line1);
		getline(File2, line2);
		if (line1 != line2) {
			pass = 0;
		}
	}
	File1.close();
	File2.close();
	pass ? std::cout << "TEST 1 PASSED\n" : std::cout << "TEST 1 FAILED" << std::endl;
}