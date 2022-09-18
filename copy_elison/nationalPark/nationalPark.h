#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "../duck/duck.h"

class NationalPark{
    private:
        Duck duck;
    public:
        NationalPark();
        NationalPark(Duck duck);
        string makeSound();
};