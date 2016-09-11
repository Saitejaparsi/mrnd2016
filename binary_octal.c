#include<stdio.h>
void octal(char b[], char o[]);
void main()
{
	char b[20], o[20] = { 0 };
	printf("enter binary no.:");
	scanf("%s", b);
	octal(b, o);
	printf("the octal no. is\t %s", o);
}
void octal(char b[], char o[])
{
	char s[][3] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	int i, l, j, k, m ,n=0, count ;
	for (i = 0; b[i]; i++);
	l = i - 1;
	for (i = l; i >= 0; i--)
	{
		if (n != 0)
			i = i + 1;
		m = 0;
		count = 0;
		l = i - 2;
		k = 0;
		for (j = i - 2; j>(i-3)&&count!=3; k++, j++, i--)
		{
			if (b[j] == s[m][k])
			{
				count++;
				if (count == 3)
				{
					o[n] = m+'0';
					n++;
				}
			}
			else
			{
				m++;
				k = -1;
				j = l-1;
				i = l+1;
				count = 0;
			}
		}
		i = l -1;
		if (i != 2&&i<=2&&i>=0)
		{
			if (i ==0)
			{
				b[2] = b[0];
			    b[1] = '0';
				b[0] = '0';
			}
			else
			{
				b[2] = b[1];
				b[1] = b[0];
				b[0] = '0';
			}
			i = 2;
		}
	}
	for (i = 0,k=n-1; i < k; i++, k--)
	{
		l = o[i];
		o[i] = o[k];
		o[k] = l;
    }
}