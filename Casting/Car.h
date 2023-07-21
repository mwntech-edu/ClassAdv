#ifndef _CAR_H_
#define _CAR_H_
#include <iostream>

class Car {
private:
	int fuelGauge;
public:
	Car(int fuel) : fuelGauge(fuel) {}
	void ShowCarState() { std::cout << "연료량: " << fuelGauge << std::endl; }
};

class Truck : public Car {
private:
	int freightWeight;
public:
	Truck(int fuel, int weight) : Car(fuel), freightWeight(weight) {}
	void ShowTruckState() {
		ShowCarState();
		std::cout << "화물의 무게: " << freightWeight << std::endl;
	}
};

#endif
