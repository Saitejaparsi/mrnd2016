#include<stdio.h>
int ke(char a[], int k);
void main()
{
	char  a[20];
	int i, k;
	printf("enter string\n");
	scanf("%s", a);
	printf("enter kth positon from last\t");
	scanf("%d", &k);
	if (k <= 0)
		printf("invalid k value");
	else
	{
		i = ke(a, k);
		printf("element is %c", a[i]);
	}
}
int ke(char a[], int k)
{
	int i, j;
	for (i = k, j = 0; a[i]; i++, j++);
	return j;
}