#include <iostream>
using namespace std;
class Clock{
    public:
        Clock();
        Clock(int hour,int minute,int second);
        void setTime(int newH=0,int newM=0,int newS=0);
        void showTime();
    private:
        int hour,minute,second;
};

Clock::Clock(){
    hour=0;
    minute=0;
    second=0;
}

Clock::Clock(int hour,int minute,int second):hour(hour),minute(minute),second(second){
;
}

void Clock::setTime(int newH,int newM,int newS){
    hour=newH;
    minute=newM;
    second=newS;
}

inline void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main(){
    Clock myClock(5,5,5);
    cout<<"First time set and output:"<<endl;
    int hour,minute,second;
    myClock.showTime();
    cout<<"Second time set and input:"<<endl;
    scanf("%d:%d:%d",&hour,&minute,&second);
    myClock.setTime(hour,minute,second);
    myClock.showTime();
    return 0;
}