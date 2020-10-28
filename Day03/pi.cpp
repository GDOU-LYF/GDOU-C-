#include <iostream>
#include <math.h>
using namespace std;
double arctanx(double x){
    int flag=-1;
    double x2=x*x;
    double e=x;
    int i=1;
    double ret=x;//第一项+...
    while(e/i>1e-15){
        e*=x2;
        i+=2;
        flag=-flag;
        ret+=flag*e/i;
    }
    return ret;
}

int main(){
    cout<<arctanx(0.5);



    return 0;
}