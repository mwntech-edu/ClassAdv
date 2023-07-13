#include <iostream>
using namespace std;
class First {
public:
	First() { cout << "First() " << endl; }
	virtual ~First() { cout << "~First() " << endl; }
	virtual int Add() { return 1 + 1; }
};
class Second : public First {
public:
	Second() { cout << "Second() " << endl; }
	virtual ~Second() { cout << "~Second() " << endl; }
	int Sub() { return 1 - 1; }
};
class Third : public Second {
public:
	Third() { cout << "Third() " << endl; }
	virtual ~Third() { cout << "~Third() " << endl; }
	int Add() { return 2 + 2; }
	int Mul() { return 1 * 1; }
};
int main() {
	First* ptr = new Third();
	cout << ptr->Add() << endl;
	//Third* ptr = new Third();
	delete ptr;
	return 0;
}