#include<iostream>

using namespace std;

string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main(){
    char c;
    cin >> c;
    int d = 0;
    if(c == 'L'){
        d = 1;
    }
    else{
        d = -1;
    }
    string str;
    cin >> str;
    int n = str.size();
    string res;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 30; j++){
            if(str[i] == s[j]){
                if((j == 0 || j == 10 || j == 20) && (d == -1)){
                    res.push_back(s[j + 9]);
                }
                else if((j == 9 || j == 19 || j == 29) && (d == 1)){
                    res.push_back(s[j - 9]);
                }
                else{
                    res.push_back(s[j + d]);
                }
            }
        }
    }
    cout << res;
}