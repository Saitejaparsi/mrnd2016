#include<stdio.h>s
int findn(int a[]);
void main()
{
	int a[1000], i=0,n;
	printf("enter 2n+2 size of array:");
	scanf("%d", &n);
	printf("enter array elments:");
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	n = findn(a);
	printf("the length of array is \t %d", n);
}
int findn(int a[])
{
	int i = 0, n=1,n1,n2,flag=0;
	while (1)
	{
		if (a[n] < a[n + 1])
		{
			if (a[n + 2]>a[n + 1])
				n *= 2;
			else
				return n+1;
		}
		else if (a[n]>a[n + 1] && a[n + 1] != 0)
			return n;
		else if (a[n] > a[n + 1] && a[n + 1] == 0)
			return n - 1;

		else if (a[n] == 0)
		{
			if (flag == 0)
			{
				flag = 1;
				n1 = n/2;
				n2 = n/2;
				n2 = n2 / 2;
				n = n1 + n2;
			}
			else
			{
				n2 = n2 / 2;
				n = n1 + n2;
			}
		}
	}
}