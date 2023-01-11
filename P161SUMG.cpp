#include<iostream>

using namespace std;

int a[1000000] = {0};
int mark[1000000] = {0};


int main(){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum == 0){
        cout << "-1";
        return 0;
    }
    if(sum % 5 == 0){
        cout << sum/5;
    }
    else{
        cout << "-1";
    }
}