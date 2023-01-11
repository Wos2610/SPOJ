#include<iostream>

using namespace std;

int a[1000000] = {0};

void dem(int n, int a[]){
    int max = 0;
    int count = 1;
    for(int i = 0; i < n - 1; i++){
        if(a[i] <= a[i + 1]){
            count++;
            if(count > max){
                max = count;
            }
        }
        else{
            count = 1;
        }
    }
    cout << max;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    dem(n, a);
}