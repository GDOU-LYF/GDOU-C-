#include <iostream>
#include <string>
using namespace std;
int fn1(){
    int *p=new int(5);
    return *p;
}

void reserve(string &s){

    if(s.length()>1){
       cout<<s.substr(s.length()-1,1);
       string sub=s.substr(1,s.length()-2);
       reserve(sub);
         cout<<s.substr(0,1);
    }else{
        // cout<<endl;
    }
}

void Demo6_23(){
    const int N=8;
    int a[N]={0,};
    double sum=0.0;
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"平均值为:"<<sum/(sizeof(a)/sizeof(int))<<endl;
}
int main(){
    int a=fn1();
    cout<<a<<endl;
    string s1="helloo";
    // cout<<<<endl;
    reserve(s1);
    Demo6_23();

}