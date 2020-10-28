#include <iostream>
using namespace std;
int main(){
    int a,b;
    a=8,b=9;

     b = (__int64) ((__int64)a << 32|(a=b))>>32 ;
    //  b = (__int64)((__int64)a << 32|(a=b)) >> 32;
    // a|b;//a=b;
    // b^=a;
    cout<<a;
    cout<<b;


    return 0;
}