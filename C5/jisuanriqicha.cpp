#include<stdio.h>

#define true 1
#define false 0

struct date
{
	int day;
	int month;
	int year;
};
int Leap(struct date d)
{
	int leap = false;
	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
	leap = true;
	return leap;
}

int lastdays(struct date d)
{
	int days;
	int Month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (d.month == 2 && Leap(d))
		days = 29;
	else
		days = Month[d.month - 1];
	return days;
}
int main()
{
	struct date today, tomorrow, hou;
	int count = 0;
	scanf("%d %d %d", &today.year, &today.month, &today.day);
	scanf("%d %d %d", &hou.year, &hou.month, &hou.day);
	while (hou.year!=today.year || hou.month!=today.month || hou.day!=today.day) 
	{
		if (today.day != lastdays(today))
		{
			tomorrow.day = today.day + 1;
			tomorrow.month = today.month;
			tomorrow.year = today.year;
		}
		else if (today.month == 12) {
			tomorrow.day = 1;
			tomorrow.month = 1;
			tomorrow.year = today.year + 1;
		}
		else {
			tomorrow.day = 1;
			tomorrow.month = today.month + 1;
			tomorrow.year = today.year;
		}
		today.day = tomorrow.day;
		today.month = tomorrow.month;
		today.year = tomorrow.year;
		count++;
	}
	printf("%d\n", count);
	
}
