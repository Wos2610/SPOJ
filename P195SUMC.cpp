#include<iostream>
#include<math.h>

using namespace std;

int a[1000006] = {0};
int c[1000006] = {0};


void check(int n){
    int mark = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        c[a[i]]++;
        if(a[i] == 50){
            if(c[25] < 1){
                mark = 1;
                break;
            }
            else{
                c[25]--;
            }
        }
        if(a[i] == 100){
            if(c[50] < 1 && c[25] < 1){
                mark = 1;
                break;
            }
            else if(c[25] < 3){
                mark = 1;
                break;
            }
            else{
                if(c[50] > 0){
                    c[50]--;
                    c[25]--;
                }
                else{
                    c[25] -= 3;
                }
            }
        }
    }
    if(mark == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
int main(){
    int n;
    cin >> n;
    check(n);
    return 0;
}