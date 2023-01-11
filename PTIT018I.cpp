#include<iostream>
#include<string>

using namespace std;

long long lcm(long long a, long long b){
    long long tich = a * b;
    while(a != 0){
        long long temp = a;
        a = b % a;
        b = temp;
    }
    return tich/b;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long min = lcm(lcm(x,y), z);
        long long k = 1;
        while(n > 1){
            k *= 10;
            n--;
        }
        if(min > (k * 10)){
            cout << "-1\n";
        }
        else{
            long long res = 1;
            for(int i = 1; ; i++){
                res = min * i;
                if(res >= k){
                    break;
                }
            }
            cout << res << "\n";
        }
    }
}