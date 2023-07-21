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
template <typename T>
void ShowStaticValue() {
	static T num = 0;
	num += 1;
	cout << num << " ";
}
template <typename T>
class SimpleStaticMem {
private:
	static T mem;
public:
	void AddMem(int num) { mem += num; }
	void ShowMem() { cout << mem << endl; }
};
template <typename T>
T SimpleStaticMem<T>::mem = 0;

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
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	cout << endl;
	ShowStaticValue<long>();
	ShowStaticValue<long>();
	ShowStaticValue<long>();
	cout << endl;
	ShowStaticValue<double>();
	ShowStaticValue<double>();
	ShowStaticValue<double>();
	cout << endl;
	ShowStaticValue<int>();

	SimpleStaticMem<int> intSSM;
	intSSM.AddMem(2);
	intSSM.ShowMem();
	intSSM.AddMem(2);
	intSSM.ShowMem();
	SimpleStaticMem<float> floatSSM;
	floatSSM.AddMem(3.14);
	floatSSM.AddMem(0.1);
	floatSSM.ShowMem();
	return 0;
}