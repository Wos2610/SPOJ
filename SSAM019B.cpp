#include<iostream>
#include<stdbool.h>
#include<algorithm>

using namespace std;

struct Number{
    int num;
    int index;
};

bool compare(Number a1, Number a2){
    if(a1.num != a2.num){
        return a1.num < a2.num;
    }
    return a1.index < a2.index;
}

Number a[100006];

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i].num;
            a[i].index = i;
        }

        int in = 100006;
        int min = 100006 ;

        sort(a, a + n, compare);

        // for(int i = 0; i < n; i++){
        //     cout << a[i].num << " ";
        // }
        
        // cout << "\n";

        // for(int i = 0; i < n; i++){
        //     cout << a[i].index << " ";
        // }
        

        for(int i = 0; i < n - 1; i++){
            if(a[i].num == a[i + 1].num && a[i].index < min){
                min = a[i].index;
                in = i;
            }
        }
        if(in == 100006){
            cout << "NO\n";
        }
        else{
            cout << a[in].num << "\n";
        }
    }
} 