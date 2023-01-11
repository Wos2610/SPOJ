#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int a[106] = {0};

int main() {
	int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    for(int i = 1; i <= m; i++){
        int x,y;
        cin >> x >> y;
        if(x == 1){
            a[x + 1] += (a[x] - y);
        }
        else if(x == m){
            a[x - 1] += (y - 1);
        }
        else{
            a[x - 1] += (y - 1);
            a[x + 1] += (a[x] - y);
        }
        a[x] = 0;
    }
    int count = 0;
    for(int i = 1; i <= n; i++){
        cout << a[i] << "\n";
    }
}