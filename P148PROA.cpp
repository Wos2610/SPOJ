#include<iostream>
#include<string>

using namespace std;

int count[45] = {0};
int a[10];

int main(){
    int n;
    while(1){
        cin >> n;
        if(n == 0){
            return 0;
        }
        int count = 1;
        int x = n;
        while(x != 1){
            if(x % 2 == 0){
                x /= 2;
            }
            else{
                x = x * 3 + 1;
            }
            count++;
        }
        cout << count << "\n";
    }
}