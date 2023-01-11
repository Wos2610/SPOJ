#include<iostream>

using namespace std;

int isLucky(long long n){
    long long sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum == 0){
        return 0;
    }
    if(sum % 9 == 0){
        return 1;
    }
    return 0;
}

void check(string n){
    long long sum = 0;
    for(int i = 0; i < n.size(); i++){
        sum += n[i] - '0';
    }
    if(isLucky(sum)){
        cout << "1\n";
    }
    else{
        cout << "0\n";
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string n;
        cin >> n;
        check(n);
    }

}