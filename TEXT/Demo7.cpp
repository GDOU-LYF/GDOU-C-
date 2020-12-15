#include <iostream>
#include <cmath>
using namespace std;
class Shape{
    private:
        int x;
        int y;
    public:
        Shape();
        Shape(int x,int y):x(x),y(y){};
        int getX(){return x;};
        int getY(){return y;};
        virtual double getArea()=0;
};
class Rectangle:public Shape{
    public:
    Rectangle():Shape(){

    }
    Rectangle(int x,int y):Shape(x,y){

    }
    double getArea(){
        return getX()*getY();
    }
};
class Circle:public Shape{
    public:
    Circle():Shape(){

    }
    Circle(int r):Shape(r,0){

    }
    double getArea(){
        return 2*M_PI*getX();
    }
};

class Counter{
private:
    int i;
public:
    Counter(){
        this->i=0;
    }
    Counter(int i):i(i){

    }
    Counter  operator+(Counter &s){
        return this->i+s.i;
    }
    Counter & operator++(){
        this->i=this->i+1;
        return *this;
    }
    Counter operator++(int){
        Counter c=*this;
        ++(*this);
        return c;
    }
    int getCount(){
        return i;
    }
};

int main(){
    Shape *c=new Circle(2);
    Shape *r=new Rectangle(2,5);
    // Circle c(2);
    // Rectangle r(2,5);
    cout<<r->getArea()<<endl;
    cout<<c->getArea()<<endl;

    Counter count,count2(100);

    cout<<count++.getCount()<<endl;
    cout<<(++count).getCount()<<endl;
    cout<<(count+count2).getCount()<<endl;
    return 0;
}