#include <iostream>
using namespace std;
class Complex{
private:
    double real,imag;
public:
    Complex(double r=0.0,double i=0.0):real(r),imag(i){}
    Complex operator+(const Complex&c){
        return Complex(real+c.real,imag+c.imag);
    }
    Complex operator-(const Complex&c){
        return Complex(real-c.real,imag-c.imag);
    }
    void display() const{
        cout<<"Complex=("<<real<<","<<imag<<")"<<endl;
    }
};

int main(){
    Complex c1(5,4),c2(2,10),c3;
    c1.display();
    c2.display();
    c3.display();
    (c1-c2).display();
    (c1+c2).display();
    c1.display();
    return 0;
}