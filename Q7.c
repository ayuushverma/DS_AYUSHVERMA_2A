#include <stdio.h>
main()
{
    int a[10], i, n, t;
    printf("Enter number of elements,max is 10:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n/2; i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    printf("Reversed Array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}