//program for nth fibonocii no.
#include<stdio.h>
int fibonocii(int n);
void main()
{
	int n, c;
	printf("enter the nth fibonocii no.");
	scanf("%d", &n);
	c = fibonocii(n);
	printf("nth fibonocii no.=%d", c);

}
int fibonocii(int n)
{
	int a = 0, b = 1, c, count = 1, i;
	for (i = 0; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		count++;
		if (count == n)
			return c;

	}
}