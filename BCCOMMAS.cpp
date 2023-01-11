#include<iostream>
#include<string>

using namespace std;

int main(){
    string n;
    cin >> n;
    int m = n.size();
    int begin = 0;

    if(m % 3 == 1){
        begin = 1;
    }
    else if(m % 3 == 2){
        begin = 2;
    }
    else{
        begin = 3;
    }
    
    for(int i = 0; i < m; i++){
        if(i == begin){
            cout << ",";
            begin += 3;
        }
        cout << n[i];
    }
}