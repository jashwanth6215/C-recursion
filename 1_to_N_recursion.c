#include<stdio.h>
void digit(int a)
{
	if(a!=0)
	{
		digit(a%10);
		printf("%i ",a);
	}
}
int main()
{
	int r;
	scanf("%i",&r);
	digit(r);
}
