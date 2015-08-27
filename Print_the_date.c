#include<stdio.h>
void format(int d, int m, int y);
void date(int d);
void month(int m);
void year(int y);
void main()
{
	int d, m, y;
	printf("enter date:\t");
	scanf("%d", &d);
	printf("enter month:\t");
	scanf("%d", &m);
	printf("enter year:\t");
	scanf("%d", &y);
	format(d, m, y);
}
void format(int d, int m, int y)
{
	if (d >= 1 && d <= 31 && m <= 12)
	{
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			if (d > 30)
			{
				printf("invalid date\n");
				exit(1);
			}
		}
		else if (m == 2)
		{
			if (d > 29 && y % 4 == 0 || y % 400 == 0 && y % 100 != 0)
			{
				printf("invalid date\n");
				exit(1);
			}
			if (d > 28 && y % 4 != 0 || y % 400 != 0 && y % 100 == 0)
			{
				printf("invalid date\n");
				exit(1);
			}

		}
		else
		{
			if (d > 31)
			{
				printf("invalid date\n");
				exit(1);
			}
		}
	}
	date(d);
	month(m);
	year(y);
}
void month(int m)
{
	char s[][20] = { "january", "febuary", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
	printf("%s\t", s[m - 1]);
}
void date(int d)
{
	char d1[][19] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	char d2[][8] = { "twenty" };
	if (d > 0 && d < 20)
		printf("%s\t", d1[d - 1]);
	else
	{
		int i = d % 10;
		printf("%s\t%s\t", d2[0], d1[i - 1]);
	}
}
void year(int y)
{
	char y1[][19] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	char y2[][8] = { "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	char y3[][20] = { "hundred", "thousand" };
	if (y > 0 && y < 20)
		printf("%s\t", y1[y - 1]);
	else if (y > 19 && y < 100)
	{
		int i = y / 10;
		printf("%s\t%s\t", y2[i - 2], y1[y % 10 - 1]);
	}
	else if (y > 99 && y < 999)
	{
		int i = y / 100;
		printf("%s\t%s\t%s\t%s\t", y1[i - 1], y3[0], y2[y % 10 - 1], y1[(y % 10) - 1]);
	}
	else if (y > 999 && y < 9999)
	{
		int i = y / 1000;
		int j = (y / 100) % 10;
		if (j == 0)
		{
			if (y % 100 < 20)
				printf("%s\t%s\t%s\t", y1[i - 1], y3[1], y1[(y % 100) - 1]);
			else
				printf("%s\t%s\t%s\t%s\t", y1[i - 1], y3[1], y2[((y / 10) % 10) - 2], y1[y % 10 - 1]);
		}
		else
		{
			if (y % 100 < 20)
				printf("%s\t%s\t%s\t%s\t%s\t", y1[i - 1], y3[1], y1[((y / 10) % 10) - 1], y2[0], y1[y % 100]);
			else
				printf("%s\t%s\t%s\t%s\t%s\t%s\t", y1[i - 1], y3[1], y1[((y / 10) % 10) - 1], y3[0], y2[((y / 10) % 10) - 2], y1[y % 10 - 1]);
		}
	}
}