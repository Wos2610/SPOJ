#include<iostream>
#include<math.h>

using namespace std;

int c[26] = {0};

long long giaiThua(int begin, int n){
    long long res = 1;
    int count = 0;
    for(int i = begin; i >= 1; i--){
        if(count == n){
            break;
        }
        res *= i;
        count++;
        
    }
    return res;
}

void dem(string s){
    long long res = 0;
    int n = s.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '?'){
            count++;
        }
        else if(s[i] >= 'A' && s[i] <= 'J'){
            c[s[i] - 'A']++;
        }
    }

    int demSo= 0;

    for(int i = 0; i < 10; i++){
        if(c[i] != 0){
            demSo++;
        }
    }
    
    if(s[0] == '?'){
        res = 9 * pow(10, count - 1) * giaiThua(10,demSo);
    }
    else if(s[0] >= 'A' && s[0] <= 'J'){
        res = pow(10, count) * 9 * giaiThua(9, demSo - 1);
    }
    else if(s[0] == '0'){
        res = 0;
    }
    else {
        res = pow(10, count) *  giaiThua(10, demSo);
    }
    
    cout << res;
}
int main(){
    string s;
    cin >> s;
    dem(s);
} 