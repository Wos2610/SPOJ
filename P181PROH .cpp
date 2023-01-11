#include<iostream>

using namespace std;

void check(int n, int b){
    if(n == 0){
        cout << "infinity";
    }
    else{
        int count = 0;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                if(i > b){
                    count++;
                }
                if(n/i != i && n/i > b){
                    count++;
                }
            }
        }
        cout << count;
    }
}
int main(){
    int a, b;
    cin >> a >> b;
    int n = a - b;
    check(n, b);
    return 0;
}