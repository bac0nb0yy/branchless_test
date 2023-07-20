#include <stdio.h>

double leap_year_branch(int iterations);
double leap_year_branchless(int iterations);

#define ITERATIONS 10000000

int main(void)
{
	double t_branch_y = leap_year_branch(ITERATIONS);
	double t_branchless_y = leap_year_branchless(ITERATIONS);

	printf("Branch : %f second(s) average for %d iterations\n", t_branch_y, ITERATIONS);
	printf("Branchless : %f second(s) average for %d iterations\n", t_branchless_y, ITERATIONS);
	
	if (t_branch_y < t_branchless_y)
		printf("Branch is faster by %f second(s)\n", t_branchless_y - t_branch_y);
	else
		printf("Branchless is faster by %f second(s)\n", t_branch_y - t_branchless_y);
	
	return (0);
}
