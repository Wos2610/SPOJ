#include<iostream>
#include<math.h>

using namespace std;

float tinhS(float x1, float y1, float x2, float y2, float x3, float y3){
    float x12 = x2 - x1;
    float y12 = y2 - y1;
    float x13 = x3 - x1;
    float y13 = y3 - y1;
    float S = 0.5*fabs(x12 * y13 - x13 * y12);
    return S;
}

int main(){
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float S = tinhS(x1, y1, x2, y2, x3, y3);

    int n;
    cin >> n;
    int count = 0;
    float x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        float s1 = tinhS(x1, y1, x2, y2, x, y);
        float s2 = tinhS(x1, y1, x3, y3, x, y);
        float s3 = tinhS(x2, y2, x3, y3, x, y);
        if(s1 + s2 + s3 == S){
            count++;
        }
    }
    printf("%0.1f\n", S);
    printf("%d", count);
} 