#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main(void){
    Point point = { 6, 19 };
    point.y;
    point.y = 69; 
    printf("x = %d\ny = %d\n", point.x, point.y);
    return 0;
}