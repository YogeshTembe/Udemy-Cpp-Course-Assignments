#include <iostream>
#include <string>
#include "duck.h"
using namespace std;

Duck::Duck(){
    this->sound="default";
}

Duck::Duck(string sound){
    cout<<"Duck(string sound)"<<endl;
    this->sound=sound;
}

string Duck::makeSound(){
    cout<<"Duck::makeSound()"<<endl;
    return this->sound;
}

Duck::Duck(Duck &duck){
    cout<<"Duck(Duck &duck)"<<duck.sound<<endl;
    this->sound=duck.sound;
}

Duck::Duck(Duck &&duck){
    cout<<"Duck(Duck &&duck)"<<endl;
    this->sound=duck.sound;
}

Duck Duck::operator=(const Duck &duck){
    cout<<"Duck::operator=(const Duck &)"<<duck.sound<<endl;
    return Duck(duck.sound);
}