#include<iostream>
#include<string>

using namespace std;

string a[100] ;

void FiboString(){
    a[1] = "A";
    a[2] = "B";

    for(int j = 3; j <= 92; j++){
        a[j] = a[j - 2] + a[j - 1];
    }
}

int main(){
    int T;
    cin >> T;
    FiboString();
    while(T--){
        int n, i;
        cin >> n >> i;
        cout << a[n][i - 1];
    }
} 