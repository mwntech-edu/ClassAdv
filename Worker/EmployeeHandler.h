#pragma once
#include "SalesWorker.h"
#include "TemporaryWorker.h"
class EmployeeHandler {
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(Employee* emp) {
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const {
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
	}
	void ShowTotalSalary() const {
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		std::cout << "salary sum: " << sum << "\n";
	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++){
			delete empList[i];
		}
	}
};