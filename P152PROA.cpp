#include<iostream>
#include<vector>

#define M 100006

using namespace std;

int gcd(int a, int b){
    while(a != 0){
        int tmp = a;
        a = b % a;
        b = tmp;
    }
    return b;
}

vector<int> mark(1000006, 1);

void sieve(){
    mark[0] = mark[1] = 0;
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 1){
            for(int j = i * i; j <= M; j += i){
                mark[j] = 0;
            }
        }
    }
}

int main(){
    int T;
    cin >> T;
    sieve();
    while(T--){
        int x;
        cin >> x;
        int count = 0;
        for(int i = 1; i <= x; i++){
            if(gcd(i, x) == 1){
                count++;
            }
        }
        if(mark[count] == 1){
            cout << "1" << "\n";
        }
        else{
            cout << "0" << "\n";
        }
    }
} 