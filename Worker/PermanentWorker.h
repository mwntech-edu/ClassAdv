#pragma once
#include "Employee.h"
class PermanentWorker : public Employee{
private:
	int salary;
public:
	PermanentWorker(char const* name, int money) : Employee(name), salary(money) {}
	int GetPay() const { return salary; }
	void ShowSalaryInfo() const {
		ShowYourName();
		std::cout << "salary: " << GetPay() << "\n\n";
	}
};