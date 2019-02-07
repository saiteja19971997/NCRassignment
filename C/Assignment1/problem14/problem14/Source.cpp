#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char* decToBinary(int n)
{
	char binaryNum[1000];
	int i = 0;
	while (n > 0) {
		binaryNum[i] = n % 2+48;
		n = n / 2;
		i++;
	}
	binaryNum[i] = '\0';
	for (int j = i - 1; j >= 0; j--) {
		printf("%c", binaryNum[j]);
	}
	getchar();
	return binaryNum;
}
/*void decToHexa(int n)
{
	char hexaDeciNum[100];
	int i = 0;
	while (n != 0)
	{
		int temp = 0;
		temp = n % 16;
		if (temp < 10)
		{
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else
		{
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}
	printf("\n");
	for (int j = i - 1; j >= 0; j--)
		printf("%d", hexaDeciNum[j]);
}*/
int main() {
	printf("Enter a number:");
	int n;
	scanf_s("%d", &n);
	char *str = (char *)malloc(32 * sizeof(char));
	str = decToBinary(n);
	printf("\n%x", n);
	//decToHexa(n);
	getchar();
	return 0;

}