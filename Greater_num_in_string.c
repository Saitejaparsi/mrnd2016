//greater of stings if string contain no
#include<stdio.h>
int gs(char s1[], char s2[]);
int length(char s[]);
void main()
{
	char s1[20], s2[20], i;
	printf("enter first string :\n");
	scanf("%s", s1);
	printf("enter second string:\n");
	scanf("%s", s2);
	i = gs(s1, s2);
	if (i == 0)
		printf("string s1 is greater=%s", s1);
	else if (i == 1)
		printf("string s2 is greater=%s", s2);
	if (i == 2)
		printf("strings are equal");
}
int gs(char s1[], char s2[])
{
	int n1, n2, i, i1 = 0, i2 = 0;
	n1 = length(s1);
	n2 = length(s2);
	for (i1; s1[i1] == '0';)
		i1++;
	for (i2; s2[i2] == '0';)
		i2++;
	/*if ((n1 - i1) > (n2 - i2))
	return 0;
	if ((n1 - i1) < (n2 - i2))
	return 1;*/
	if (s1[0] != '-'&&s2[0] != '-')
	{
		if ((n1 - i1) > (n2 - i2))
			return 0;
		if ((n1 - i1) < (n2 - i2))
			return 1;
		for (; i1 <= n1 || i2 <= n2; i1++, i2++)
		{
			if (s1[i1] < s2[i2])
				return 1;
			else if (s1[i1]>s2[i2])
				return 0;
		}
		return 2;
	}
	else if (s1[0] != '-'&&s2[0] == '-')
		return 0;
	else if (s1[0] == '-'&&s2[0] != '-')
		return 1;
	else if (s1[0] == '-'&&s2[0] == '-')
	{
		if ((n1 - i1) <(n2 - i2))
			return 0;
		if ((n1 - i1) > (n2 - i2))
			return 1;
		for (i1 += 1, i2 += 1; i1 <= n1 || i2 <= n2; i1++, i2++)
		{
			if (s1[i1] < s2[i2])
				return 0;
			else if (s1[i1]>s2[i2])
				return 1;
		}
		return 2;
	}
}
int length(char s[])
{
	int i;
	for (i = 0; s[i]; i++);
	return i - 1;
}