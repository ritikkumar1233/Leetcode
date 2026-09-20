#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
 
bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2){
        int closestX = max(x1, min(xCenter, x2));
        int closestY = max(y1, min(yCenter, y2));
        int distX = xCenter - closestX;
        int distY = yCenter - closestY;
        int distanceSquared = (distX * distX) + (distY * distY);
        return distanceSquared <= (radius * radius);
}

int main(){
    int radius = 1;
    int xCenter = 0;
    int yCenter = 0;
    int x1 = 1;
    int y1 = -1;
    int x2 = 3;
    int y2 = 1;
    bool ans = checkOverlap(radius, xCenter, yCenter, x1, y1, x2, y2);
    cout<<ans;
}