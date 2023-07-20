#include <string.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	with_branch(char *str)
{
	int i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + 13) % 26 + 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + 13) % 26 + 'A';
	}
}

double	rot13_branch(int iterations, size_t BUFFER_SIZE)
{
	time_t	start,end;
	char	string[BUFFER_SIZE];
	FILE	*ptr = fopen("text.txt", "r");
	char	ch;
	size_t n = 0;

	do {
        ch = fgetc(ptr);
		string[n++] = ch;
    } while (ch != EOF);

	double moy = 0;
	for (int i = 0; i < iterations; i++)
	{
		start = clock();
		with_branch(string);
		end = clock();
		moy += (double)(end - start) / CLOCKS_PER_SEC;
	}
	fclose(ptr);
	return (moy / iterations);
}
