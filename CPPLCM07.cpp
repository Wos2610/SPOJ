#include<iostream>
#include<algorithm>

using namespace std;

long long luyThua10(long long n){
    long long res = 1;
    while(n > 1){
        res *= 10;
        n--;
    }
    return res;
}

long long lcm(long long a, long long b){
    long long tich = a * b;
    while(a != 0){
        long long temp = a;
        a = b % a;
        b = temp;
    }
    return tich/b; 
}

void check(int x, int y, int z, int n){
    long long k = lcm(lcm(x,y), z);

    long long begin = luyThua10(n);
    long long end = luyThua10(n + 1);
    long long res = k;
    
    if(res >= end){
        cout << "-1\n";
        return;
    }
    if(begin % k == 0){
        res = begin;
    }
    else{
        res = (begin/k + 1) * k;
    }
    cout << res << "\n";
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        check(x, y, z, n);
    }
}