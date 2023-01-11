#include<iostream>
#include<vector>
#define M 106

using namespace std;


long long a[M];
vector<int> save;

int main(){
    int T;
    cin >> T;
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < M; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    while(T--){
        int n;
        cin >> n;
        save.clear();
        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x == 0 || x == 1){
                save.emplace_back(x);
            }
            for(int j = 3; j < M; j++){
                if(x == a[j]){
                   save.emplace_back(x); 
                }
            }
        }
        for(int i = 0; i < save.size(); i++){
            cout << save[i] << " ";
        }
        cout << "\n";
    }
}