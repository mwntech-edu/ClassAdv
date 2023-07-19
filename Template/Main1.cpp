#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2) {
	return num1 + num2;
}

template <class T1, class T2>
void ShowData(double num) {
	cout << (T1)num << ", " << (T2)num << endl;
}

template <typename T>
T Max(T a, T b) { return a > b ? a : b; }

template<>
char* Max(char* a, char* b) {
	cout << "char* Max<char*>(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template<>
const char* Max(const char* a, const char* b) {
	cout << "const char* Max<char*>(char* a, char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b;
}

int main() {
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;
	cout << Add<int>(3.2, 3.2) << endl;
	cout << Add<double>(3.14, 2.75) << endl;

	cout << Add(15, 20) << endl;
	cout << Add(2.9, 3.7) << endl;
	cout << Add(3.2, 3.2) << endl;
	cout << Add(3.14, 2.75) << endl;

	ShowData<char, int>(65);
	ShowData<char, int>(67);
	ShowData<char, double>(68.9);
	ShowData<short, double>(69.2);
	ShowData<short, double>(70.4);

	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;
	char str1[] = "Simple";
	char str2[] = "Best";
	cout << Max(str1, str2) << endl;
	return 0;
}
