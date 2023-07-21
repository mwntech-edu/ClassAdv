#include<iostream>
using namespace std;
class SimpleCar {
public:
	int i = 10;
	void SomeFunc() { cout << "Car" << endl; }
};
class BestFriend {
public:
	int j = 20;
	void Func() { cout << "Friend" << endl; }
};
int main() {
	SimpleCar* car = new SimpleCar;
	BestFriend* fren = reinterpret_cast<BestFriend*>(car);
	cout << fren->j << " " << endl;
	fren->Func();

	int num = 0x010203;
	char* ptr = reinterpret_cast<char*>(&num);
	for (int i = 0; i < sizeof(num); i++)
	{
		cout << static_cast<int>(*(ptr + i)) << endl;
	}
	return 0;
}
