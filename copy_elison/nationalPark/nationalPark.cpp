#include "./nationalPark.h"
#include <iostream>
#include "../duck/duck.cpp"
#include <string>
using namespace std;

NationalPark::NationalPark(){
    cout<<"NationalPark()"<<endl;
    this->duck=Duck("newnew");
}

NationalPark::NationalPark(Duck duck){
    cout<<"NationalPark(Duck duck)"<<endl;
    this->duck=Duck(duck.makeSound());
}

string NationalPark::makeSound(){
    cout<<"NationalPark::makeSound()"<<endl;
    return this->duck.makeSound();
}