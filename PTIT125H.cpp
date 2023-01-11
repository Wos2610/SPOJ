#include<iostream>
#include<string>

using namespace std;

int save[100000] = {0};

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count;
    for(int i = 0; i < n; i++){
        if(str[i] == 'L'){
            count++;
        }
    }
    int dem = n - count + count/2 + 1;
    if(dem > n){
        cout << n;
    }
    else{
        cout << dem;
    }
}