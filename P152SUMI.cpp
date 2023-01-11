#include<iostream>
#include<string>

using namespace std;

int c[1000006] = {0};

void check(string s){
    int n = s.size();
    for(int i = 1; i < n; i++){
        if(s[i] == s[i + 1]){
            c[i] = c[i - 1] + 1;
        }
        else{
            c[i] = c[i - 1];
        }
    }
}

int main(){
    string s;
    cin >> s;
    s = ' ' + s;
    check(s);
    int m;
    cin >> m;
    int l, r;
    for(int i = 0; i < m; i++){
        cin >> l >> r;
        cout << c[r - 1] - c[l - 1] << "\n";
    }
}