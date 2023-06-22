#include "try_header.h"
#include <stdio.h>
#include <math.h>

int main(void)
{
    Point p1 = {2, 1};
    Point p2 = {3, 4};
    double distance = calc_distance(&p1, &p2);
    printf("distance = %f\n", distance);
    return 0;
}

double calc_distance(Point *p1, Point *p2)
{
    int xdiff = p1->x - p2->x;
    int ydiff = p1->y - p2->y;
    return sqrt(xdiff * xdiff + ydiff * ydiff);
}
