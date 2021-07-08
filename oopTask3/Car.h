#pragma once
#include <string>

using namespace std;

class Car {
	protected:
		string company, model;
	public:
		Car(string company, string model) : company(company), model(model) {
			cout << "Car()" << endl;
		}
};

class PassengerCar : virtual public Car {
	public:
		PassengerCar(string company) : Car(company, "Passenger") {
			cout << "PassengerCar()" << endl;
		}
};

class Bus : virtual public Car {
	public:
		Bus(string company) : Car(company, "bus") {
			cout << "Bus()" << endl;
		}
};

class Minivan : public PassengerCar, public Bus {
	public:
		Minivan(string company) : Bus(company), PassengerCar(company), Car(company, "minivan") {
			cout << "Minivan()" << company + " " + model << endl;
		}
};
