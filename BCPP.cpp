#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

#define M 1000006

vector<int> mark(1000006,1);
vector<int> save;

void sieve(){
    mark[0] = mark[1] = 0;
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 1){
            for(int j = i * i ; j <= M; j += i){
                mark[j] = 0;
            }
        }
    }
}

int check(int n, vector<int> save){
    long long temp = 0;
    long long res = 1;
    int m = n;
    for(int i = 0; i < save.size(); i++){
        if(n % save[i] == 0){
            int count = 0;
            while(n % save[i] == 0){
                count++;
                n /= save[i];
            }
            temp = (pow(save[i], count+1) - 1)/(save[i] - 1);
            res *= temp;
        }
    }
    
    res -= m;
    if(res > m){
        return 1;
    }
    return 0;
}

int main(){
    sieve();
    for(int i = 2; i <= M; i++){
        if(mark[i] == 1){
            save.emplace_back(i);
        }
    }
    int l,r;
    cin >> l >> r;
    int count = 0;
    for(int i = l; i <= r; i++){
        if(check(i, save)){
            count++;
        }
    }
    cout << count;
}