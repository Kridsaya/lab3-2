#include<stdio.h>

int main()
{
	int x, y;

	for (int x = 1; x <= 10000; x++)
	{
		int sum = 0;
		for (int y = 1; y <= x / 2; y++)
		{
			if (x % y == 0)
			{
				sum = sum + y;
			}
		}
		if (sum == x)
		{
			printf("%d \n", sum);
		}
	}
	return 0;
}