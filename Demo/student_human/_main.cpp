// #include <iostream>
#include "human.cpp"
#include "student.cpp"
int main(){
    human h1;
    human h2("张三","201911",'M',18);
    h1.printInfo();
    h2.printInfo();
    student stu1;
    // stu1.setInfo("张三","201911",'M',18,"语文");
    stu1.printInfo();

    student stu2("张三","201911",'M',18,"语文");
    stu2.printInfo();
    return 0;
}