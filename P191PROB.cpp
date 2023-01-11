#include<iostream>

using namespace std;

int a[5006] = {0};

int main() {
	int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] == m){
                count++;
            }
        }
    }
    cout << count;
}