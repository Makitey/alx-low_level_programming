#include <stdio.h>
/**
 * main -main block
 * Description: computer and prints even number <4,000,000
 * 5 below 1024 (exclude), followed by a new 1
 */

int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
