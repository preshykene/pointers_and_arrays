#include <stdio.h>

int main (void)
{
	int a[] = {2, 4, 6, 8, 10};
	int i[] = {15, 10, 23, 45, 60};

	printf("%d\n", a[4]);
	printf("%d\n", &a[2]);
	printf("%d\n", *i);
	return (0);
}
