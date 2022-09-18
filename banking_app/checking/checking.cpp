#include "./checking.h"
#include <string>

// Checking::Checking(const std::string &name, float balance):Account(name,balance){

// }

Checking::~Checking(){

}

void Checking::Withdraw(float amount){
    if((m_Balance-amount)<50){
        std::cout<<"Insufficient Balance"<<std::endl;
    }else{
        Account::Withdraw(amount); //this way we can call the base class member function inside child class
    }
}

