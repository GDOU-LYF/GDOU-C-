#ifndef __HUMAN_H__
#define __HUMAN_H__
class human
{
private:
    std::string name;
    std::string id;
    char gender;
    int age;
public:
    human(/* args */);
    human(std::string name,std::string id,char gender,int age);
    ~human(){

    }
    void printInfo();
    void setInfo(std::string name,std::string id,char gender,int age);
};
#endif