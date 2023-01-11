#include<iostream>

using namespace std;

void check(string n){
    int m = n.size();
    int temp = (n[m - 2] - '0')*10 + (n[m - 1] - '0');
    if(temp % 4 == 0){
        cout << "4\n";
    }
    else{
        cout << "0\n";
    }
}
int main(){
    int T;
    cin >> T;
    while(T--){
        string n;
        cin >> n;
        check(n);
    }
}