#include<iostream>
#include<vector>

using namespace std;

vector<int> save;
vector<int> mark(1000, 1);
int main(){
    int n;
    cin >> n;
    for(int i = 4; i <= 777; i++){
        int k = i;
        while(k > 0){
            int cs = k % 10;
            if(cs != 4 && cs != 7){
                mark[i] = 0;
                break;
            }
            k /= 10;
        }
    }

    for(int i = 4; i <= 777; i++){
        if(mark[i] == 1){
            save.emplace_back(i);
        }
    }

    int m = save.size();
    for(int i = 0; i < m; i++){
        if(n < save[i]){
            break;
        }
        if(n % save[i] == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}