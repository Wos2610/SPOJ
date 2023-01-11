#include<iostream>
#include<vector>

using namespace std;

int f[1000][1000] = {0};
vector<int> save(1);
vector<int> mark(1000006, 0);
vector<int> dau(100006, 0);

int main(){
    int n,m;
    cin >> n >> m;
    save[0] = 1;
    mark[1] = 1;
    for(int i = 0; i < m; i++){
        cin >> f[i][0] >> f[i][1];
    }
    int index = -1;
    while(dau[index] != 0){
        index++;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < save.size(); j++){
                if( f[i][0] == save[j] ){
                    if(mark[f[i][1]] == 0){
                        save.emplace_back(f[i][1]);
                        mark[f[i][1]] = 1;
                        dau[index] = 1;
                    }
                }
                if(f[i][1] == save[j]){
                    if(mark[f[i][0]] == 0){
                        save.emplace_back(f[i][0]);
                        mark[f[i][0]] = 1;
                        dau[index] = 1;
                    }
                }
            }
        }
    }
    
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(mark[i] == 0){
            cout << i << "\n";
            count++;
        }
    }
    if(count == 0){
        cout << "0";
    }
}