#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == (n / 2) + 1)
            {
                for (int k = 0; k < n; k++)
                {
                    printf("#");
                }
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j == (n / 2) + 1)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf("*");
                    }
                }
            }

            printf("\n");
        }
    }

    return 0;
}

/* input 3
output =
  *
 ***
*****
 ***
  *

*/