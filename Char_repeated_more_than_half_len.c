#include<stdio.h>
char repeat(char s[]);
void main()
{
	char s[30], a;
	printf("enter string\n");
	scanf("%s", s);
	a = repeat(s);
	if (a != '@')
		printf("more than half:\t%c", a);
	else
		printf("no character found");
}
char repeat(char s[])
{
	int n, i, j, count = 1;
	for (i = 0; s[i]; i++);
	n = i - 1;
	for (i = 0; s[i]; i++)
	{
		for (j = i + 1; j <= n; j++)
		{
			if (s[i] == s[j])
				count++;
			if (count > n / 2)
				return s[i];
		}
		if (count < n / 2)
			count = 1;
	}
	return '@';
}