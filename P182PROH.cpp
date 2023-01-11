#include<iostream>

using namespace std;

struct Time{
    int h;
    int m;
    int s;
};

Time a;
int main(){
    string str;
    cin >> str;
    
    a.h = (str[0] - '0') * 10 + (str[1] - '0');
    a.m = (str[3] - '0') * 10 + (str[4] - '0');
    a.s = (str[6] - '0') * 10 + (str[7] - '0');
    
    if(str[8] == 'P'){
        if(a.h != 12){
            a.h += 12;
        }
        else{
            a.h = 12;
        }
    }
    else{
        if(a.h == 12){
            a.h = 0;
        }
    }
    if(a.h < 10){
        cout << "0";
    }
    cout << a.h << ":";
    if(a.m < 10){
        cout << "0";
    }
    cout << a.m << ":";
    if(a.s < 10){
        cout << "0";
    }
    cout << a.s;
    
}