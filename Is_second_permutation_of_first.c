#include<stdio.h>
int per(char s1[], char s2[]);
int leng(char s[]);
void main()
{
	char s1[20], s2[20], a;
	printf("enter 2 string\n");
	scanf("%s%s", s1, s2);
	a = per(s1, s2);
	if (a == 0)
		printf("strings are permutated");
	else
		printf("strings are not permutated");
}
int per(char s1[], char s2[])
{
	int i, j, a, b;
	char temp;
	a = leng(s1);
	b = leng(s2);
	if (a != b)
		return 1;
	else if (a == b)
	{
		for (i = 0; s1[i]; i++)
		{
			for (j = i; s2[j]; j++)
			{
				if (s1[i] == s2[j])
				{
					temp = s2[j];
					s2[j] = s2[i];
					s2[i] = temp;
					break;
				}
			}
		}
		for (i = 0; s1[i]; i++)
		{
			if (s1[i] != s2[i])
				return 1;
		}
		return 0;
	}
}
int leng(char s[])
{
	int i;
	for (i = 0; s[i]; i++);
	return i;
}