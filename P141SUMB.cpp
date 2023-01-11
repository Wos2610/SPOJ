#include<iostream>
#include<string>

using namespace std;

int mark[100000] = {0};

int main(){
    int n;
    cin >> n;
    int max = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        mark[x] = 1;
    }
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(mark[i] == 0){
            dem++; 
        }
    }
    cout << dem;
    
}