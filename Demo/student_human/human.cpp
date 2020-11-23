#include <iostream>
#include "human.h"
human::human():name("NULL"),id("NULL"),gender('M'),age(0){
    ;
}

human::human(std::string name,std::string id,char gender,int age):
        name(name),id(id),gender(gender),age(age){
    ;
}

void human::printInfo(){
    std::cout<<name<<','<<id<<','<<gender<<','<<age<<std::endl;
}

void human::setInfo(std::string name,std::string id,char gender,int age){
    this->age=age;
    this->name=name;
    this->id=id;
    this->gender=gender;
}
