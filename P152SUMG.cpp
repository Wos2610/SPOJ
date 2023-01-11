#include<iostream>
#include<vector>

#define M 1000

using namespace std;

vector<int> mark(1000, 1);

void sieve(){
    mark[0] = mark[1] = 0;
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 1){
            for(int j = i * i; j <= M; j += i){
                mark[j] = 0;
            }
        }
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    sieve();
    if(mark[y] == 1){
        int count = 0;
        for(int i = x + 1; i < y; i++){
            if(mark[i] == 1){
                count++;
            }
        }
        if(count == 0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    } 
} 