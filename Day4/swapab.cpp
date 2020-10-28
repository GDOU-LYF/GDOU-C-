#include <iostream>
using namespace std;
void swap(int &a,int &b){//交换a,b
    int t=a;
    a=b;
    b=t;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<"x:"<<x<<",y:"<<y<<endl;
    swap(x,y);
    cout<<"x:"<<x<<",y:"<<y<<endl;
    
}