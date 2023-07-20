#include <iostream>
using namespace std;

class Number {
private:
	int num;
public:
	//Number() : num(20) {}
	Number(int n = 0) : num(n) {
		cout << "Number(int n=0)" << endl;
	}
	Number(const Number& ref) : num(ref.num){
		cout << "Copy" << endl;
	}
	Number& operator=(const Number& ref) {
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	operator int() { 
		cout << "num return" << endl;
		return num; 
	}
	void ShowNumber() { cout << num << endl; }
};

int main() {
	Number num1;
	num1 = 30;
	Number num2 = num1 + 20;
	num2.ShowNumber();
	return 0;
}