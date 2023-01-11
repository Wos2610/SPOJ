#include<iostream>
#include<algorithm>
using namespace std;
 
int a[200006] = {0};
int b[200006] = {0};

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);

    int count = 0;
    int begin = 0;
    for(int i = 0; i < n; i++){
        for(int j = begin; j < n; j++){
            if(b[j] > a[i] ){
                count++;
                begin = j + 1;
                break;
            }
        }
    }
    cout << count;
}  