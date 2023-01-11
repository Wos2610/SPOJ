#include<iostream>
#include<vector>

using namespace std;

#define M 1000006
vector<int> mark(1000006,1);
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

void tongLienTiep(int n, vector<int> save){
    int count = 0;
    int begin = 0;
    while(1){
        if(save[begin] > n){
            break;
        }
        long long sum = 0;
        for(int i = begin; i < save.size(); i++){
            sum += save[i];
            // cout << sum << " ";
            if(sum > n){
                break;
            }
            if(sum == n){
                count++;
                break;
            }
        }
        begin++;
    }
    cout << count << "\n";
}

int main(){
    int T;
    scanf("%d", &T);
    sieve();
    for(int i = 2; i <= M; i++){
        if(mark[i] == 1){
            save.emplace_back(i);
        }
    }
    while(T--){
        int n;
        scanf("%d", &n);
        tongLienTiep(n, save);
    }
}