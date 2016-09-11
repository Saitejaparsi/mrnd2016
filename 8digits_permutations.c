#include<stdio.h>
void perm(int a[],int size);
int fact(int n);
void place(int a[], int b, int size);
int array(int n,int a[]);
void swap(int [],int,int);
void main()
{
	int n, a[8] = { 0 },size;
	printf("enter a no to find all permutations of that no.:\t");
	scanf("%d", &n);
	size=array(n,a);
	perm(a,size);
}
int array(int n, int a[])
{
	int i=0,r, b[10] = { 0 };
	while (n)
	{
		r = n % 10;
		b[r]++;
		n = n / 10;
	}
	r = 0;
	for (i = 0; i <10 ; i++)
	{
		if (b[i] != 0)
			a[r++] = i;
	}
	return r;
}
void perm(int a[], int size)
{
	int i, j ,fct = 0;
	for (i = 0; i < size; i++)
		printf("%d", a[i]);
	printf("\n");
	fct = fact(size);
	for (i = 0; i < fct / 2; i++)
	{
		swap(a, size - 1, size - 2);
		for (j = 0; j < size; j++)
			printf("%d", a[j]);
		printf("\n");
		if (i != (fct / 2)-1)
		{
			place(a, size - 3, size);
			for (j = 0; j < size; j++)
				printf("%d", a[j]);
			printf("\n");
		}
	}
}
void place(int a[], int b, int size)
{
	int i = b, j = i + 1, k, count[10] = { 0 }, count1 = 0;
	while (j < size)
	{
		count[a[j]] = 1;
		j++;
	}
	for (k = a[i]; k<9; k++)
	{
		if (count[k + 1] != 0)
			count1++;
	}
	if (count1 != 0)
	{
		for (k = a[i]+1; k<10; k++)
			if (count[k] != 0)
			{
				count[k] = 0;
				break;
			}
		count[a[i]] = 1;
		a[i] = k;
		j = i + 1;
		for (k = 0; k<10; k++)
		{
			if (count[k] != 0)
		        a[j++] = k;
		}
	}
	else
	{
		if (i >= 1)
			place(a, i - 1, size);
	}
}
void swap(int a[],int b, int c)
{
	a[b] = a[b] + a[c];
	a[c] = a[b] - a[c];
	a[b] = a[b] - a[c];
}
int fact(int size)
{
	int i=size;
	while (size!=0)
	{
		if (size!=1)
		  i *=(size- 1);
		size--;
	}
	return i;
}