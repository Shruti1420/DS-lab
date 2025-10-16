#include <stdio.h>

int main()
{
    int n, p = -1;
    printf("Enter the size of array = ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            p = i;
    }

    if (p != -1)
    {
        for (int i = p; i < n - 1; i++)
            a[i] = a[i + 1];
    }

    printf("The array without repetition is:\n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
