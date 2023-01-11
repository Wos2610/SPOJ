#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a[4] = {0};

    for(int i = 1; i <= 4; i++){
        cin >> a[i];
    }
    sort(a + 1, a + 1 + 4);

    int res = a[1] * a[3];
    cout << res;
}