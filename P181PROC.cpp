#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> save(1000006, -1);

int check(vector<int> save, int index, int x){
    for(int i = 0; i < index; i++){
        if(x == save[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    long long n, k;
    cin >> n >> k;
    
    int index = 0;
    for(int i = 1; i <= k; i++){
        int du = n % i;
        if(check(save, index, du)){
            cout << "No";
            return 0;
        }
        else{
            save[index] = du;
            index++;
        }
    }
    cout << "Yes";
    return 0;
}