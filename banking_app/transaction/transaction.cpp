#include "./transaction.h"
#include <iostream>

void Transact(Account *pAccount){
    std::cout<<"balance-"<<pAccount->GetBalance()<<std::endl;
    pAccount->Deposit(100);
    pAccount->AccumulateInterest();
    pAccount->Withdraw(170);
    std::cout<<"Interest rate-"<<pAccount->GetInterestRate()<<std::endl;
    std::cout<<"Final balance-"<<pAccount->GetBalance()<<std::endl;
}