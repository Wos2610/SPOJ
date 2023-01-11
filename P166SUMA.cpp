#include<iostream>
#include<math.h>

using namespace std;

int count[5006] = {0};

int main(){
    int n;
    cin >> n;
    int x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        count[x]++;
    }
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(count[i] == 0){
            dem++;
        }
    }
    cout << dem;
}