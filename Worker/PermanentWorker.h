#pragma once
#include <iostream>
class PermanentWorker {
private:
	char name[100];
	int salary;
public:
	PermanentWorker(char const* name, int money) : salary(money) {
		strcpy_s(this->name, strlen(name)+1, name);
	}
	int GetPay() const { return salary; }
	void ShowSalaryInfo() const {
		std::cout << "name: " << name << "\n";
		std::cout << "salary: " << GetPay() << "\n\n";
	}
};