#include <iostream>
using namespace std;

class Point{
    public:
        Point(int x,int y);
        Point(Point const & T);
        int getX();
        int getY();
    private:
        int x,y;
};

Point::Point(int x,int y):x(x),y(y){
    cout<<"constructor"<<endl;
}

Point::Point(Point const & t):x(t.x),y(t.y){
    cout<<"copy constructor"<<endl;
}

int Point::getX(){
    return this->x;
}

int Point::getY(){
    return this->y;
}

void fun1(Point p){
    cout<<p.getX()<<endl;
}

Point fun2(){
    return Point(1,2);//返回对象会触发复制构造函数
}

int main(){
    Point a(4,5);//触发构造函数
    Point b=a;//触发复制构造函数
    fun1(a);
    // fun2();
}