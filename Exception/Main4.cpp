#include <iostream>
using namespace std;
void SimpleFuncThree() throw (int, char) {
	cout << " Func Three " << endl;
	//throw -1;
	//throw 'K';
	throw (float)3.0;
	cout << " Func Three End" << endl;
}
void SimpleFuncTwo() {
	cout << " Func Two " << endl;
	SimpleFuncThree();
	cout << " Func Two End" << endl;
}
void SimpleFuncOne() {
	cout << " Func One" << endl;
	SimpleFuncTwo();
	cout << " Func One End" << endl;
}
int main() {
	cout << " Main " << endl;
	try {
		SimpleFuncOne();
	}
	catch (int expn) {
		cout << "�����ڵ� : " << expn << endl;
	}
	catch (char ch) {
		cout << "���� ����: " << ch << endl;
	}
	cout << " Main End " << endl;
	return 0;
}