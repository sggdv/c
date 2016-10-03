/* 求底数base的n次冥。*/
int power(int base, int n)
{
	int i;
	int p = 1;

	for (i = 1; i <= n; ++i)
		p = p * base;

	return p;
}
