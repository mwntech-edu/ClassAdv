#pragma once
#include <iostream>
class Employee {
private:
	char name[100];
public:
	Employee(char const * name){ 
		strcpy_s(this->name, strlen(name) + 1, name); 
	}
	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0;
	void ShowYourName() const { 
		std::cout << "name : " << name << "\n"; 
	}
};