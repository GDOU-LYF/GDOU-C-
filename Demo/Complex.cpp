#include <iostream>
class Complex{
    private:
        double real,imag;
    public:
        Complex(double r);
        Complex(double r,double i);
        Complex(Complex c1,Complex c2);
};

Complex::Complex(double r){
    real=r;
    imag=0;
}

Complex::Complex(double r,double i){
    real=r;
    imag=0;
}

Complex::Complex(Complex c1,Complex c2){
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
}
#include <iostream>
int main(){
    int a;
    for(a=0;a++<=2;){
        std::cout<<a<<std::endl;
    }
    std::cout<<a;

    return 0;
}