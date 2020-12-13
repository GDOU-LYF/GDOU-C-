#include <iostream>
using namespace std;
class Clock{
    private:
    int hour;
    int minute;
    int second;
    public:
    Clock(int hour=0,int minute=0,int second=0);
    void showTime() const;
    Clock & operator++();
    Clock operator++(int);
};

Clock::Clock(int hour,int minute,int second){   //构造函数
    if (0<=hour && hour<24 && 0<=minute && minute<60&&0<=second &&second<60){   //判断是否为标准的时间
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }else{//输入信息错误时
        cout<<"Time error!"<<endl;
    }
}

void Clock::showTime()const{//显示时间
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

Clock& Clock::operator++(){//前置运算符重载++
    second++;//对秒 做自增
    if (second>=60){//如果秒大于等于60时,使秒-60,同时分+1
        second-=60;
        minute++;
        if(minute>=60){//如果分大于等于60时,使分-60,同时时+1
            minute-=60;
            hour=(hour+1)%24;
        }
    }
    return *this;//返回当前对象
}
Clock Clock::operator++(int){//后置运算符重载++
    Clock old=*this; //创建一个临时对象保存当前的对象信息
    ++(*this); //对当前对象进行自增操作
    return old;//返回临时对象(旧)的信息
}

int main(){
    Clock myClock(23,59,59);//创建一个Clock对象
    cout<<"First time output:";
    myClock.showTime();//显示时间 23:59:59
    cout<<"show myClock++:  ";
    (myClock++).showTime();//显示后置++的结果  输出的结果与第一次时间一致,但对象内部已经是0:0:0
    cout<<"show ++myClock:  ";
    (++myClock).showTime();//显示前置++的结果 输出的结果与变量的内容一致 为0:0:1
    return 0;

    
}