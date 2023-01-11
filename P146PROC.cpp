#include<iostream>
#include<string>

using namespace std;

int save[10] = {0};
int isAppear(int save[], int index, int x){
    for(int i = 0; i < index; i++){
        if(x == save[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int d = 0;
    int index = 0;
    for(int i = 0; i < 4; i++){
        int x;
        cin >> x;
        // cout << x << " ";
        if(isAppear(save, index, x) == 0){
            save[index] = x;
            index++;
        }
    }
    cout << 4 - index;
} 