#include<iostream>
#include<string>

using namespace std;

char x[1006][1006];

void black(int a, int b, int c){
    int e = b*c;
    for(int i = 1; i <= a; i++){
        int begin = 1;
        int end = b; 
        while(1){
            for(int j = begin; j <= end; j++){
                x[i][j] = 'X';
                // cout << x[i][j];
            }
            begin += b;
            end += b;

            if(end > e){
                break;
            }

            for(int j = begin; j <= end; j++){
                x[i][j] = '.';
            }
            begin += b;
            end += b;

            if(end > e){
                break;
            }
        }
    }

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= e; j++){
            cout << x[i][j];
        }
        cout << "\n";
    }
}

void white(int a, int b, int c){
    int e = b*c;
    for(int i = 1; i <= a; i++){
        int begin = 1;
        int end = b; 
        while(1){
            for(int j = begin; j <= end; j++){
                x[i][j] = '.';
                // cout << x[i][j];
            }
            begin += b;
            end += b;

            if(end > e){
                break;
            }

            for(int j = begin; j <= end; j++){
                x[i][j] = 'X';
            }
            begin += b;
            end += b;

            if(end > e){
                break;
            }
        }
    }

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= e; j++){
            cout << x[i][j];
        }
        cout << "\n";
    }
}

int main(){
    int r, c;
    cin >> r >> c;
    int a, b;
    cin >> a >> b;
    
    for(int i = 1; i <= r; i++){
        if(i % 2 != 0){
            black(a, b, c);
        }
        else{
            white(a, b, c);
        }
        
    }
} 