#include <iostream>
using namespace std;
class complex{
public:
 complex(int r,int i):real(r),imag(i){}
 friend complex & operator++(complex &);
 friend complex operator--(complex & );
 void print(){
  cout<<"("<<real<<","<<imag<<")"<<endl;
 }
private:
 int real,imag;
};
complex  & operator++(complex &o){
 o.real++;
 o.imag++;
 return o;
}
complex operator--(complex &o){
 o.real--;
 o.imag--;
 return o;
}
int main(){
 complex obj(10,20),obj_b(30,40);
 ++obj;
 obj.print();
 --obj_b;
 obj_b.print();
 return 0;
}
