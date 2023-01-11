#include<iostream>
#include<algorithm>

using namespace std;

int a[3] = {0};
int b[3] = {0};

int main() {
    int max = -9999;
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            b[i] += abs(a[j] - a[i]);
        }
    }
    sort(b, b + 3);
    cout << b[0];
}