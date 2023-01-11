#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void tongCS(string s){
    long long sum = 0;
    int n = s.size();
    if(n == 1){
        cout << "0";
        return;
    }
    for(int i = 0; i < n; i++){
        sum += s[i] - '0';
    }
    int count = 1;
    while(sum >= 10){
        long long tmp = sum;
        sum = 0;
        while(tmp > 0){
            sum += tmp % 10;
            tmp /= 10;
        }
        count++;
    }
    cout << count;
}

int main(){
    string s;
    cin >> s;
    tongCS(s);
} 