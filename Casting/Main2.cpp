#include <iostream>
using namespace std;
void ShowString(char* str) { cout << str << endl; }
void ShowAddResult(int& n1, int& n2) { cout << n1 + n2 << endl;  }
int main() {
	int num1 = 20, num2 = 3;
	double result = (double)num1 / num2;
	double result2 = double(num1) / num2;
	cout << result << endl;
	cout << result2 << endl;
	double result3 = static_cast<double> (20) / 3;
	cout << result3 << endl;

	const int num = 20;
	int* ptr = const_cast<int*>(&num); //int* ptr = (int*)&num;
	*ptr = 30;
	cout << &num << " ";
	cout << num << endl;
	cout << ptr << " ";
	cout << *ptr << endl;
	
	float* adr = (float*)ptr;
	cout << *adr << endl;

	const char* name = "Lee Sung Ju";
	ShowString(const_cast<char*>(name));  //ShowString((char*)name);
	const int& num3 = 100;
	const int& num4 = 200;
	ShowAddResult(const_cast<int&>(num1), const_cast<int&>(num2)); //ShowAddResult(num1, num2);
	return 0;
}