#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("入力値は1\n");
        break;
    case 2:
        printf("入力値は2\n");
        break;
    case 3:
        printf("入力値は3\n");
        break;
    default:
        printf("入力値は1～3以外\n");
        break;
    }
}