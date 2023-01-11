#include<iostream>
#include<vector>

using namespace std;

void tongLienTiep(int n){
    int count = 0;
    int begin = 1;
    while(1){
        if(begin > n){
            break;
        }
        long long sum = 0;
        for(int i = begin; i < n; i++){
            sum += i;
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
    int stt = 0;
    while(T--){
        int n;
        scanf("%d%d", &stt, &n);
        cout << stt << " ";
        tongLienTiep(n);
    }
}