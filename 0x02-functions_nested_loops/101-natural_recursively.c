#include <stdio.h>
 
void sum_multiples(int *sum);

/**
 *main - Entry point.
 *
 *Return: 0 on success.
 */
int main(void)
{
        int sum[1];

        sum[0] = 9999;
        sum[1] = 0;
        sum_multiples(sum);
        return (0);
}

/**
 *sum_multiples - find sum of multiples of 3 or 5 up to given number
 *@sum: integer array, sum[0] is threshold & sum[1] is the solution.
 *
 *Return: Void.
 */
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
