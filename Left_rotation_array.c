//rotate n times the given array to left
#include<stdio.h>
void rla(int a[], int n, int r);
void main()
{
	int a[20], n, i, r;
	printf("enter lenght  of array");
	scanf("%d", &n);
	printf("enter array elements:");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter no of time the rotation has to performed\t");
	scanf("%d", &r);
	rla(a, n, r);
	printf("the elements after r rotations\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	getch();
}
void rla(int a[], int n, int r)
{
	int e, i, count = 0;
	if (r >= 0)
	{
		for (i = 0; i < r; i++)
		{
			if (count <= r)
			{
				e = a[n - 1];
				for (int j = n - 1; j >= 0; j--)
					a[j + 1] = a[j];
				a[0] = e;
				count++;
			}
		}
	}
	else
		printf("invalid rotations");
}
