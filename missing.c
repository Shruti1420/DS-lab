#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i - 1] != i)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
