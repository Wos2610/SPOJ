#include<iostream>
#include<string>

using namespace std;

void check(int count[]){
    for(int i = 1; i <= 49; i++){
        if(count[i] == 0){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main(){
    while(1){
        int n;
        cin >> n;
        int count[106] = {0};
        if(n == 0){
            return 0;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 6; j++){
                long long x;
                cin >> x;
                if(x >= 1 && x <= 49){
                    count[x]++;
                }
            }
        }
        check(count);
    }
}