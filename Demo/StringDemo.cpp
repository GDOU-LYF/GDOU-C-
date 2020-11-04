#include <iostream>
#include <string>
int main(){
    std::string s1="123";
    std::string s2;
    s2+=s1;

    std::cout<<s1<<std::endl;
    std::cout<<s2<<std::endl;


    return 0;
}