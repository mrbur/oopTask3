#include <iostream>
#include "Figure.h"
#include "Car.h"
#include "Card.h"
#include "Fraction.h"

int main()
{
    //2 task
    {
        Car car("toyota", "camry");
        cout << endl << endl;
        Bus bus("yellow bus");
        cout << endl << endl;
        PassengerCar PassengerCar("Mercedes");
        cout << endl << endl;
        Minivan Minivan("Honda");
    }

    //3 task
    {
        cout << endl << endl;
        Fraction f1(3, 4);
        Fraction f2(-3, 4);
        Fraction* result;

        (f1 - f2).print();
        (f1 * f2).print();
        (f1 / f2).print();
        (f1 + f2).print();
        (-f2).print();
        cout << "(f1 < f2) = " << (f1 < f2) << endl;
        cout << "(f1 <= f2) = " << (f1 <= f2) << endl;
        cout << "(f1 >= f2) = " << (f1 >= f2) << endl;
    }
}
