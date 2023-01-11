#include<iostream>
#include<math.h>

using namespace std;

char a[106][106];

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    long long sum = 0;
    for(int i = 1; i <= n; i++){
        int count = 0;
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 'C'){
                count++;
            }
        }
        sum += (count*(count - 1)/2);
    }
    for(int j = 1; j <= n; j++){
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(a[i][j] == 'C'){
                count++;
            }
        }
        sum += (count*(count - 1)/2);
    }
    cout << sum;
}