#include<iostream>
#include<string>

using namespace std;

int save[100000] = {0};

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        for(int j = -n; j <= n; j++){
            if(j < -i){
                cout << " ";
            }
            else if(j >= -i && j < i ){
                cout << i - abs(j) << " ";
            }
            else if(j == i){
                cout << i - abs(j);
            }
        }
        cout << "\n";
    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = -n; j <= n; j++){
            if(j < -i){
                cout << " ";
            }
            else if(j >= -i && j < i ){
                cout << i - abs(j) << " ";
            }
            else if(j == i){
                cout << i - abs(j);
            }
        }
        cout << "\n";
    }
}