#include <iostream>
using namespace std;
class A{
    public:
    A(){};
    ~A();
    A( A &a){
        cout<<"copy constructor"<<endl;
    }
    int get(){
        return -1;
    }
};
A::~A(){
    cout<<"destructor"<<endl;
}

void func( A a){
    // printf("%p\n",a);//000000000061fdbf 触发复制构造函数和析构函数
    // printf("%d\n",a.get());
    cout<<"func-a:"<<&a<<endl;//000000000061fdbf 不触发复制构造函数
}
int main(){
    A a;
    cout<<"func-str"<<endl;
    func(a);
    // A B(a);
    return 0;
}