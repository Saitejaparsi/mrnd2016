#include<stdio.h>
int max(int a[], int n, int c[]);
void main()
{
	int a[20], c[2] = { 0 }, n, *p, i;
	printf("enter size of array\n");
	scanf("%d", &n);
	printf("enter array elements\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	p = max(a, n, c);
	printf("max1 =%d and max2=%d", *p, *(p + 1));
}
int max(int a[], int n, int c[])
{
	int max1 = a[0], max2, *p, i;
	for (i = 1; i < n; i++)
		if (max1 != a[i])
		{
			max2 = a[i];
			break;
		}
	for (i = 1; i < n; i++)
	{
		if (a[i] >max1)
			max1 = a[i];
		if (a[i] > max2&&a[i] != max1)
			max2 = a[i];
	}
	if (max2 <a[0] && a[0] != max1)
		max2 = a[0];
	c[0] = max1;
	c[1] = max2;
	p = c;
	return p;
}