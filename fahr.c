#include <stdio.h>

main () 
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 50;
	step = 4;

	fahr = lower;

	printf("%s\t%s\n", "fahr", "celsius");

	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}