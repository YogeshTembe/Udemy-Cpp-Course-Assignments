#include <iostream>
#include "../account/account.h"

class Savings:public Account{
    private:
        float m_Rate;
    public:
        Savings(const std::string &name, float balance,float rate);
        ~Savings();
        float GetInterestRate() const;

        void AccumulateInterest();
};