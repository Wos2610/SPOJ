#include<iostream>
#include<vector>

using namespace std;

vector<int> mark(1006, 1);

void sieve(int n, int k){
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(mark[i] == 1){
            count++;
            if(count == k) cout << i;
            for(int j = i * i; j <= n; j+=i){
                if(mark[j] == 1){
                    mark[j] = 0;
                    count++;
                    if(count == k) cout << j;
                }
            }
        }
    }
}
int main(){
    int n,k;
    cin >> n >> k;
    sieve(n,k);
}