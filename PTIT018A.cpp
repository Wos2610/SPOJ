#include<iostream>
#include<vector>
using namespace std;

#define M 1000006

vector<int> mark(M + 1, 1);
vector<int> save;

void sieve(){
    mark[0] = mark[1] = 0;
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 1){
            for(int j = i * i; j <= M; j+=i){
                mark[j] = 0;
            }
        }
    }
}

void special(){
    for(int i = 0; i < save.size(); i++){
        if(mark[save[i] + 6] == 1){
            mark[save[i]] = 2;
        }
    }
}

int main(){
    sieve();
    for(int i = 2; i <= M; i++){
        if(mark[i] == 1){
            save.emplace_back(i);
        }
    }
    special();
    int T;
    cin >> T;
    while(T--){
        int l, r;
        cin >> l >> r;
        int count = 0;
        for(int i = l; i <= r - 6; i++){
            if(mark[i] == 2){
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}