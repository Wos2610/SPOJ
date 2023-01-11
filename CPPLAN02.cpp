#include<iostream>
#include<string>

using namespace std;

string add(string a, string b){
    int n = a.size();
    int m = b.size();
    while(n < m){
        a = '0' + a;
        n++;
    }
    while(n > m){
        b = '0' + b;
        m++;
    }
    int sum = 0;
    int rem = 0;
    string s;
    for(int i = n - 1; i >= 0; i--){
        sum = a[i] - '0' + b[i] - '0' + rem;
        rem = sum / 10;
        s = char(sum % 10 + '0') + s;
    }
    if(rem == 1){
        s = '1' + s;
    }
    int i = 0;
    while(s[0] == '0' && s.size() > 1){
        s.erase(0, 1);
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    while(T--){
        string a, b;
        cin >> a >> b;
        cout << add(a, b) << "\n";
    }
}