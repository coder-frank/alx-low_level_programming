#include <stdio.h>
#include "main.h"
 /**
  * check_year - checks if a number is a leap year or not
  * print_remaining_days - takes a date and prints how many days are
  * left in the year, taking leap years into account
  * @month: month in number format
  * @day: day of year
  * @year: year
  * Return: void
  */
int check_year(int year)
{
	int is_leap_year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				is_leap_year = 1;
			} else
			{
				is_leap_year = 0;
			}
		} else
		{
			is_leap_year = 1;
		}
	} else
	{
		is_leap_year = 0;
	}
	return (is_leap_year);
}

void print_remaining_days(int month, int day, int year)
{
	int is_leap_year = check_year(year);

	if (is_leap_year == 1)
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	} else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
