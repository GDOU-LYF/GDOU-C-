#include <iostream>
using namespace std;
int main(){
    int x,y;
    int max;
    cin>>x>>y;
    if (x>y){
        max=x;
    }else{
        max=y;
    }
    cout<<"最大值:"<<max<<endl;
    return 0;
}