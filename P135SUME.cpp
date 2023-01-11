#include<iostream>
#include<string>

using namespace std;

int a[100];

int main(){
    for(int i = 1; i <= 8; i++){
        cin >> a[i];
    }
    int count1 = 0;
    int count2 = 0;
    for(int i = 1; i <= 8; i++){
        if(a[i] == i){
            count1++;
        }
        else if(a[i] == 8 - i + 1){
            count2++;
        }
    }
    if(count1 == 8){
        cout << "ascending";
    }
    if(count2 == 8){
        cout << "descending";
    }
    if(count1 != 8 && count2 != 8){
        cout << "mixed";
    }
}