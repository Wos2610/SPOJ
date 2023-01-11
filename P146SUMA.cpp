#include<iostream>
#include<vector>

using namespace std;

int a[100000] = {0};
vector<int> mark(1000000, 0);

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int begin = -1;
    int max = 0;
    mark[-1] = 0;
    if(a[0] =)
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            if(a[i + 1] = 1){
                mark[i] = mark[i - 1] + 1;
            }
            else{
                mark[i] = 1;
            }
            begin = i;
        }
        else{
            if(begin != -1){
                mark[i] = mark[i - 1] + 1;
                if(max < mark[i]){
                    max = mark[i];
                }
            }
        }  
    }
    cout << max + 1;
}