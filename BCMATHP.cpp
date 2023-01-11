#include<iostream>
#include<math.h>

using namespace std;

int check(int i){
        if(i == 46 || i == 56){
            return 7;
        }
        else if(i == 53){
            return 9;
        }
        else if((i % 10) == 1 || (i % 10) == 8){
            return 2;
        }
        else if((i % 10) == 0 || (i % 10) == 4 || (i % 10) == 7){
            return 1;
        }
        else if((i % 10) == 2){
            return 4;
        }
        else if((i % 10) == 3){
            return 8;
        }
        else if((i % 10) == 5){
            return 3;
        }
        else if((i % 10) == 9){
            return 5;
        }
        else if((i % 10) == 6){
            return 6;
        }
    return 0;
}

int main(){
    int a,b;
    cin >> a >> b ;
    long long temp = 0;
    int mark = 0;
    for(int i = a + 1; i <= 62; i++){
        if(check(i) == b){
            cout << i;
            mark = 1;
            return 0;
        }
    }
    if(mark == 0){
        cout << "0";
    }
}