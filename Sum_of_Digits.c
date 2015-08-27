//sum of digits of given no.
#include<stdio.h>
int sod(int n);
void main()
{
	int n, s;
	printf("enter the number:");
	scanf("%d", &n);
	s = sod(n);
	printf("sum of digits=%d", s);
}
int sod(int n)
{
	int sum = 0, i, d;
	i = n;
	if (i < 0)
		i = -i;
	for (i; i>0; i = i / 10)
	{
		d = i % 10;
		sum += d;
	}
	if (n > 0)
		return sum;
	else
		return -sum;
}