#include "main.h"
/**
  * check_year - checks if a number is a leap year or not
  * @year: year to be checked
  * Return: 1 if its a leap year, otherwise 0
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
