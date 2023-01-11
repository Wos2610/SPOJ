#include<iostream>
#include<string>

using namespace std;

void Min(string n){
    int m = n.size();
    for(int i = 0; i < m; i++){
        int x = n[i] - '0';
        if(9 - x < x){
            n[i] = '0' + 9 - x;
        }
    }
    if(n[0] == '0'){
        n[0] = '9';
    }
    cout << n << "\n";
}

int main() {
	int T;
    cin >> T;
    cin.ignore();
    while(T--){
        string n;
        cin >> n;
        Min(n);
    }
}