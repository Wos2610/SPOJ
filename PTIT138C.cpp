#include<iostream>
#include<string>

using namespace std;

int save[100000] = {0};

void isThuanNghich(string s){
    int n = s.size();
    for(int i = 0; i < n / 2; i++){
        if(s[i] != s[n - i - 1]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

void bienDoi(string str, int n){
    string s = "";
    for(int i = 0; i < n; i++){
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C'){
            s.push_back(2);
        }
        if(str[i] == 'D' || str[i] == 'E' || str[i] == 'F'){
            s.push_back(3);
        }
        if(str[i] == 'G' || str[i] == 'H' || str[i] == 'I'){
            s.push_back(4);
        }
        if(str[i] == 'J' || str[i] == 'K' || str[i] == 'L'){
            s.push_back(5);
        }
        if(str[i] == 'M' || str[i] == 'N' || str[i] == 'O'){
            s.push_back(6);
        }
        if(str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S'){
            s.push_back(7);
        }
        if(str[i] == 'T' || str[i] == 'U' || str[i] == 'V'){
            s.push_back(8);
        }
        if(str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z'){
            s.push_back(9);
        }
    }
    isThuanNghich(s);
}
int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        int n = str.size();
        for(int i = 0; i < n; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] -= 32;
            }
        }
        bienDoi(str, n);
    }
}