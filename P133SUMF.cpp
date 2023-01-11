#include<iostream>

using namespace std;

int arr[3];
int main(){
    for(int i = 1; i <= 3; i++){
        cin >> arr[i];
    }
    
    for(int i = 1; i <= 3; i++){
        for(int j = 3; j > i; j--){
            if(arr[j] < arr[j - 1]){
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }  
        }
    }

    int a = arr[1];
    int b = arr[2];
    int c = arr[3];

    if((c - b) > (b - a)){
        cout << (c + b)/2;
    }
    else if((c - b) < (b - a)){
        cout << (b + a)/2;
    }
    else{
        cout << c + c - b;
    }
}