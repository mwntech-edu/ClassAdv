#include "MyString.h"
using namespace std;
String::String() { len = 0; str = NULL; }
String::String(const char* s) {
	len = strlen(s) + 1;
	str = new char[len];
	strcpy_s(str, len, s);
}
String::String(const String& s) {
	len = s.len;
	str = new char[len];
	strcpy_s(str, len, s.str);
}
String::~String() {
	if (str != NULL) delete[] str;
}
String& String::operator=(const String& s) {
	if (str != NULL) delete[] str;
	len = s.len;
	str = new char[len];
	strcpy_s(str, len, s.str);
	return *this;
}
String& String::operator+=(const String& s) {
	int preLen = len;
	len += (s.len - 1);
	char* tempstr = new char[len];
	strcpy_s(tempstr, preLen, str);
	strcat_s(tempstr,len, s.str);
	if (str != NULL) delete[] str;
	str = tempstr;
	return *this;
}
String String::operator+(const String& s) {
	char* tempstr = new char[len + s.len - 1];
	strcpy_s(tempstr, len, str);
	strcat_s(tempstr, len+s.len-1, s.str);
	String temp(tempstr);
	delete[] tempstr;
	return temp;
}
ostream& operator<< (ostream& os, const String& s) {
	os << s.str;
	return os;
}
istream& operator >> (istream& is, String& s) {
	char str[100];
	is >> str;
	s = String(str);
	return is;
}
bool String::operator==(const String& s) {
	return strcmp(str, s.str) ? false : true;
}
int main() {
	String str1 = "I like "; String str2 = "string class";
	String str3 = str1 + str2;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	str1 += str2;
	if (str1 == str2) cout << "동일 문자열!" << endl;
	else cout << "동일하지 않은 문자열!" << endl;
	string str4;
	cout << "문자열 입력: ";
	cin >> str4;
	cout << "입력한 문자열: " << str4 << endl;
	return 0;
}