#include<iostream>
#include<algorithm>

using namespace std;

int a[100006] = {0};
int b[100006] = {0};
int c[100006] = {0};

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++){
        cin >> b[i];
    }
    sort(a + 1, a + n);
    sort(b + 1, b + n);

    for(int i = 1; i <= n; i++){
        if(a[i] <= b[i]){
            c[i] = c[i - 1] + 1;
        }
        else{
            c[i] = c[i - 1];
        }
    }
    for(int i = 1; i <= m; i++){
        cout << c[i] << "\n";
    }
    
} 