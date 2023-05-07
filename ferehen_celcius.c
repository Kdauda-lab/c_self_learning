#include <stdio.h>

/* print farahent_celcius table for f = 0
 * f  = 20 .... 30
 */

int main()
{
	int lower, step, upper;
	float fahr, celsius;

	lower = 0;
	step = 20; 
	upper = 300;
	fahr = lower;

	printf("%s %s\n", "Fahr", "Celsius");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);

		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
}
