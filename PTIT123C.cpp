#include<iostream>
#include<string>
#include<stdbool.h>
#include<algorithm>
using namespace std;

struct Ck{
    int day;
    int num;
};

Ck a[1000006];

bool compare(Ck a1, Ck a2){
    if(a1.num != a2.num){
        return a1.num < a2.num;
    }
    return a1.day < a2.day;
}

bool compare3(Ck a1, Ck a2){
    if(a1.num != a2.num){
        return a1.num > a2.num;
    }
    return a1.day > a2.day;
}

bool compare1(Ck a1, Ck a2){
    return a1.day < a2.day;
}

bool compare2(Ck a1, Ck a2){
    return a1.day > a2.day;
}

int main(){
    int stt = 0;
    while(1){
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        stt++;
        if(n == 0 && k1 == 0 && k2 == 0){
            return 0;
        }
        for(int i = 0; i < n; i++){
            a[i].day = i + 1;
            cin >> a[i].num;
        }

        cout << "Case " << stt << "\n";

        sort(a, a + n, compare);
        sort(a, a + k1, compare1);
        for(int i = 0; i < k1; i++){
            cout << a[i].day << " ";
        }
        cout << "\n";

        sort(a, a + n, compare3);
        sort(a, a + k2, compare2);

        // for(int i = 0; i < n; i++){
        //     cout << a[i].num << " ";
        // }
        // cout << "\n";

        // for(int i = 0; i < n; i++){
        //     cout << a[i].day << " ";
        // }
        for(int i = 0; i < k2 ; i++){
            cout << a[i].day << " ";
        }
        cout << "\n";

    }
} 