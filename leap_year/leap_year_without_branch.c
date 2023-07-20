#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool	without_branch(int year)
{
	return (!(year & 2) && (year % 100 != 0 || !(year % 400)));
}

double leap_year_branchless(int iterations)
{
	time_t	start,end;

	start = clock();
	for (int year = 0; year < iterations; year++)
		without_branch(year);
	end = clock();
	return (end - start);
}
