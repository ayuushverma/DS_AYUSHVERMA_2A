#include <stdio.h>
main()
{
    int a[10], i, n, s1 = 0;
    printf("Enter number of elements,max is 10:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    s1 = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
    {
        s1 = s1 - a[i];
    }
    printf("Missing number=%d", s1);
}