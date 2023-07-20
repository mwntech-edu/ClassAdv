#include <iostream>
using namespace std;

template <typename T=int, int len=7>
class SimpleArray {
private:
	T arr[len];
public:
	T& operator[] (int idx) {
		return arr[idx];
	}
};

int main() {
	SimpleArray<int, 5> i5arr1;
	SimpleArray<int, 7> i7arr1;
	//i5arr1 = i7arr1; // (X)
	SimpleArray<> arr;
	for (int i = 0; i < 7; i++)
	{
		arr[i] = i + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}