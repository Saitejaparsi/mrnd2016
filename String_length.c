//length 0f sting
#include<stdio.h>
int ls(char *s);
void main()
{
	char *s[20];
	int l;
	printf("enter string:");
	gets(s);
	l = ls(s);
	printf("length of sting=%d", l);
}
int ls(char *s)
{
	int i;
	for (i = 0; s[i]; i++);
	return i;

}