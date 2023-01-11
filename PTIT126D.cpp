#include<iostream>
#include<string>

using namespace std;

int d[1000006] = {0};
int p[1000006] = {0};

void check(int n){
    for(int i = 1; i <= n; i++){
        d[i] = d[i - 1];
        while(d[i] < p[i]){
            cout << i << " ";
            d[i]++;
        }
    }
}

int main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            return 0;
        }
        for(int i = 1; i <= n; i++){
            cin >> p[i];
        }
        check(n);
        cout << "\n";
    }
}