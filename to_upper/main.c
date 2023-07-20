#include <stdio.h>

double	to_upper_branch(int iterations, size_t BUFFER_SIZE);
double	to_upper_branchless(int iterations, size_t BUFFER_SIZE);

#define ITERATIONS 100
#define BUFFER_SIZE 7000000

int main(void)
{
	double t_branch = to_upper_branch(ITERATIONS, BUFFER_SIZE);
	double t_branchless = to_upper_branchless(ITERATIONS, BUFFER_SIZE);

	printf("Branch : %f milliseconds average for %d iterations\n", t_branch, ITERATIONS);
	printf("Branchless : %f milliseconds average for %d iterations\n", t_branchless, ITERATIONS);
	
	if (t_branch < t_branchless)
		printf("Branch is faster by %f milliseconds\n", t_branchless - t_branch);
	else
		printf("Branchless is faster by %f milliseconds\n", t_branch - t_branchless);
	
	return (0);
}
