#include<iostream>
#include<string>
using namespace std;

struct Point{
    int x;
    int y;
};

Point p[4];

int check(Point p1, Point p2, Point p3){
    Point p12;
    Point p13;
    p12.x = p2.x - p1.x;
    p12.y = p2.y - p1.y;
    p13.x = p3.x - p1.x;
    p13.y = p3.y - p1.y;
    int voHuong = p12.x * p13.x + p12.y * p13.y;

    if(voHuong == 0){
        return 1;
    }
    return 0;

}

void ch(){
    if(check(p[0], p[1], p[2])){
        p[4].x = p[1].x + p[2].x - p[0].x;
        p[4].y = p[1].y + p[2].y - p[0].y;
    }
    else if(check(p[1], p[2], p[0])){
        p[4].x = p[0].x + p[2].x - p[1].x;
        p[4].y = p[0].y + p[2].y - p[1].y;
    }
    else if(check(p[2], p[0], p[1])){
        p[4].x = p[1].x + p[0].x - p[2].x;
        p[4].y = p[1].y + p[0].y - p[2].y;
    }
    cout << p[4].x << " " << p[4].y;
}
int main(){
    for(int i = 0; i < 3; i++){
        cin >> p[i].x >> p[i].y;
    }
    ch();
} 