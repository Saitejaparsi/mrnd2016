#include<stdio.h>
int to_binary(int a[], int n);
int to_base_2(int a[], int size);
void main()
{
	int n, a[20], size,m;
	printf("enter a number to be converted into base -2:");
	scanf("%d", &n);
	size = to_binary(a, n);
	printf("\n%d\n", size);
	size = to_base_2(a, size);
	printf("%d\n", size);
	for (int i = size - 1; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");
}
int to_binary(int a[], int n)
{
	int i;
	for (i = 0; n > 0; n = n / 2,i++)
		a[i] = n % 2;
	return i;
}
int to_base_2(int a[], int size)
{
	int i, j, k, count;
	for (i = 0; i < size; i++)
	{
		count = 0;
		if ((i % 2) != 0 && a[i] == 1)
		{
			if (a[i + 1] == 0 || (i + 1) == size)
			{
				a[i + 1] = 1;
				if ((i + 1) == size)
					return i + 2;
			}
			else
			{
				for (j = i + 1; j < size; j++)
				{
					if (a[j] == 1)
						count++;
					else
						break;
				}
				if (count % 2 != 0)
				{
					for (j = i + 1; j < size; j++)
					{
						if (a[j] == 1)
							a[j] = 0;
						else
							a[j] = 1;
					}
					if ((j % 2) == 0)
					{
						a[j] = 1;
						return j + 1;
					}
					else
					{
						a[j] = 1;
						a[j + 1] = 1;
						return j + 2;
					}
				}
				else
				{
					for (k = i + 1; k < j; k++)
					{
						a[k] = 0;
					}
					a[k] = 1;
					i = k;
				}
			}
		}
	}
	return i;
}