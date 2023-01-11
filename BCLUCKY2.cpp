#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main(){
    int n;
    cin >> n;
    int k = n/7;
    int du = n - k*7;
    int mark = 0;
    while(1){
        if(du % 4 == 0){
            mark = 1;
            du = du/4;
            break;
        }
        else{
            if(k > 0){
                du += 7;
                k--;
                n -= 7;
            }
            else{
                break;
            }
            
        } 
    }
    if(mark == 1){
        for(int i = 1; i <= du; i++){
            cout << "4";
        }
        for(int i = 1; i <= k; i++){
            cout << "7";
        }
    }
    else{
        cout << "-1";
    }
}