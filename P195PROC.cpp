#include<iostream>
#include<algorithm>

using namespace std;

int a[100006] = {0};
int s[100006] = {0};

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);

    long long sum = 0;
    int mark = 0;
    for(int i = 1; i <= n; i++){
        s[i] = s[i - 1] + a[i];
        if(s[i] > 300){
            mark = 1;
            cout << i - 1 << " " << sum;
            break;
        }
        else if(s[i] == 300){
            mark = 1;
            cout << i << " " << sum + s[i];
            break;
        }
        else{
            sum += s[i];
        } 
    }
    if(mark == 0){
        cout << n << " " << sum;
    }
    return 0;
}