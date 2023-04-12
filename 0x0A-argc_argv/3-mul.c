#include<stdio.h>
#include<stdlib.h>

/**
 *
 *
 */

int main( int argc, char *argv[])
{
	int n1 = 0;
	int n2 = 0;
	int s1 = 1;
	int s2 = 1;
	int i = 0;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		s1 = -1;
		i = 1;
	}

	while (argv[1][i] != '\0')
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		n1 = n1 * 10 + (argv[1][i] - '0');
		i++;
	}
	n1 *= s1;
	i = 0;

	if (argv[2][0] == '-')
	{
		s2 = -1;
		i = 1;
	}
	while (argv[2][i] != '\0')
        {
                if (argv[2][i] < '0' || argv[2][i] > '9')
                {
                        printf("Error\n");
                        return (1);
                }
                n2 = n2 * 10 + (argv[2][i] - '0');
                i++;
        }
	n2 *= s2;
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
