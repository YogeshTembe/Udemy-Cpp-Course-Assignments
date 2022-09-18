#include <iostream>
#include "./account/account.h"
#include "./savings/savings.h"
#include "./checking/checking.h"
#include "./transaction/transaction.h"

int main(){
    //Account acc("bob",1000);
    Savings acc("may",2000,0.05f);
    std::cout<<acc.GetBalance()<<std::endl;
    acc.Withdraw(100);
    std::cout<<acc.GetBalance()<<std::endl;

    Checking acc2("mari",140);
    std::cout<<acc2.GetBalance()<<std::endl;
    acc2.Withdraw(100);
    std::cout<<acc2.GetBalance()<<std::endl;

    Transact(&acc2);
    Transact(&acc);

    return 0;
}
