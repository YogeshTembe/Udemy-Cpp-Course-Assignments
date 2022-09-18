#include <iostream>
#include "car.h"
using namespace std;

Car::Car(){
    this->fuel=new int(0);
}

Car::Car(int fuel2){
    (this->fuel)=new int(fuel2);
}
Car::Car(const Car & obj) {
	cout << "Integer(const Integer&)" <<endl;
	fuel = new int(*obj.fuel);
}
//Copy constructor with R-Value to impl move semantics
Car::Car(Car &&obj){
    cout<<"move semantics called"<<endl;
    this->fuel=obj.fuel;//shallow copy
    obj.fuel=nullptr;
}

int Car::GetFuel()const{
    return *(this->fuel);
}

void Car::SetFuel(int fuel){
    (this->fuel)=&fuel;
}

Car Car::operator+(const Car &car) const{
    Car temp;
    *temp.fuel=*(this->fuel)+*(car.fuel);
    return temp;
}

Car& Car::operator=(const Car &car){
    delete fuel;
    fuel=new int(*(car.fuel));
    return *this;
}
