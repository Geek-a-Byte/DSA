#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int half_i = n - 2;
    int same_j = n - 4;
    int temp = n, temp2 = 1;
    int temp3 = half_i;
    for (int i = 0; i < n * 2 - 1; i++)
    {
        if (i == 0 || i == n * 2 - 2)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                printf("%d ", n);
            }
        }
        else if (i <= n - 1)
        {
            temp--;
            int count = 0;
            for (int j = 0; j <= i; j++)
            {
                printf("%d ", n - j);
                count++;
            }

            for (int j = i + 1; j <= (2 * n - 1) - (i + 2); j++)
            {
                printf("%d ", temp);
            }

            int count2 = 0;
            for (int j = n - i;; j++)
            {
                if (j == 1)
                {
                    count2++;
                    continue;
                }
                if (count2 == count)
                    break;
                printf("%d ", j);
                count2++;
            }
        }
        
        printf("\n");
    }

    return 0;
}