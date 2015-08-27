#include<stdio.h>
void cc(char *p1, char *p2);
void main()
{
	char s1[20], s2[20], *p1, *p2;
	printf("enter string 1\n");
	scanf("%s", &s1);
	printf("enter string 2\n");
	scanf("%s", &s2);
	p1 = &s1[0];
	p2 = &s2[0];
	cc(p1, p2);
}
void cc(char *p1, char *p2)
{
	int a[256] = { 0 }, k, i;
	for (i = 0; *(p1 + i) != 0; i++)
	{
		for (int j = 0; *(p2 + j) != 0; j++)
		{
			if (*(p1 + i) == *(p2 + j))
			{
				k = *(p1 + i);
				a[k] = 1;
			}
		}
	}
	for (i = 0; i < 256; i++)
		if (a[i] == 1)
			printf("%c\t", i);
}