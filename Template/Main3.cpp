#include <iostream>
using namespace std;

template <typename T, int len>
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

	return 0;
}