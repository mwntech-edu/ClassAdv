#pragma once
#include "PermanentWorker.h"
class SalesWorker : public PermanentWorker {
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(char const* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}
	void AddSalesResult(int value) { salesResult += value; }
	int GetPay() const { return PermanentWorker::GetPay() + 
		(int)(salesResult * bonusRatio); }
	void ShowSalaryInfo() const {
		ShowYourName();
		std::cout << "salary: " << GetPay() << "\n\n";
	}
};