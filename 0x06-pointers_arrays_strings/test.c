#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	
    srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit = n % 10;

	/* your code goes there */
	
	if(lastdigit > 5)
	{
	    printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	}
	if(lastdigit == 0)
	{
	    printf("Last digit of %d is %d and is 0", n, lastdigit);
	}
	if(lastdigit < 6)
	{
	    printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	}
	return (0);
}
