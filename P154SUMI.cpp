#include<iostream>
#include<math.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    int c;
    int count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            c = sqrt(i * i + j * j);
            if((c >= j) && (c <= n) && (c * c == i * i + j * j)){
                count++;
            }
        }
    }
    cout << count;
} 