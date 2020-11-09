#include "account.h"
#include <iostream>
#include <cmath>
double SavingsAccount::total=0;
void SavingsAccount::record(int date,double amount){
 accumulation=accumulate(date);
 lastDate=date;
 amount=floor(amount*100+0.5)/100;
 balance+=amount;
 total+=amount;
std::cout<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<std::endl;
}
double SavingsAccount::accumulate(int date) const {
        return accumulation+balance*(date-lastDate);
    }

SavingsAccount::SavingsAccount(int date,int id,double rate):id(id),rate(rate),balance(0),lastDate(date),accumulation(0){
    std::cout<<"\t#"<<id<<"is created"<<std::endl;
}

void SavingsAccount::deposit(int date,double amount){
    // record(date.amount);
    this->record(date,amount);
}

void SavingsAccount::withdraw(int date,double amount){
    if(amount>getBalance()){
        std::cout<<"ERROR not enough money"<<std::endl;
    }else{
        this->record(date,-amount);
    }
}

void SavingsAccount::settle(int date){
    double interest=accumulate(date)*rate/365;
    if(interest!=0){
        record(date,interest);
    }
    accumulation=0;
}

void SavingsAccount::show() const{
    std::cout<<"#"<<id<<"\tBalance:"<<balance;
}

