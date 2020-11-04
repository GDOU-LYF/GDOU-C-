#include <iostream>
class CRectangle{
    public:
        int w,h;
        CRectangle();
        CRectangle(int w,int h);
        void init(int w,int h);
        int area();
        int perimeter();
};


CRectangle::CRectangle(int w,int h):w(w),h(h){
    ;
}
void CRectangle::init(int w,int h){
    this->w=w;
    this->h=h;
}

int CRectangle::area(){
    return w*h;
}

int CRectangle::perimeter(){
    return 2*(w+h);
}

int main(){
    CRectangle c(2,3);
    std::cout<<c.area()<<std::endl;
    std::cout<<c.perimeter()<<std::endl;
    CRectangle r1,r2;
    CRectangle *p1=&r1;
    CRectangle *p2=&r2;
    p1->w=5;
    p2->init(5,4);
    return 0;
}