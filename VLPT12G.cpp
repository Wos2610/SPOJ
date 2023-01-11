#include<iostream>
using namespace std;

int s[1000006] = {0};

int isPerfectNum(int n){
    int can = sqrt(n);
    if(can * can == n){
        return 1;
    }
    return 0;
}

int isSquare(int x){
    if(isPerfectNum(x)){
        return 1;
    }
    return 0;
}

int isTriangle(int x){
    for(int i = 1; ; i++){
        s[i] = s[i - 1] + i;
        index = i;
        if(s[i] > b){
            break;
        }
    }

    for(int i = 0; ; i++){
        if(s[i] == x){
            return 1;
        }
    }
    return 0;
}

void check(){
    for(int i = 1; i <= 1000000006; i++){
        if(isSquare(i + 1) && isTriangle(i)){
            save.emplace_back(i);
        }
    }
}


int main(){
    check();
    while(1){
        int a,b;
        cin >> a >> b;
        if(a == 0 && b == 0){
            return 0;
        }
        

        check();
        
    }
} 