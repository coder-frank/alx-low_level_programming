void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int total_days = 365;
	int remaining_days;

	if (is_leap_year(year))
	{
		days_in_month[2] = 29;
		total_days = 366;
	}

	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	remaining_days = total_days - (day - 1);
	for (int i = 1; i < month; i++)
	{
		remaining_days -= days_in_month[i];
	}

	printf("Day of the year: %d\n", total_days - remaining_days);
	printf("Remaining days: %d\n", remaining_days);
}
