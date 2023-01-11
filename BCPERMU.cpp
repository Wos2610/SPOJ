#include<iostream>
#include<vector>

using namespace std;

vector<int> a;
vector<int> mark(100, 0);

void Try(int k, int n){
    for(int i = 1; i <= n; i++){
        if(mark[i] == 0){
            a[k] = i;
            mark[i] = 1;
            if(k == n){
                for(int j = 1; j <= n; j++){
                    cout << a[j];
                }
                cout << "\n";
            }
            else{
                Try(k + 1, n);
            }
            mark[i] = 0;
        }
    }
}
int main(){
    int n;
    cin >> n;
    a.resize(n);
    int k = 1;
    Try(k,n);
    return 0;
}