#include<iostream>
#include<string>

using namespace std;

int a[10000006] = {0};

void bubbleSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            if(a[j] < a[j - 1]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int index = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bubbleSort(a, n);
        if(n % 2 == 0){
            for(int i = n - 1; i >= n/2; i--){
                cout << a[i] << " " << a[n - i - 1] << " ";
        }
        }
        else{
            for(int i = n - 1; i > n/2; i--){
                cout << a[i] << " " << a[n - i - 1] << " ";
            }
            cout << a[n/2];
        }
        cout << "\n";
    }
    
}