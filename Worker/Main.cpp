#include "EmployeeHandler.h"
using namespace std;
int main() {
	PermanentWorker* emp1 = new PermanentWorker("A", 300);
	PermanentWorker* emp2 = new PermanentWorker("B", 350);
	PermanentWorker* emp3 = new PermanentWorker("C", 270);
	EmployeeHandler handler;
	handler.AddEmployee(emp1);
	handler.AddEmployee(emp2);
	handler.AddEmployee(emp3);
	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();
	return 0;
}