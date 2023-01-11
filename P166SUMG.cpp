#include<iostream>
#include<math.h>

using namespace std;

int check(int a, int b, int c){
    if(a == 0 && b == 0){
        return 0;
    }
    if(a == 0 && c == 0){
        return 0;
    }
    if(b == c){
        return 1;
    }
    if(abs(b - c) % 3 == 0){
        return 1;
    }
    return 0;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int a, b, c;
        cin >> a >> b >> c; 
        if(check(a, b, c)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}