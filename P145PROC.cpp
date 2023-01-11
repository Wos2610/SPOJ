#include<iostream>
#include<string>

using namespace std;

int count[45] = {0};
int a[10];

int main(){
    for(int i = 0; i < 10; i++){
       cin >> a[i];
       int x = a[i] % 42;
       count[x]++;
    }
    int d = 0;
    for(int i = 0; i < 42; i++){
        if(count[i] != 0){
            d++;
        }
    }
    cout << d;
}