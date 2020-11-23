#include "student.h"
student::student(){;}
student::student(std::string name,std::string id,char gender,int age,std::string course):human(name,id,gender,age),course(course){
    
}
student::~student(){;}

void student::printInfo(){
    human::printInfo();
    std::cout<<course<<std::endl;
}

void student::setInfo(std::string name,std::string id,char gender,int age,std::string course){
    human::setInfo(name,id,gender,age);
    this->course=course;
}