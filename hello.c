#include <stdio.h>

int sum(const int a, const int b);

int main(void)
{
    const int a = 1;
    const int b = 2;

	printf("Sum is %d\n", sum(a,b));

    return 0;
}

int sum(const int a, const int b)
{
	return a + b;
}
