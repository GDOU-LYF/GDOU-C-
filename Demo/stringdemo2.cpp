#include <iostream>
#include <cstring>
using namespace std;
class String {
    private:
        char * str_c;
    public:
        String();
        String(const String &T);
        String(char *s);
        ~String();
        String & operator=(const char *s);
        const char* c_str();
};
String::String(const String &T):str_c(NULL){
   char *temp=T.str_c;
   if (str_c){
       delete[] str_c;
   }
   if(temp){
       str_c=new char[strlen(temp)+1];
       strcpy(str_c,temp);
   }else{
       str_c=NULL;
   }
   cout<<"hello"<<endl;
}
String::String(char *s){
    if(s){
        str_c=new char[strlen(s)+1];
        strcpy(str_c,s);
    }
}
String::String():str_c(NULL){;}
String::~String(){
    if (str_c){
        delete[] str_c;
    }
}
const char* String::c_str(){
    return str_c;
}

String& String::operator=(const char *s){
    if (str_c){
        delete[] str_c;
    }
    if(s){
         str_c=new char[strlen(s)+1];
        strcpy(str_c,s);
    }else{
        str_c=NULL;
    }

    return *this;
}

int main(){
    String s1;
    s1="goodluck";
    String s2(s1);
    s1="world";
    cout<<s1.c_str()<<endl;
     cout<<s2.c_str()<<endl;
    return 0;

}