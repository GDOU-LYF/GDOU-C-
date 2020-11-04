#include <iostream>
class A{
    public:
        A();
        A(A &a);
};
class B{
    A a;
};

A::A(){
    std::cout<<"default"<<std::endl;
}
A::A(A &a){
    std::cout<<"copy"<<std::endl;
}

int main(){
    B b1;
    B b2(b1);
    return 0;
}