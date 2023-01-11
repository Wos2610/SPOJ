#include<iostream>
#include<algorithm>
#include<stdbool.h>

using namespace std;

struct Number{
    long long num;
    long long count = 0;
};

Number a[1000006];

int isAppear(int y, int index){
    for(int i = 0; i < index; i++){
        if(y == a[i].num){
            return i;
        }
    }
    return -1;
}

bool compare(Number a1, Number a2){
    if(a1.count != a2.count){
        return a1.count < a2.count;
    }
    return a1.num >  a2.num;
}

int main(){
   long long n, x; 
   cin >> n >> x;
   int index = 0;
   for(int i = 0; i < n; i++){
       int y;
       cin >> y;
       if(isAppear(y, index) == -1){
           a[index].num = y;
           a[index].count = 1;
           index++;
       }
       else{
           a[isAppear(y, index)].count++;
       }
   }

    sort(a, a + index, compare);

    long long res = n * x - a[0].count * a[0].num;

    cout << res;

}