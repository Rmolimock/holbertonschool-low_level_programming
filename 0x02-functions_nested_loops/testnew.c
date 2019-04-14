#include <stdio.h>

void sum_multiples(int *sum);
int main(void)
{
	int sum[1];

	sum[0] = 9999;
	sum[1] = 0;
	sum_multiples(sum);
	return (0);
}

void sum_multiples(int sum[])
{
	if (sum[0] > 0)
	{
		if (!(sum[0] % 3) && sum[0] % 5)
		{
			sum[1] += sum[0];
			sum[0] -= 1;
			sum_multiples(sum);
		}
		else if (sum[0] % 3 && !(sum[0] % 5))
		{
			sum[1] += sum[0];
			sum[0] -= 1;
			sum_multiples(sum);
		}
		else if (!(sum[0] % 3) && !(sum[0] % 5))
		{
			sum[1] += sum[0];
			sum[0] -= 1;
			sum_multiples(sum);
		}
		else
		{
			sum[0] -= 1;
			sum_multiples(sum);
		}
	}
	else
		printf("%d\n", sum[1]);
}
