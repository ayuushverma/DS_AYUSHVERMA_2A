#include <stdio.h>
main()
{
    int a[10], i, k, ele, n;

    printf("Enter number of elements less than 9:\n");
    scanf("%d", &n);

    printf("Enter sorted(ascending) array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to be inserted");
    scanf("%d", &ele);

    for (i = 0; i < n - 1; i++)
    {
        if (ele >= a[i] && ele <= a[i + 1])
        {
            k = i+2;
            break;
        }
    }

    for(i=n;i>=k;i--)
    a[i]=a[i-1];
    a[i]=ele;

    printf("Elements after insertion:\n");
    for (i = 0; i < n + 1; i++)
        printf("%d ", a[i]);
}