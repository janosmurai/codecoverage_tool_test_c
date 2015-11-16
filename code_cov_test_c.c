#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int i = 0;
	int mult = 0;

	if (a > b)
	{
		while (a > b)
		{
			b++;
		}
		printf("a is greater then b");
	}
	else if (a == b)
	{
		printf("a and b aer equal");
	}
	else
	{
		printf("b is greater then a");
	}

	for (i = 0; i < a; i++)
	{
		if (b && (a < 200))
		{
			mult = i * b;
			printf("Mutliplication: %d", mult);
		}
	}
	return 0;
	//Start codecov
}