#pragma once
#include "Employee.h"
class PermanentWorker : public Employee{
private:
	int salary;
public:
	PermanentWorker(char const* name, int money) : Employee(name), salary(money) {}
	virtual int GetPay() const { return salary; }
	virtual void ShowSalaryInfo() const {
		ShowYourName();
		std::cout << "salary: " << GetPay() << "\n\n";
	}
};