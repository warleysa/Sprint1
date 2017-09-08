

#ifndef DSSTRING_H_
#define DSSTRING_H_
using namespace std;

class DSString {
	private:
		int size;
		char* cstr;

	public:
//		char* cstr;
		DSString();
		DSString(const char* strIn);
//		char& operator[](const int elemLocation);
		char value(const int elemLocation);
		int length();
		DSString(const DSString &tempStr);
};




#endif /* DSSTRING_H_ */
