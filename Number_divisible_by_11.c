#include<stdio.h>
int divisible(int n);
void main()
{
	int n, a;
	printf("enter n no.\n");
	scanf("%d", &n);
	a = divisible(n);
	if (a == 0)
		printf("it is divisible by 11");
	else
		printf(" not divisible by 11 and remainder is %d", a);
}
int divisible(int n)
{
	int d, i, sum1 = 0, sum2 = 0, m;
	m = n;
	while (n)
	{
		d = n % 10;
		sum1 += d;
		n = n / 100;
	}
	while (m)
	{
		m = m / 10;
		d = m % 10;
		sum2 += d;
		m = m / 10;
	}
	i = sum1 - sum2;
	if (i > 10)
		i = divisible(i);
	if (i == 0)
		return 0;
	else
		return i;
}
