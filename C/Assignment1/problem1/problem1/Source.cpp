#include<stdio.h>
#include"Header.h"
extern int a = 2;
extern int b = 3;
int main() {
	register int x = 5;
	register int y = 8;
	int sum = add(a, b);
	printf("%d sum", sum);
	int dif = sub(y, x);
	printf("%d sub", dif);
    getchar();
	return 0;
}
