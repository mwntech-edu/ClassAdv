#include <iostream>
using namespace std;
class Point {};

//#define POINT_PTR Point*
//Point** arr;
//POINT_PTR* arr;

class BoundCheckIntArray {
private:
	int* arr;
	int arrlen;
public:
	BoundCheckIntArray(int len) : arrlen(len) {
		arr = new int[len];
	}
	int& operator[](int idx) {
		if (idx < 0 || idx >= arrlen) {
			cout << "Array index out of bound exception" << endl;
			//exit(1);
		}
		return arr[idx];
	}
	~BoundCheckIntArray() { delete[] arr; }
};
int main() {
	int array[5] = { 1, 2, 3, 4, 5 };
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
	{
		arr[i] = (i + 1) * 11;
	}
	for (int i = 0; i < 8; i++)
	{
		cout << array[i] << endl;
		cout << arr[i] << " " << arr.operator[](i) << endl;
	}
	return 0;
}