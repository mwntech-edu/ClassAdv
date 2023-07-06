#include<iostream>
using namespace std;
class Base {
private: int num1;
protected: int num2;
public: int num3;
	   Base() : num1(1), num2(2), num3(3) { cout << "Base() " << endl; }
	   void Print() const { cout << num1 << num2 << num3 << endl; }
	   ~Base() { cout << "~Base() " << endl; }
};
class DerivedPri : private Base {
public:
	DerivedPri() { cout << "DerivedPri( )" << endl; }
	void Show() { cout << num2 << endl;  }
	~DerivedPri() { cout << "~DerivedPri( )" << endl; }
};
class DerivedPro : protected Base { };
class Derived2 : public DerivedPri {
public:
	Derived2() { cout << "Derived2( )" << endl; }
	void Show() { DerivedPri::Show(); }
	~Derived2() { cout << "~Derived2( )" << endl; }
};
int main() {
	Base base;
	Derived2 dri;
	cout << base.num3 << endl;
	dri.Show();
	return 0;
}
