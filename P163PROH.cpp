#include<iostream>
#include<math.h>
 
using namespace std;

int check(float x){
   if(x == (int)x){
       return 1;
   }
   return 0;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        float angle;
        cin >> angle;

        float x = 2.0/(1.0 - angle/180.0);

        if(check(x)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
} 