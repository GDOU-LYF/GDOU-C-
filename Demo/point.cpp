#include <iostream>
using namespace std;
// double Mean(double a[M][N],int m,int n){
// 	double v=0.0;
// 	for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
// 			v+=a[i][j];
// 		}
// 	}
// 	return v/(m*n);
// }
class round{
private:
	int price=35;
	int x,y;
public:
	round(int x,int y):x(x),y(y){;}
	int show(){
		cout<<price*x*y<<endl;
        return price*x*y;
	}
};

int main(){

	round r(10,10);
	r.show();

}