#include<stdio.h>
int braces(char *p1, char *p2);
int n1, n2;
void main()
{
	char *p1, *p2;
	int a;
	printf("enter size of first string:\n");
	scanf("%d", &n1);
	printf("enter size of second string:\n");
	scanf("%d", &n2);
	p1 = (char *)malloc(n1);
	p2 = (char *)malloc(n2);

	scanf("%s", p1);
	scanf("%s", p2);
	a = braces(p1, p2);
	if (a == 1)
		printf("invalid format");
	else
	{
		printf("string between braces\t");
		for (int i = 0; i < (n1 + n2); i++)
			printf("%c", *(p1 + i));
	}
}
int braces(char *p1, char *p2)
{
	int l3, count = 0, i, j, flag=0,index, il1 = 0, il2 = 0;
	for (i = 0, j = n1 - 1; i < j; i++, j--)
	{
		if (*(p1 + i) == *(p1 + j) - 2)
			flag = 1;
		else if (*(p1 + i) == *(p1 + j) - 1)
			flag = 1;
		else if (flag == 0)
			break;
	}
	if (flag ==0)
		return 1;
	for (il1 = 0; (*(p1 + il1) == '<' || *(p1 + il1) == '{' || *(p1 + il1) == '('||*(p1+il1)=='['); il1++);
	for (il2 = il1; *(p1 + il2) != '\0'; il2++)
		count++;
	if (il1 != count)
		return 1;
	else
	{
		index = il1 - 1;
		l3 = n1 + n2;
		p1 = (char *)realloc(p1, l3);
		for (i = n1 - 1; i > index; i--)
			*(p1 + (i + n2)) = *(p1 + i);
		for (i = index + 1, j = 0; i <= (index + n2); i++, j++)
		{
			*(p1 + i) = *(p2 + j);
		}
		*(p1 + (n1+ n2)) = '\0';
	}
	return 2;
}
