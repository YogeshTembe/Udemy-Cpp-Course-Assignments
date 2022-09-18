#pragma once
#include <iostream>
#include <string>
class Account{
    private:
        std::string m_Name;
        int m_AccNo;
        static int s_ANGenerator;

    protected:
        float m_Balance; //to make it accessible in child class
    public:
        Account(const std::string &name, float balance);
        ~Account();
        //all the functions that do not modify state of object are qualified with const keyword
        const std::string GetName() const;
        float GetBalance() const;
        int GetAccountNo() const;
        virtual float GetInterestRate() const;

        virtual void AccumulateInterest();
        void Withdraw(float amount);
        void Deposit(float amount);
    
};