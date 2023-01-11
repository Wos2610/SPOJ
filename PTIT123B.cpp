#include<iostream>
#include<vector>

using namespace std;

long long a[10000006];

int check(int n, int dem, long long b[]){
    int count = 1;
    b[n] = abs(a[n] - a[1]);
    for(int i = 1; i < n; i++){
        b[i] = abs(a[i] - a[i + 1]);
    }
    // for(int i = 1; i <= n; i++){
    //     cout << b[i] << " ";
    // }
    for(int i = 1; i < n; i++){
        if(b[i] == b[i + 1]){
            count++;
        }
    }
    if(count == n){
        // cout << dem << " iterations\n";
        return 1;
    }
    return 0;
}
int main(){
    int stt = 0;
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            return 0;
        }
        stt++;
        long long b[100006] = {0};
        cout << "Case " << stt << ": ";
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        
        int d = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i + 1]){
                d++;
            }
        }

        int dem;
        if(d == n){
            dem = 0;
        }
        else{
            dem = 1;
        }

        while(check(n, dem, b) == 0 && dem <= 1000){
            for(int i = 1; i <= n; i++){
                a[i] = b[i];
            }
            dem++;
        }
        
        if(check(n, dem, b) == 1){
            cout << dem << " iterations\n";
        }
        if(dem > 1000){
            cout << "not attained\n";
        }
    }
}