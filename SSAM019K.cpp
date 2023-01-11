#include<iostream>
#include<vector>

#define M 10000000

using namespace std;

vector<int> prime(10000006, 0);
vector<int> save;

long long tongCS(long long n){
    long long sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void sieve(){
    for(int i = 2; i * i <= M; i++){
        if(prime[i] == 0){
            for(int j = i * i; j <= M; j += i){
                prime[j] = 1;
            }
        }
    }
}

void factorize(long long n, vector<int> save){
    long long sumN = 0;
    sumN = tongCS(n);
    long long sum = 0;
    for(int i = 0; i < save.size(); i++){
        if(n % save[i] == 0){
            while(n % save[i] == 0){
                sum += tongCS(save[i]);
                n /= save[i];
            }
        }
        if(n < save[i]){
            break;
        }
    }
    if(sum == sumN){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

int main(){
    long long n;
    cin >> n;
    sieve();
    for(int i = 2; i <= M; i++){
        if(prime[i] == 0){
            save.emplace_back(i);
        }
    }
    factorize(n, save);
} 