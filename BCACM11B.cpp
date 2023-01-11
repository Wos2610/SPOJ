#include<iostream>

using namespace std;

int a[1000][1000];
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, x, y;
        cin >> n >> x >> y;
        int rbegin = 1;
        int rend = n;
        int cbegin = 1;
        int cend = n;
        int k = 1;
        while(cbegin <= (n + 1) /2 && rbegin <= (n + 1) / 2){
            for(int i = cbegin; i <= cend; i++){
                a[rbegin][i] = k;
                k++;
            }
            for(int j = rbegin + 1; j <= rend; j++){
                a[j][cend] = k;
                k++;
            }
            for(int i = cend - 1; i >= cbegin; i--){
                a[rend][i] = k;
                k++;
            }
            for(int j = rend - 1; j >= rbegin + 1; j--){
                a[j][cbegin] = k;
                k++;
            }
            rbegin++;
            rend--;
            cbegin++;
            cend--;
        }
        cout << a[x][y] << "\n";
    }
}