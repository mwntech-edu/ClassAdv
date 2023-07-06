#pragma once
#include "Employee.h"
class TemporaryWorker : public Employee {
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(char const* name, int pay) : Employee(name), workTime(0), payPerHour(pay) {}
	void AddWorkTime(int time) { workTime += time; }
	int GetPay() const { return workTime * payPerHour; }
	void ShowSalaryInfo() const {
		ShowYourName();
		std::cout << "salary: " << GetPay() << "\n\n";
	}
};