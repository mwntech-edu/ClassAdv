#include <iostream>
using namespace std;

class SortRule {
public:
	virtual bool operator()(int num1, int num2) const = 0;
};

class AscendingSort : public SortRule {
public:
	bool operator()(int num1, int num2) const {
		if (num1 > num2)
			return true;
		else
			return false;
	}
};

class DescendingSort : public SortRule {
public:
	bool operator()(int num1, int num2) const {
		if (num1 < num2)
			return true;
		else
			return false;
	}
};

int arr[10] = { 3,6,9,0,8,1,2,4,5,7 };
void display() {
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void SortData(const SortRule& functor) {
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (functor(arr[j], arr[j + 1])) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			display();
		}
	}
}

int main() {
	AscendingSort asc;
	DescendingSort desc;
	SortData(asc);
	cout << " ..................................  " << endl;
	SortData(desc);
	return 0;
}