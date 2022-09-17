#include <stdio.h>

int main (void)
{
	int a[] = {2, 4, 6, 8, 10};
	int i;

	printf("%d\n", a[4]);
	printf("%.2d\n", &a[4]);

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
