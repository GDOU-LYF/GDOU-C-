#include<iostream>
using namespace std;
class BOX{
public:
    double length=0.0;
    double height=0.0;
    double breadth=0.0;
    BOX operator+(const BOX & b){
        BOX box;
        box.height=this->height+b.height;
        box.breadth=this->breadth+b.breadth;
        box.length=this->length+b.length;
        return box;
    }
// public:

};
class Shape{
    private:
        int width;
        int height;
    public:
    void setWidth(int w){width=w;}
    int getWidth(){return width;}
    void setHeight(int h){this->height=h;}
    int getHeight(){return this->height;}
};

class PaintCost{
    public:
        int getCost(int area){
            return area*70;
        }
};

class Rectangle:public Shape,public PaintCost{
    public:
        int getArea(){
            return getWidth()*getHeight();
        }
};

class printData{
    public:
        void print(int i){
            cout<<"整数为:"<<i<<endl;
        }
};
int main(){
    BOX box1,box2;
    double volume=0.0;
    box1.height=9;
    box2.height=9;
    BOX box3=box1+box2;                                                                                                                                                                                                                                                                                                                                                                                   
    cout<<box3.height<<endl;

    Rectangle rect;
    int area;
    rect.setWidth(5);
    rect.setHeight(7);
    area=rect.getArea();
    cout<<"Total area:"<<rect.getArea()<<endl;
    cout << "Total paint cost: $" << rect.getCost(area) << endl;
    return 0;
}