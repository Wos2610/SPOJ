#include<iostream>
#include<string>

using namespace std;

int count[16] = {0};

void dem(long long m, int count[]){
    while(m > 0){
        int cs = m % 10;
        count[cs]++;
        m /= 10;
    }
}

int check(int count[]){
    for(int i = 0; i <= 9; i++){
        if(count[i] == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    long long n;
    while(cin >> n){
        int count[10] = {0};
        for(int i = 1; ; i++){
            long long m = i * n;
            dem(m, count);
            if(check(count)){
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}