#include<stdio.h>
int palyndrome(char s[]);
void main()
{
	char s[20], a;
	printf("enter the string:\n");
	scanf("%s", s);
	a = palyndrome(s);
	if (a == 0)
		printf("palindrome");
	else
		printf("not palindrome");
}
int palyndrome(char s[])
{
	int i, l = 0, j;
	for (i = 0; s[i]; i++)
		l++;
	j = l - 1;
	if (j % 2 != 0)
	{
		for (i = 0; i < j; i++, j--)
			if (s[i] == s[j])
				continue;
		if (s[i] != s[j])
			return 1;
		return 0;
	}
	else
	{
		for (i = 0; i <= j; i++, j--)
			if (s[i] == s[j])
				continue;
		if (s[i] != s[j])
			return 1;
		return 0;
	}
}