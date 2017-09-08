#include <cstring>
#include <iostream>
#include "DSString.h"
#include <fstream>
using namespace std;

DSString::DSString() {
	size = 0;
	cstr = nullptr;
}
DSString::DSString(const char* strIn) { // creating string with a pointer to a char (string in)
	size = 0;
	while(strIn[size] != '\0') {
		size++;
//		cout << "BREAK" << endl;
	}
//	cout << "SIZE: " << size << endl;
	cstr = new char[size];
	for(int i = 0; i < size; i++) {
//		cout << "Adding " << strIn[i] << " to the string" << endl;
		cstr[i] = strIn[i];
//		cout << "Location: " << i << "with value" << cstr[i] << endl;

	}
}
char DSString::value(const int elemLocation) {
//	cout << "returning the location of DSString object at element " << elemLocation << endl;
	return cstr[elemLocation];
}
int DSString::length() {
//	cout << "returning the size of DSString object" << endl;
	return size;
}
DSString::DSString(const DSString &tempStr) {
	size = tempStr.size;
	cstr = new char[tempStr.size + 1];
	for(int i = 0; i < size; i++) {
		cout << "Adding " << tempStr.cstr[i] << " from another DSString to the string" << endl;
		cstr[i] = tempStr.cstr[i];
	}
	cstr[size] = '\0';
}


