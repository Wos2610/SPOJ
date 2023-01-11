#include<iostream>
#include<vector>

using namespace std;

vector<int> save;
int main(){
    int y,k,n;
    cin >> y >> k >> n;
    for(int i = k; i <= n; i += k){
        if(i > y){
            save.emplace_back(i - y);
        }
    }
    if(save.size() == 0){
        cout << "-1";
        return 0;
    }
    for(int i = 0; i < save.size(); i++){
        cout << save[i] << " ";
    }
    return 0;
} 