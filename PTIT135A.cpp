#include<iostream>
#include<algorithm>

#define M 1000

using namespace std;

int a[3] = {0};
int main(){
    for(int i = 1; i <= 3; i++){
        cin >> a[i];
    }
    int count[100006] = {0};
    for(int i = 0; i < 3; i++){
        int x, y;
        cin >> x >> y;
        for(int j = x; j < y; j++){
            count[j]++;
        }
    }
    int dem = 0;
    long long sum = 0;
    for(int i = 0; i <= 100; i++){
        if(count[i] == 1){
            sum += a[1];
        }
        else if(count[i] == 2){
            sum += 2*a[2];
        }
        else if(count[i] == 3){
            sum += 3*a[3];
        }
    }
    cout << sum;
} 