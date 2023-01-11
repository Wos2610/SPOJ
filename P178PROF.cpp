#include<iostream>

using namespace std;


int main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            return 0;
        }
        int count = 1;
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;
            }
            else{
                n = 3*n + 1;
            }
            count++;
        }
        cout << count << "\n";
    }
}