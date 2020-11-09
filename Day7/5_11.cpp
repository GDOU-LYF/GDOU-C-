#include <iostream>
#include "account.h"
#include "account.cpp"
int main(){
    SavingsAccount s0(1,21325302,0.015);
    SavingsAccount s1(1,58320212,0.015);

    s0.deposit(5,1000);
    s0.deposit(45,5500);

    s1.deposit(25,10000);
    s1.deposit(60,4000);

    s0.settle(90);
    s1.settle(90);

    s0.show();
    s1.show();

    return 0;
}