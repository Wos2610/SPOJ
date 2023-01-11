#include<iostream>
#include<algorithm>
 
using namespace std;
 
int save[100006];
 
int isAppear(int save[], int index, int x){
    for(int i = 0; i < index; i++){
        if(x == save[i]){
            return i;
        }
    }
    return -1;
}
 
int main(){
    int n;
    cin >> n;
    int x;
    int index = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(isAppear(save, index,x) == -1){
            save[index] = x;
            index++;
        }
    }
    if(index > 3){
        cout << "NO";
    }
    else{
        if(index < 3){
             cout << "YES";
             return 0;
        }
        sort(save, save + index);
        if(save[1] * 2 == (save[0] + save[2])){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    
}   