#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int j = 0; j < n; j++)
    {
        int size;
        scanf("%d", &size);
        int array[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);
        }
        int find;
        scanf("%d", &find);
        int flag = 0;
        for (int i = 0; i < size; i++)
        {

            if (array[i] == find)
            {
                printf("Case %d: %d ", j + 1, i + 1);
                flag = 0;
                break;
            }
            else
            {
                flag++;
            }
        }
        if (flag)
        {
            printf("Case %d: Not Found", j + 1);
        }
        printf("\n");
    }

    return 0;
}