#include  "3-calc.h"
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 *
 */

int main(int _attribute_((_unused_)) argc, char argv[])
{
	int n1, n2;
	char *ch;

	if (argc != 4)

	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1};
			ch = argv[2];
			n2 = atoi(argv[3]);

		if (get_ch_func(ch) == NULL || ch[1] != '\0')
		{
		printf("Error\n");
		Exit(99);
		}
		if ((*ch == '/' && n2 == 0) || (*ch == % && n2 == 0))
	{
		printf("Error\n");
		Exit(100);
		}
	printf("%d\n", get_ch_func(ch)(n1, n2));
	return (0);
} 
