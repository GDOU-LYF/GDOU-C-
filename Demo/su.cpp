#include <iostream>
#include <cmath>
int main(){
	const int N=5;
	int flag;
	for(int i=2;i<=5;i++){
		flag=1;
		for(int j=2;j<=int(sqrt(i));j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag){
			std::cout<<i<<std::endl;
		}

	}




}