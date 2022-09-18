#pragma once
#include <iostream>
#include <string>
#include "../account/account.h"

class Checking:public Account{
    public:
        using Account::Account;
        //Checking(const std::string &name, float balance);
        ~Checking();
        void Withdraw(float amount);
};