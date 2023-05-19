#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (max < array[i])
        {
            max = array[i];
        }
    }

    int array_2[n];
    for (int i = 0; i < n; i++)
    {
        array_2[i] = max - array[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array_2[i]);
    }

    return 0;
}