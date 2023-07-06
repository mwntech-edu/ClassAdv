#include "EmployeeHandler.h"
using namespace std;
int main() {
	Employee* emp1 = new PermanentWorker("A", 300);
	Employee* emp2 = new SalesWorker("B", 100, 0.1f);
	Employee* emp3 = new TemporaryWorker("C", 1);
	EmployeeHandler handler;
	handler.AddEmployee(emp1);
	handler.AddEmployee(emp2);
	handler.AddEmployee(emp3);
	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();
	return 0;
}