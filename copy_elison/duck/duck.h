#pragma once
#include <iostream>
#include <string>
using namespace std;

class Duck{
    private:
        string sound;
    public:
        Duck();
        Duck(string sound);
        string makeSound();
        Duck(Duck &duck);
        Duck(Duck &&duck);
        Duck operator=(const Duck &);

};