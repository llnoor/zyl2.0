// Полное решение  
#include <iostream>
#include <math.h>

float s_abc(int x1, int x2, int x3, int y1, int y2, int y3) {
    return 0.5*fabs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
}

float d_ab(int x1, int x2, int y1, int y2) {
    return sqrt((x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1));
}

void fun() {
    int d= 0;
    int x = 0;
    int y = 0;
    int ans = 0;
    std::cin >> d >> x >> y;
    if (s_abc(0,d,0,0,0,d) >= s_abc(0,0,x,0,d,y) + s_abc(0,d,x,0,0,y) + s_abc(d,0,x,0,d,y)){
        ans = 0;
    } else {
        float A = fabs(d_ab(0,x,0,y));
        float B = fabs(d_ab(d,x,0,y));
        float C = fabs(d_ab(0,x,d,y));
        // std::cout << " A:" << A << " B:" << B << " C:" << C << std::endl;
        if (A<=B && A<=C) {
            ans = 1; 
        } else if (B<=C) {
            ans = 2; 
        } else {
            ans = 3; 
        }
    }
    std::cout << ans << std::endl;
}

int main() {
    fun();
    return 0;
}