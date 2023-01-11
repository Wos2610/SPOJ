#include<iostream>
#include<math.h>

using namespace std;

#define M 1000006

long long check(long long n){
    long long can = sqrt(n);
    long long sum = 1;
    if(n != 1){
        sum += n;
    }
    for(int i = 2; i < can; i++){
        if(n % i == 0){
            sum += i + n/i;
        }
    }
    if(can * can == n){
        sum += can;
    }
    return sum;
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        long long n;
        scanf("%lld", &n);
        long long temp = check(check(n));
        // cout << check(n);
        if(temp == 2 * n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}