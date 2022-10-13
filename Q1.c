#include <stdio.h>
main()
{
    int a[10], i, n;
    printf("Enter number of elements,max is 10:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array Elements:\n");
    for (i = 0; i < n; i++)
        printf("%d,", a[i]);
}