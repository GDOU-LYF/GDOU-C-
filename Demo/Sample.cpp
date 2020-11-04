#include <iostream>
class Sample{
    public:
        void GetValue()const;
};

void Sample::GetValue()const{

}
int main(){
    const Sample o;
    o.GetValue();
    return 0;
}