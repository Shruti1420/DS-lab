#include <stdio.h>
int main()
{
    int n;
    printf("Enter size:\n");
    scanf("%d", &n);

    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int x;
    printf("Enter number:\n");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > x)
        {
            for (int j = n - 1; j >= i; j--)
            {
                ar[j + 1] = ar[j];
            }
            ar[i] = x;
            break;
        }
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", ar[i]);
    }

    return 0;
}
