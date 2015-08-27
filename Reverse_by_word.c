#include<stdio.h>
void reverse(char s[], int s1, int l);
int length(char s[], int i);
int rs(char *s);
int s1 = 0;
void main()
{
	char s[300], l, l1;
	printf("enter sentence\n");
	gets(s);
	l = rs(s);
	for (l1 = 0; s[l1]; l1++);
	reverse(s, 0, l1);
	printf("%s", s);
}
void reverse(char s[], int s1, int l)
{
	int i, j, temp1;
	for (i = s1, j = l - 1; i<j; i++, j--)
	{
		temp1 = s[i];
		s[i] = s[j];
		s[j] = temp1;
	}
}
int length(char *s, int i)
{
	int l = i;
	while (s[l] != 0)
	{
		while (s[l] != ' '&&s[l] != '\0')
			l++;
		break;
	}
	return l;
}
int rs(char s[])
{
	int l;
	l = length(s, s1);
	reverse(s, s1, l);
	s1 = l + 1;
	while (s[l] != '\0')
		l = rs(s);
	return l;
}