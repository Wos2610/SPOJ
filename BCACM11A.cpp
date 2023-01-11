#include<iostream> 
#include<vector>

using namespace std;

vector<int> t1;
vector<int> t2;
vector<int> t3;


void type(){
    for(int i = 100000; i <= 999999; i++){
        int a = i;
        int dao = 0;
        while(a > 0){
            dao = dao * 10 + a % 10;
            a /= 10;
        }
        if(dao == i){
            t3.emplace_back(i);
        }
    }
    for(int i = 0; i < t3.size(); i++){
        int b = t3[i];
        int sum = 0;
        while(b > 0){
            sum += b % 10;
            b /= 10;
        }
        if(sum % 10 == 0){
            t2.emplace_back(t3[i]);
        }
    }
    for(int i = 0; i < t2.size(); i++){
        int c = t2[i];
        int cs = 0;
        int mark = 0;
        while(c > 0){
            cs = c % 10;
            if(cs == 0){
                mark = 1;
                break;
            }
            c /= 10;
        }
        if(mark == 0){
            t1.emplace_back(t2[i]);
        }
    }
    
}

int main(){
    int T;
    cin >> T;
    type();
    while(T--){
        int n, m, k;
        cin >> n >> m >> k;
        int count1 = t1.size();
        int count2 = t2.size();
        int count3 = t3.size();
        count2 -= n;
        count3 -= (n + m);
        if(n <= count1 && m <= count2 && k <= count3){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}