#ifndef __STUDENT_H__
#define __STUDENT_H__
class student:public human
{
private:
    std::string course;
public:
    student(/* args */);
    student(std::string name,std::string id,char gender,int age,std::string course);
    ~student();
    void printInfo();
    void setInfo(std::string name,std::string id,char gender,int age,std::string course); 
};
#endif