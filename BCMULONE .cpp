#include<iostream>
#include<string>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string s1 = "123456790";
        string s2 = "098765432";

        int n1 = (n - 1) /9;
        int n2 = n - 9 * n1;
        for(int i = 1; i <= n1; i++){
            cout << s1;
        }

        for(int i = 1; i < n2; i++){
            cout << i;
        }

        for(int i = n2 ; i >= 2; i--){
            cout << i;
        }

        for(int i = 1; i <= n1; i++){
            cout << s2;
        }
        cout << "1";
        cout << "\n";
    }
} 