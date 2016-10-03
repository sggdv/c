#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* 温度转换, 摄氏温度 - 华氏温度 */
int main () 
{
	float fahr, celsius;

	fahr = LOWER;

	printf("%4s%15s\n", "fahr", "celsius");

	while (fahr <= UPPER) {
		celsius = 5.0 / 9 * (fahr - 32);
		printf("%4.0f%15.1f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
	return 0;
}
