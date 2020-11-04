#include <iostream>
using namespace std;
int i=1;// 33 -43
void other(){
    static int a=2;//4
    static int b;
    int c=10;

    a+=2;//静态other a 4-6
    i+=32;//全局 i 33(43)-75
    c+=5;//局部15-15
    cout<<"--other--"<<endl;
    cout<<"i:"<<i<<" a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
    //第一轮 i 33 a 4 b 0 c 15
    //第二轮 i 75 a 6 b 4 c 15
    b=a;//4
}





int main(){
    static int a;
    int b=-10;
    int c=0;

    cout<<"--MAIN--"<<endl;
    cout<<"i:"<<i<<" a:"<<a<<" b:"<<b<<" c:"<<c<<endl;// i 1 a 0 b -10 c 0
    c+=8;//c 8
    other();
    
    cout<<"--MAIN--"<<endl;
    cout<<"i:"<<i<<" a:"<<a<<" b:"<<b<<" c:"<<c<<endl;// i 33 a 0  b -10   c 8
    i+=10;//43
    other();
    return 0;
}