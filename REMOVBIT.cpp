#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    int mark = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == '0'){
            str.erase(i, 1);
            mark = 1;
            break;
        }
    }
    if(mark == 0){
        str.erase(0, 1);
    }
    cout << str;
}