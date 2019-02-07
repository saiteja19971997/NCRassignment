#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float Basic, HRA, DA, Gross_Salary;

	printf("\nEnter the Basic Salary:  ");
	scanf("%f", &Basic);

	if (Basic <= 4000)
	{
		HRA = (Basic * 10) / 100; 
		DA = (Basic * 50) / 100; 
	}
	else if (Basic <= 8000)
	{
		HRA = (Basic * 20) / 100;
		DA = (Basic * 60) / 100;
	}
	else if(Basic<=12000)
	{
		HRA = (Basic * 25) / 100;
		DA = (Basic * 70) / 100;
	}
	else {
		HRA = (Basic * 30) / 100;
		DA = (Basic * 80) / 100;
	}
	Gross_Salary = Basic + HRA + DA;
	printf("\n Gross Salary=  %.2f", Gross_Salary);
	getchar();
	getchar();
	return 0;
}