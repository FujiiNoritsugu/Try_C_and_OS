#include <stdio.h>

int sum(int a, int b);
int main(void)
{
    int a, b, c;
    a = 1;
    b = 2;
    c = sum(a, b);
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
