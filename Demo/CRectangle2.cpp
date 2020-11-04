#include <iostream>
class CRectangle{
    private:
        int w,h;
        static int totalArea;
        static int totalNumber;
    public:
        CRectangle(int w,int h);
        CRectangle(const CRectangle &r);
        ~CRectangle();
        static void printTotal();
};

CRectangle::CRectangle(int w,int h):w(w),h(h){
    totalNumber++;
    totalArea+=w*h;
}

CRectangle::~CRectangle(){
    totalNumber--;
    totalArea-=w*h;
}
CRectangle::CRectangle(const CRectangle &r):w(r.w),h(r.h){
    totalNumber++;
    totalArea+=r.w*r.h;
}

void CRectangle::printTotal(){
    std::cout<<totalNumber<<","<<totalArea<<std::endl;
}

int CRectangle::totalNumber=0;
int CRectangle::totalArea=0;

int main(){
    CRectangle r1(3,3),r2(2,2);
    CRectangle::printTotal();
    r1.printTotal();
    return 0;
}