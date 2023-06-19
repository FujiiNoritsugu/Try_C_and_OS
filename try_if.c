#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a < 10)
    {
        printf("10歳未満\n");
    }
    else if (a >= 10 && a < 20)
    {
        printf("10歳以上20歳未満\n");
    }
    else
    {
        printf("20歳以上\n");
    }
}