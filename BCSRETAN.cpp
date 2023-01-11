#include<iostream>
#include<string>
using namespace std;

string a[10000006] ;

void check(string a[], int k){
    a[1] = "4";
    a[2] = "7";
    int i = 3;
    int index = 1;
    while(i <= k){
        a[i] = a[index] + "4";
        i++;
        a[i] = a[index] + "7";
        i++;
        index++;
    }
    cout << a[k];
}

int main(){
    int k;
    cin >> k;
    check(a, k);
} 