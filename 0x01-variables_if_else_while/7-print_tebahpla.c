#include <stdio.h>

/**
   * main - entry point
    *
     * Decription: Print numbers 0 to 9 on one line
      * Return: 0
       */
int main(void)
{
	        int m;
		        /* a blank space */
		        for (m = 0; m <= 9; ++m)
				                putchar('0' + m);

			        putchar('\n');

				        return (0);
}
