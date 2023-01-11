#include<iostream>
#include<string>

using namespace std;

char a[1006][1006];

int check1(int n, int m, int in, int jn){
    for(int i = in; i <= in + 3; i++){
        for(int j = jn; j <= jn + 3; j++){
            if(a[i][j] != '.'){
                return 0;
            }
        }
    }
    return 1;
}

int check2(int n, int m, int in, int jn){
    for(int i = in; i <= in + 3; i++){
        if(i == in){
           for(int j = jn; j <= jn + 3; j++){
                if(a[i][j] != '*'){
                    return 0;
                }
            } 
        }
        else{
            for(int j = jn; j <= jn + 3; j++){
                if(a[i][j] != '.'){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int check3(int n, int m, int in, int jn){
    for(int i = in; i <= in + 3; i++){
        if(i == in || i == in + 1){
           for(int j = jn; j <= jn + 3; j++){
                if(a[i][j] != '*'){
                    return 0;
                }
            } 
        }
        else{
            for(int j = jn; j <= jn + 3; j++){
                if(a[i][j] != '.'){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int check4(int n, int m, int in, int jn){
    for(int i = in; i <= in + 3; i++){
        if(i == in + 3){
           for(int j = jn; j <= jn + 3; j++){
                if(a[i][j] != '.'){
                    return 0;
                }
            } 
        }
        else{
            for(int j = jn; j <= jn + 3; j++){
                if(a[i][j] != '*'){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int check5(int n, int m, int in, int jn){
    for(int i = in; i <= in + 3; i++){
        for(int j = jn; j <= jn + 3; j++){
            if(a[i][j] != '*'){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int c[10] = {0};
        int m,n;
        cin >> m >> n;
        for(int i = 0; i < 5*m + 1; i++){
            for(int j = 0; j < 5*n + 1; j++){
                cin >> a[i][j];
            }
        }
        
        for(int i = 0; i < 5*m + 1; i++){
            for(int j = 0; j < 5*n + 1; j++){
                if(a[i][j] == '.'){
                    if(check1(n, m, i, j)){
                        c[1]++;
                    }
                }
                else if(a[i][j] == '*'){
                    if(check2(n, m, i, j)){
                        c[2]++;
                    }
                    if(check3(n, m, i, j)){
                        c[3]++;
                    }
                    if(check4(n, m, i, j)){
                        c[4]++;
                    }
                    if(check5(n, m, i, j)){
                        c[5]++;
                    }
                }

            }
        }

        for(int i = 1; i <= 5; i++){
            cout << c[i] << " ";
        }
        cout << "\n";
    }
}