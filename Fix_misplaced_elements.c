//miss placed elements in an sorted array
#include<stdio.h>
void miss(int a[], int n);
void main()
{
	int a[20], n, i;
	printf("enter n value\n");
	scanf("%d", &n);
	printf("enter array elements\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	miss(a, n);
	printf("correted array\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
}
void miss(int a[], int n)
{
	int b, c, i = 0, j = 0, count1 = 0, count2 = 0;
	if (a[0] > a[1])
	{
		b = 0;
		count1 = 1;
	}
	if (a[n - 1] < a[n - 2])
	{
		c = n - 1;
		count2 = 1;
	}
	if (count1 == 0)
	{
		for (i = 1; i < n - 1; i++)
			if (a[i] > a[i + 1]) //|| a[i]>a[i + 1])
			{
				b = i;
				count1 = 1;
				break;
			}
	}
	if (count2 == 0)
	{
		for (j = i + 1; j < n - 1; j++)
			if (a[j]>a[j + 1])
			{
				c = j + 1;
				count2 = 1;
				break;
			}
	}
	if (count2 == 0)
		c = b + 1;
	int temp = 0;
	temp = a[b];
	a[b] = a[c];
	a[c] = temp;

}