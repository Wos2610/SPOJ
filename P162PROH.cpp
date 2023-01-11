#include<iostream>

using namespace std;

long long d[1000006] = {0};

int main(){
    int x;
    cin >> x;
    for(int i = 1; ; i++){
        d[i] = d[i - 1] + i;
        if(x < d[i]){
            cout << i - 1;
            return 0;
        }
        else if( x == d[i]){
            cout << i;
            return 0;
        }
        x -= d[i];
    }
    return 0;
}
