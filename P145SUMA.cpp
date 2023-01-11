#include<iostream>
#include<string>

using namespace std;

int isLucky(string str, int n){
    for(int i = 0; i < n; i++){
        if(str[i] != '4' && str[i] != '7'){
            return 0;
        }
    }
    return 1;
}

void check(string str, int n){
    int sum1 = 0;
    int sum2 = 0;
    if(isLucky(str, n)){
        for(int i = 0; i < n / 2; i++){
            sum1 += str[i];
        }
        for(int i = n / 2; i < n; i++){
            sum2 += str[i] ;
        }
        if(sum1 == sum2){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }
}
int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    check(str, n);
} 