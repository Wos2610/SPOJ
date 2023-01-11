#include<iostream>
#include<string>

using namespace std;

int main(){
    int T;
    cin >> T;  
    while(T--){
        int x1, y1, u1, v1;
        cin >> x1 >> y1 >> u1 >> v1;
        int x2, y2, u2, v2;
        cin >> x2 >> y2 >> u2 >> v2;
        if(x1 == u1 || x2 == u2 || y1 == y2 || v1 == v2){
            cout << "0\n";
        }
        else if(u1 < x2 || u2 < x1){
            cout << "0\n";
        }
        else if(y1 > v2 || y2 > v1){
            cout << "0\n";
        }
        else{
            cout << "1\n";
        }

    }
}