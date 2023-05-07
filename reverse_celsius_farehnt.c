#include <stdio.h>

/* print celsius_farent table for f = 0
 * f  = 20 .... 30
 */

int main()
{
	int lower, step, upper;
	float fahr, celsius;

	lower = 0;
	step = 20; 
	upper = 300;
	celsius = lower;

	printf("%s %s\n", "Celsius", "Fahr");
	while (upper >= celsius)
	{
		fahr = (upper * (9.0/5.0) + 32);

		printf("%4d %6.1f\n", upper, fahr);
		upper -= step;
	}
}
