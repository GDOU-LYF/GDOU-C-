#include <iostream>
#include <cmath>
using namespace std;

void Demo2_12(){
    // int n=100;
    for(int i=100;i<=200;i+=2){
        cout<<i<<endl;
    }

}
void Demo2_26(){
    cout<<"现在正在下雨吗?(Y/N):";
    char y;
    cin>>y;
    cout<<y<<endl;
    if (y=='Y'||y=='y'){
        cout<<"现在正在下雨"<<endl;
    }else if(y=='N'||y=='n'){
        cout<<"现在没有下雨"<<endl;
    }else{
        cout<<"格式错误!"<<endl;
    }

}
void Demo2_29(){
    int flag;
    for(int i=2;i<=100;i++){
        flag=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<i<<endl;
        }
    }
}

void Demo_int(){
    int a[]={2,4,9,5,3,2,1,7};
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        for(int j=0;j<sizeof(a)/sizeof(int);j++){
            if(a[j]>a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

class Shape{
    private:
    double width,length;
    public:
    Shape():width(0),length(0){};
    Shape(double width,double length){
        this->width=width;
        this->length=length;
    }
    double getArea(){
        return width*length;
    }
};
int main(){
    Demo_int();
    Shape s(5,5);
    cout<<s.getArea()<<endl;
    return 0;
}