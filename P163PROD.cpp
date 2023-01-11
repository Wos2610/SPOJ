#include<iostream>
 
using namespace std;

int toIn(string s){
    int n = s.size();
    int m = 0;
    for(int i = 0; i < n; i++){
        m = m * 10 + s[i] - '0';
    }
    return m;
}

string xoa(string s){
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            s.erase(i, 1);
        }
    }
    return s;
}

int main(){
    string s1, s2, s3, s4;
    cin >> s1 >> s2;

    int a = toIn(s1);
    int b = toIn(s2);
    int sum1 = a + b; 
    // cout << sum1 << "\n";

    string sTong1 = to_string(sum1);

    sTong1 = xoa(sTong1);

    // cout << sTong1 << "\n";

    s3 = xoa(s1);
    s4 = xoa(s2);

    int c = toIn(s3);
    int d = toIn(s4);

    int sum2 = c + d;

    string sTong2 = to_string(sum2);
    // cout << sum2 << "\n";
    // cout << sTong2 << "\n";

    if(sTong1 == sTong2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

} 