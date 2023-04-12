#include<stdio.h>
 /**
  *
  *
  *
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;
	int j = 0;
	int p = 0;
	char *arg;

	
	if (argc == 1)
	{
		printf("0\n");
	       	return (0);
	}
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			 p = p * 10 + (arg[j] - '0');
			 j++;
		}
		sum += p;
	}
	printf("%d\n", sum);
	return (0);
}
