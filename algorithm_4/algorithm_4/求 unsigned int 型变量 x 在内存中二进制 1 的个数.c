#include<stdio.h>

int Number_1(int x)
{
	int count = 0;
	while (x)
	{
		x &= (x - 1);
		count++;
	}
	return count;
}

void main()
{
	unsigned int x;
	scanf("%d", &x);
	Number_1(x);
	printf("x中1的个数为%d", Number_1(x));
}