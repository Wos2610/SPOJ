#include<iostream>
#include<string>
 
using namespace std;
 
struct Team{
    string name;
    int count = 0;
};
 
Team t[2];
 
int isAppear(string str){
    for(int i = 0; i < 2; i++){
        if(str == t[i].name){
            return i;
        }
    }
    return -1;
}
 
int main(){
    int n;
    cin >> n;
    int index = 0;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(isAppear(str) == -1){
            t[index].name = str;
            t[index].count = 1;
            index++;
        }
        else{
            t[isAppear(str)].count++;
        }
    }
    if(t[0].count > t[1].count){
        cout << t[0].name;
    }
    else{
        cout << t[1].name;
    }
}  