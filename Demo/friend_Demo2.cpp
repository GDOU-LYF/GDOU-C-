#include <iostream>
class CCar{
    private:
        int price;
        friend class CDriver;
    public:
        CCar(int price):price(price){;}
};

class CDriver{
    public:
        CCar *P;
        CDriver(){
            P=new CCar(0);
        }
        void ModifyCar(){
            P->price+=1000;
            std::cout<<P->price<<std::endl;

        }

};

int main(){
    CDriver cd;
    for(int i=0;i<3;i++){
        cd.ModifyCar();
    }
    return 0;

}