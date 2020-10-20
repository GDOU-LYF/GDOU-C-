#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year:";
    cin>>year;
    if (year%400==0||(year%4==0&&year%100!=0)){
        cout<<"是闰年"<<endl;
    }else{
        cout<<"不是闰年"<<endl;
    }

    return 0;
}