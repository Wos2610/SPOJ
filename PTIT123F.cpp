#include<iostream>
#include<vector>

using namespace std;


int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> mark(106, 1);
        for(int i = 2; i <= n; i++){
            for(int j = i; j <= n; j+=i){
                if(mark[j] == 1){
                    mark[j] = 0;
                }
                else {
                    mark[j] = 1;
                }
            }
        }
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(mark[i] == 1){
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}