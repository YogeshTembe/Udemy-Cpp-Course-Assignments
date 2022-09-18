#include <iostream>
#include "./savings.h"

//we will have to invoke constructor of base class manually from child class because 
//if we do not invoke it manually then child will try to invoke default constructor of base class but 
//base does not have default constructor
//we can invoke it in initializer list
Savings::Savings(const std::string &name, float balance,float rate):Account(name,balance),m_Rate(rate){

}

Savings::~Savings(){

}

float Savings::GetInterestRate() const{
    return m_Rate;
}

void Savings::AccumulateInterest(){
    m_Balance += (m_Balance*m_Rate);
}

