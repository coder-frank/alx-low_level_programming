#include <stdio.h>

#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: year to check
 * Return: 1 if it's a leap year, 0 otherwise
 */
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1; // Leap year
    }
    else
    {
        return 0; // Not a leap year
    }
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    int leap_year = is_leap_year(year);

    if (leap_year && month > 2)
    {
        day++; // Increase the day count for leap years after February
    }

    switch (month)
    {
        case 1: // January
            day += 0;
            break;
        case 2: // February
            day += 31;
            break;
        case 3: // March
            day += 59;
            break;
        case 4: // April
            day += 90;
            break;
        case 5: // May
            day += 120;
            break;
        case 6: // June
            day += 151;
            break;
        case 7: // July
            day += 181;
            break;
        case 8: // August
            day += 212;
            break;
        case 9: // September
            day += 243;
            break;
        case 10: // October
            day += 273;
            break;
        case 11: // November
            day += 304;
            break;
        case 12: // December
            day += 334;
            break;
        default:
            printf("Invalid month.\n");
            return;
    }

    if (leap_year && month >= 3)
    {
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 365 - day);
    }
}
