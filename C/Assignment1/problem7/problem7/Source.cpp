#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int j=0,i,max=0,min=999;
	while(1){
		printf("\nenter no.");
		scanf_s("%d",&i);
		if (i <= 0) {
			break;
		}
		else{
			if (i > max) {
				max = i;
			}
			if (i < min) {
				min = i;
			}
		}
		j++;
	}
	printf("no. of values entered--%d\n max value--%d\n min value--%d", j, max, min);
	getchar();
	getchar();
}