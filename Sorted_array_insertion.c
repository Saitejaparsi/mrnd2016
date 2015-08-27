//insert an element in sorted array
#include<stdio.h>
void sa(int a[], int e);
int n;
void main()
{
	int a[20], i, e;
	printf("enter size of array\t");
	scanf("%d", &n);
	if (n >0)
	{
		printf("enter array elements:");
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		printf("enter the element\t");
		scanf("%d", &e);
		sa(a, e);
		printf("modified array\n");
		for (i = 0; i < n; i++)
			printf("%d\t", a[i]);
	}
	else
		printf("invalid size");
}
void sa(int a[], int e)
{
	int i, j, count = 1;
	if (n < 20)
	{
		for (i = 0; i < n; i++)
		{
			if ((a[i] <= e&&a[i + 1] >= e) || a[0] >= e)
			{
				if (count == 1)
				{
					for (j = n - 1; j >= i; j--)
						a[j + 1] = a[j];
					n += 1;
					count = 2;
					if (i == 0)
						a[i] = e;
					else
						a[i + 1] = e;
				}
			}

		}
	}
	else
		printf("no space");
}