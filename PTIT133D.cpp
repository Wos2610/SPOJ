#include<iostream>
#include<string>

using namespace std;

int a[16] = {0};

void luyThua(){
    a[0] = 1;
    for(int i = 1; i <= 14 ; i++){
        a[i] = a[i - 1] * 4;
    }
}

int main(){
    luyThua();
    while(1){
        string s = "";
        cin >> s;
        if(s == "[END]"){
            return 0;
        }
        int n;
        cin >> n;
        int count = 0;

        for(int i = 14; i >= 0; i--){
            if(n >= a[i]){
                while(n >= a[i]){
                    n -= a[i];
                    count++;
                }
            }
            if(n == 0){
                break;
            }
        }
        if(count % 2 == 1){
            cout << "Taro\n";
        }
        else{
            cout << "Hanako\n";
        }
   }
    
    return 0;
}