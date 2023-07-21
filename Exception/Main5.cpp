#include <iostream>
using namespace std;

class AAA{ 
public: 
	void ShowYou() { cout << "AAA " << endl; }
};

class BBB : public AAA {
public: 
	void ShowYou() { cout << "BBB " << endl; }
};

class CCC : public BBB {
public: 
	void ShowYou() { cout << "CCC " << endl; }
};

void ExceptionGenerator(int num) {
	switch (num)
	{
	case 1:
		throw AAA();
	case 2:
		throw BBB();
	case 3:
		throw CCC();
	default:
		break;
	}
}

int main() {
	cout << "Main " << endl;
	try {
		ExceptionGenerator(3);
		ExceptionGenerator(2);
		ExceptionGenerator(1);
	}
	catch (CCC& expn) {
		cout << "catch CCC" << endl;
		expn.ShowYou();
	}
	catch (BBB& expn) {
		cout << "catch BBB" << endl;
		expn.ShowYou();
	}
	catch (AAA& expn) {
		cout << "catch AAA" << endl;
		expn.ShowYou();
	}
	
	cout << "Main End " << endl;
	return 0;
}

