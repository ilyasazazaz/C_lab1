#define _CRT_SECURE_NO_WARNINGS		//для корректной работы scanf в visual studio
#include<stdio.h>

int main()
{
	float a;
	char b;
	printf("Your float is: ");
	scanf("%f", &a);
	printf("Your char is: ");
	scanf("\n%c", &b);

	printf("\nYour answers is: \n%f\n%c\n", a,b);
	return 0;
}
