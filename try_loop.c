#include <stdio.h>

int main(void)
{
    int i;
    char input;
    for (i = 0; i < 10; i++)
    {
        printf("%d回目\n", i);
        scanf("%s", &input);
        if (input == 'q')
        {
            printf("qが入力されました\n");
            break;
        }
    }
}