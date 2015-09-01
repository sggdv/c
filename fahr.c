#include <stdio.h>

main () 
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 50;
	step = 4;

	fahr = lower;

	printf("%4s%15s\n", "fahr", "celsius");

	while (fahr <= upper) {
		celsius = 5.0 / 9 * (fahr - 32);
		printf("%4.0f%15.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}