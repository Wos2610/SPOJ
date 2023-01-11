#include<iostream>
 
using namespace std;
 
long long d[1000006] = {0};
 
 
void dem(int n){
    int d = n/5;
    int du = n - d*5;
    while(1){
        if(du % 3 == 0){
            d += du/3;
            break;
        }
        else{
            du += 5;
            d--;
            if(d < 0){
                cout << "-1";
                return;
            }
        }
    }
    cout << d;
}
int main(){
    int n;
    cin >> n;
    dem(n);
    return 0;
}
 