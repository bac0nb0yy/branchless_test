#include <stdio.h>

double	branch(int iterations, size_t BUFFER_SIZE);
double	branchless(int iterations, size_t BUFFER_SIZE);

#define ITERATIONS 100
#define BUFFER_SIZE 7000000

int main(void)
{
	double t_branch = branch(ITERATIONS, BUFFER_SIZE);
	double t_branchless = branchless(ITERATIONS, BUFFER_SIZE);

	printf("Branch : %f second(s) average for %d iterations\n", t_branch, ITERATIONS);
	printf("Branchless : %f second(s) average for %d iterations\n", t_branchless, ITERATIONS);
	if (t_branch < t_branchless)
		printf("Branch is faster by %f second(s)\n", t_branchless - t_branch);
	else
		printf("Branchless is faster by %f second(s)\n", t_branch - t_branchless);
}
