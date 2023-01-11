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
            for(int j = i * i; j <= M; j += i){
                mark[j] = 0;
            }
        }
    }
}

int tongCS(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
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
        if(mark[n] == 1){
            printf("NO\n");
        }
        else{
            int sum = 0;
            int sumN = tongCS(n);
            for(int i = 0; i < save.size(); i++){
                if(n % save[i] == 0){
                    int k = tongCS(save[i]);
                    while(n % save[i] == 0){
                        sum += k;
                        n /= save[i];
                    }
                }
                if(n == 1){
                    break;
                }
            }
            if(sumN == sum){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
}