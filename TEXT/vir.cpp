#include <iostream>
using namespace std;
class Base1{
    public:
        virtual void display() const{
            cout<<"Base1::display."<<endl;
        }

};
class Base2:public Base1{
    public:
        void display() const{
            cout<<"Base2::display."<<endl;
        }
};
class Derived:public Base2{
    public:
        void display() const{
            cout<<"Derived::display."<<endl;
        }
};

void fun(Base1 *p){
    p->display();
}
int main(){
    Base1 *b[3]={new Base1(),new Base2(),new Derived()};
    for(int i=0;i<3;i++){
        fun(b[i]);
    }


    return 0;
}