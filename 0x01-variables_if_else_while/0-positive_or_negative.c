#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints negative or positive
 */
int main()
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive");
}
elseif(n = 0)
{
printf("is zero");
}

elseif(n < 0)

{
printf("is negative");
return (0);

}
}

