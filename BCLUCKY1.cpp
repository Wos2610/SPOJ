#include<iostream>
#include<string>
#include<vector>

using namespace std;

#define M 1000000
#define MOD 1000000007

int isLucky(int n){
    if(n == 4 || n == 7){
        return 1;
    }
    return 0;
}


void check(string n, int m){
    int count = 0;
    for(int i = 0; i < m; i++){
        if(n[i] == '4' || n[i] == '7'){
            count++;
        }
    }
    if(isLucky(count)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
int main(){
   string n; 
   cin >> n;
   int m = n.size();
   check(n, m);

}