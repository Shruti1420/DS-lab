#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter sizes of two arrays:\n");
    scanf("%d %d", &n1, &n2);

    int ar1[n1], ar2[n2];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &ar1[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &ar2[i]);
    }

    int c = 0, k = 0;
    int ar3[n1 + n2];

    for (int i = 0; i < n2; i++)
    {
        for (int j = k; j < n1; j++)
        {
            if (ar1[j] < ar2[i])
            {
                ar3[c++] = ar1[j];
                k++;
            }
            else
            {
                break;
            }
        }
        ar3[c++] = ar2[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d\t", ar3[i]);
    }

    return 0;
}
