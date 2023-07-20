#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool	check_with_branch(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return (true);
			else
				return (false);
		}
		else
			return (true);
	}
	else
		return (false);
}

double year_branch(int iterations)
{
	time_t	start,end;

	start = clock();
	for (int year = 0; year < iterations; year++)
		check_with_branch(year);
	end = clock();
	return (end - start);
}
