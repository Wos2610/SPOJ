#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void check(string s1, string s2, string s, int n){
    string temp = "";
    int d = 0;
    while(temp != s){
        if(d > 50){
            cout << "-1\n";
            return;
        }
        temp = "";
        for(int i = 0; i < n; i++){
            temp.push_back(s2[i]);
            temp.push_back(s1[i]);
        }
        // cout << temp << " ";
        for(int i = 0; i < n; i++){
            s1[i] = temp[i];
        }
        for(int i = n; i < 2*n; i++){
            s2[i - n] = temp[i];
        }
        d++;
    }
    cout << d << "\n";
    return;
}

int main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            return 0;
        }
        string s1, s2, s;
        cin >> s1 >> s2 >> s;
        check(s1, s2, s, n);
    }
}