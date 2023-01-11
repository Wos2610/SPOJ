#include<iostream>
#include<string>

using namespace std;

void check(string str,int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C'){
            res += 3;
        }
        else if(str[i] == 'D' || str[i] == 'E' || str[i] == 'F'){
            res += 4;
        }
        else if(str[i] == 'G' || str[i] == 'H' || str[i] == 'I'){
            res += 5;
        }
        else if(str[i] == 'J' || str[i] == 'K' || str[i] == 'L'){
            res += 6;
        }
        else if(str[i] == 'M' || str[i] == 'N' || str[i] == 'O'){
            res += 7;
        }
        else if(str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S'){
            res += 8;
        }
        else if(str[i] == 'T' || str[i] == 'U' || str[i] == 'V'){
            res += 9;
        }
        else if(str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z'){
            res += 10;
        }
    }
    cout << res;
}

int main(){
    string str;
    cin >> str;
    int n = str.size();
    check(str,n);
}