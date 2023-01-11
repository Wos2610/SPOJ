#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
int a[1000006] = {0};
vector<int> save;
 
int main(){
	int n;
    cin >> n;
    long long res = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 != 0){
            save.emplace_back(a[i]);
        }
        res += a[i];
    }
    if(save.size() == 0){
        cout << "0";
        return 0;
    }
    
    sort(save.begin(), save.end());
 
    int index = 0;
    if(res % 2 == 0){
        while(res % 2 == 0){
            res -= save[index];
            if(res == 0){
                cout << "0";
                return 0;
            }
            index++;
        }
    }
    cout << res;
	return 0;
} 