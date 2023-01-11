#include<iostream>
#include<algorithm>

using namespace std;

char a[106] ;
char b[106] ;
char c[106] ;
void check(int n){
    for(int i = 0; i < n; i++){
        if(a[i] == 'B' && b[i] == 'B'){
            c[i] = 'G';
        }
        else if(a[i] == 'K' && b[i] == 'K'){
            c[i] = 'B';
        }
        else if(a[i] == 'G' && b[i] == 'G'){
            c[i] = 'K';
        }
        else if((a[i] == 'B' && b[i] == 'K') || (a[i] == 'K' && b[i] == 'B')){
            c[i] = 'B';
        }
        else if((a[i] == 'B' && b[i] == 'G') || (a[i] == 'G' && b[i] == 'B')){
            c[i] = 'G';
        }
        else if((a[i] == 'G' && b[i] == 'K') || (a[i] == 'K' && b[i] == 'G')){
            c[i] = 'K';
        }
    }
}
int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    check(n);
    for(int i = 0; i < n; i++){
        cout << c[i];
    }
    return 0;
}