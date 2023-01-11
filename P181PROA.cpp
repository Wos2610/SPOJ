#include<iostream>

using namespace std;

int check(int countc, int countl){
    if(countl - countc >= 2){
        
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin >> n;
    int countc = 0;
    int countl = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x % 2 == 0){
            countc++;
        }
        else{
            countl++;
        }
    }
    
}