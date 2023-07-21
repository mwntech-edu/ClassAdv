#include "Car.h"
using namespace std;

int main() {
	Car* pcar1 = new Truck(80, 200);
	//Truck* ptruck1 = (Truck*)pcar1;
	//Truck* ptruck1 = dynamic_cast<Truck*>(pcar1);
	Truck* ptruck1 = static_cast<Truck*>(pcar1);
	ptruck1->ShowTruckState();
	cout << endl;

	Car* pcar2 = new Car(120);
	//Truck* ptruck2 = (Truck*)pcar2;
	//Truck* ptruck2 = dynamic_cast<Truck*>(pcar2);
	Truck* ptruck2 = static_cast<Truck*>(pcar2);
	ptruck2->ShowTruckState();
	cout << endl;

	Truck* ptruck3 = new Truck(70, 150);
	//Car* pcar3 = (Car*)ptruck3;
	Car* pcar3 = dynamic_cast<Car*>(ptruck3);
	pcar3->ShowCarState();

	return 0;
}