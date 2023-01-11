#include<iostream>
#include<math.h>
 
using namespace std;

void uoc(int x, int n){
    int count = 0;
    for(int i = 1; i * i <= x; i++){
        if(x % i == 0){
            if(i <= n && (x/i <= n)){
                if(i != x/i){
                     count +=2;
                }
                else{
                    count++;
                }
            }
        }
    }
    cout << count;
}
int main(){
    int n, x;
    cin >> n >> x;
    uoc(x, n);
} 