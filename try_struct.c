#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main(void){
    struct Point point = { 6, 19 };
    point.y;
    point.y = 69; 
    printf("x = %d\ny = %d\n", point.x, point.y);
    return 0;
}