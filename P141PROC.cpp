#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int m = 0;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(str == "X++" || str == "++X"){
            m++;
        }
        if(str == "X--" || str == "--X"){
            m--;
        }
    }
    cout << m;
} 