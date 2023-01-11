#include<iostream>
#include<string>

using namespace std;

int isLeapYear(int n){
    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)){
        return 1;
    }
    return 0;
}

int tongCS(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int tong(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += tongCS(i);
    }
    return sum;
}

// 31 : 1 3 5 7 8 10 12
// 30 : 4 6 9 11
// 28/29 : 2
int main(){
    int n;
    cin >> n;
    int t31 = tong(31)*7 + (1 + 3 + 5 + 7 + 8 + 1 + 3)*31 + tongCS(n) * 31 * 7;
    int t30 = tong(30)*4 + (4 + 6 + 9 + 2)*30 + tongCS(n) * 30 * 4;
    int t2 = 0;
    if(isLeapYear(n)){
        t2 = tong(29) + 2 * 29 + tongCS(n)*29;
    }
    else{
        t2 = tong(28) + 2 * 28 + tongCS(n)*28;
    }
    cout << t31 + t30 + t2;
}