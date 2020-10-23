#include <iostream>
using namespace std;
double pow(int x,int n){//输入x的n次方,求出结果<double>
    double ret=1.0;

    while(n>0){
        ret*=x;
        n--;
    }
    return ret;
}


int main(){
    double ret=pow(2,8);
    cout<<ret<<endl;


    return 0;
}