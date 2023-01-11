#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

vector<long long> save;

int isSquareNum(long long a){
    if(a == 1){
        return 0;
    }
    long long can = sqrt(a);
    if(can * can == a){
        return 1;
    }
    return 0;
}

int isSpecial(long long x){
    for(long long i = 1; i * i <= x; i++){
        if(x % i == 0){
            if(isSquareNum(i) == 1){
                return 0;
            }
            if(isSquareNum(x/i) == 1){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    long long n;
    cin >> n ;
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(i != n/i){
                save.emplace_back(i);
                save.emplace_back(n/i);
            }
            else{
                save.emplace_back(i);
            }
        }
    }
    sort(save.begin(), save.end(), greater<>());
    // for(int i = 0; i < m; i++){
    //     cout << save[i] << " ";
    // }
    for(long long i = 0; ; i++){
        if(isSpecial(save[i])){
            cout << save[i];
            return 0;
        }
    }
    return 0;
}