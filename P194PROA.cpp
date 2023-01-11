#include<iostream>

using namespace std;

int main() {
	int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++){
        int dem = 0;
        int a[3] = {0};
        for(int j = 0; j < 3; j++){
            cin >> a[j];
            if(a[j] == 1){
                dem++;
            }
        }
        if(dem >= 2){
            count++;
        }
    }
    cout << count;
}