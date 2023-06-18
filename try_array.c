#include <stdio.h>

int main(void){
    int a[] = { 10, 11, 12, 13, 14, 15 }; // 要素を初期化で設定する場合、要素数を省略できる
    int count = sizeof(a)/ sizeof(a[0]);
    int index;
    for (index = 0; index < count; index++){
    printf("a = %d\n", a[index]);
    }    
    return 0;
}