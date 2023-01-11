#include<iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int countmax = 0;
    int countmin = 0;
    int min = n;
    while(min > 0){
        if(min >= 5){
            min -= 5;
        }
        else{
            min = 0;
        }
        if(min > 0 && min < 2){
            min = 0;
        }
        if(min >= 1 && min <= 2){
            min -= 2;
            countmin += 2;
        }
    }
    int max = n;
    while(max > 0){
        if(max >= 2){
            max -= 2;
            countmax += 2;
        }
        if(max > 0 && max < 5){
            max = 0;
        }
        if(max >= 5){
            max -= 5;
        }
    }
    cout << countmin << " " << countmax;
}