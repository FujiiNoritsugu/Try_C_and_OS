#include <stdio.h>

int main(void){
	int *p;
	int q = 0;
	p = &q;
	printf("value:%d", *p);
	printf("address:%p", p);
}
