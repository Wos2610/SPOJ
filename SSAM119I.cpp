#include<iostream>

using namespace std;

struct Vector{
    int x;
    int y;
    int z;
};

Vector v[10];
Vector vv[10];
Vector vvv1;

int main(){
    int T;
    cin >> T;
    while(T--){
        for(int i = 0; i < 4; i++){
            cin >> v[i].x >> v[i].y >> v[i].z;
        }
        for(int i = 1; i < 4; i++){
            vv[i].x = v[i].x - v[0].x;
            vv[i].y = v[i].y - v[0].y;
            vv[i].z = v[i].z - v[0].z;
            // cout << vv[i].x << " " << vv[i].y << " " << vv[i].z << "\n";
        }
        
        vvv1.x = vv[1].y * vv[2].z - vv[1].z * vv[2].y;
        vvv1.y = vv[1].z * vv[2].x - vv[1].x * vv[2].z;
        vvv1.z = vv[1].x * vv[2].y - vv[1].y * vv[2].x;
        // cout << vvv1.x << " " << vvv1.y << " " << vvv1.z << "\n";
        long long voHuong = vvv1.x * vv[3].x + vvv1.y * vv[3].y + vvv1.z * vv[3].z;
        if(voHuong == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}