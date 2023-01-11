#include<iostream>
#include<math.h>

using namespace std;

int change[10] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};

// 0 : 0 8
// 1 : 0 1 2 3 4 7 8 9
// 2 : 2 8
// 3 : 3 8 9
// 4 : 4 8 9
// 5 : 5 6 8 9
// 6 : 6 8
// 7 : 0 3 7 8 9
// 8 : 8
// 9 : 8 9

int main(){
    int n;
    cin >> n;
    int cs1 = n % 10;
    n /= 10;
    int cs2 = n % 10;
    int x1 = 0;
    int x2 = 0;
    for(int i = 0; i < 10; i++){
        if(cs1 == i){
            x1 = change[i];
        }
        if(cs2 == i){
            x2 = change[i];
        }
    }
    cout << x1 * x2;
} 