#include<iostream>
#include<string>
#include<stdbool.h>
#include<algorithm>
using namespace std;

struct Present{
    long long p;
    long long s;
    long long sum;
};

Present a[1006];

bool compare(Present a1, Present a2){
    if(a1.sum != a2.sum){
        return a1.sum < a2.sum;
    }
    return a1.p < a2.p;
}

long long temp[1006] = {0};

int main(){
    long long n, b;
    cin >> n >> b;
    for(int i = 0; i < n; i++){
        cin >> a[i].p >> a[i].s;
        a[i].sum = a[i].p + a[i].s;
    }

    sort(a, a + n, compare);

    temp[0] = a[0].sum;
    if(temp[0] > b){
        temp[0] = a[0].p / 2 + a[0].s;
        if(temp[0] <= b){
            cout << "1";
            return 0;
        }
        else{
            cout << "0";
            return 0;
        }
    }
    for(int i = 1; i < n; i++){
        temp[i] += temp[i - 1] + a[i].sum;
        if(temp[i] > b){
            int res = temp[i - 1] + a[i].p / 2 + a[i].s;
            if(res <= b){
                cout << i + 1;
                break;
            }
            else{
                cout << i - 1 + 1;
                break;
            }
        }
    }
    return 0;
} 