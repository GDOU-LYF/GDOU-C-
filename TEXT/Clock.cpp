#include <iostream>
using namespace std;
class Clock{
    private:
        int h,m,s;
    public:
        Clock(int h=0,int m=0,int s=0):h(h),m(m),s(s){ }
        void showTime() const;
        Clock &operator++(){
            s++;
            if(this->s>=60){
                s-=60;
               m+=1;
                if(m>=60){
                    m-=60;
                    h=(h+1)%24;
                }
            }
            return *this;
        }
        Clock operator++(int);
};
void Clock::showTime()const{
    cout<<this->h<<":"<<this->m<<":"<<this->s<<endl;
}

Clock Clock::operator++(int){
    Clock c(*this);
    ++(*this);
    return c;
}

int main(){
    Clock c(23,59,59);
    c.showTime();
    (c++).showTime();
    (++c).showTime();
}