#include<stdio.h>
void tuple(int a[], int n, int b);
void main()
{
	int a[20], n, i, b;
	printf("enter n values\n");
	scanf("%d", &n);
	printf("enter array elements\n");
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	printf("enter tuple value");
	scanf("%d", &b);
	tuple(a, n, b);
}
void tuple(int a[], int n, int b)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
			if (b == (a[i] + a[j]))
				printf("%d %d\n", a[i], a[j]);
	}
}