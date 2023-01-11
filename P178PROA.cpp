#include<iostream>

using namespace std;

#define M 1000000

int main(){
    int n;
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            return 0;
        }
        int x;
        if(n <= M){
            x = n;
        }
        else if(n > M && n <= 5*M){
            x = n - 0.1*n;
        }
        else if(n > 5*M){
            x = n - 0.2*n;
        }
        cout << x << "\n";
    }
    return 0;
}