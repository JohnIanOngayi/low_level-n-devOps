#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
        int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        mod = n % 10;
        if (mod == 0){
                printf("Last digit of %d is %d and is 0", n, mod);
        }
        else if (mod > 5){
                printf("Last digit of %d is %d and is greater than 5", n, mod);
        }
        else {
                printf("Last digit of %d is %d and is less than 6 and not 0", n, mod);
        }

	return (0);
}
