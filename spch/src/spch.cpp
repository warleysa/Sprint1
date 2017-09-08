//============================================================================
// Name        : spch.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "DSString.h"


using namespace std;

int main(int argc, const char * argv[]) {
	int dsize = 0;
	ifstream file(argv[1]);
	//Reads in the dictionary size from the first line
	file >> dsize;
	DSString** dictStr = new DSString*[dsize];
	//creates a temp char variable to store word lines as they are read in
	char buffer[31];
	file.getline(buffer, 31);
	cout << dsize << endl;
	for(int i = 0; i < dsize; i++) {
		file.getline(buffer, 31);
		dictStr[i] = new DSString(buffer);
		cout << buffer[0] << buffer[1] << buffer[2] << buffer[3] << buffer[4] << buffer[5] << buffer[6] << buffer[7] << buffer[8] << buffer[9] << buffer[10] << buffer[11] << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "END OF DICTIONARY FILE READING. WORDS ENTERED: " << dsize << endl;
//	cout << "Spot 1: " << dictStr[0]->value(0) << dictStr[0]->value(1) << dictStr[0]->value(2) << endl;
//	cout << "Spot 2: " << dictStr[1]->value(0) << dictStr[1]->value(1) << dictStr[1]->value(2) << endl;
//	cout << "Spot 3: " << dictStr[2]->value(0) << dictStr[2]->value(1) << dictStr[2]->value(2) << endl;
//	cout << "Spot 4: " << dictStr[3]->value(0) << dictStr[3]->value(1) << dictStr[3]->value(2) << endl;
//	cout << "Spot 5: " << dictStr[4]->value(0) << dictStr[4]->value(1) << dictStr[4]->value(2) << endl;


//	for(int i = 0; i < dictStr->length(); i++) {
//		char x = dictStr[1];
//		cout << x << endl;
//	}
}

