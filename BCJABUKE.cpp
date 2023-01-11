#include<iostream>

using namespace std;

int a[1000000] = {0};


int main(){
    int n, m;
    cin >> n >> m;
    int j;
    cin >> j;
    for(int i = 1; i <= j; i++){
        cin >> a[i];
    }
    int begin = 1;
    int end = begin + m - 1;
    int v = 1;
    long long count = 0;
    for(int i = 1; i <= j; i++){
        if(a[i] < begin){
            count += begin - a[i];
            begin = a[i];
            end = begin + m - 1;
        }
        else if(a[i] > end){
            count += a[i] - end;
            end = a[i];
            begin = end - m + 1;
        }
    }
    cout << count;
}