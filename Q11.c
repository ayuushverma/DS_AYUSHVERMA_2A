#include <stdio.h>
int main()
{
    int a[10], b[10], c[20], d[20],i, j, k1 = 0, k2 = 0, m, n, t;
    printf("Enter size of 1st and 2nd set:\n");
    scanf("%d%d", &m, &n);
    printf("Enter 1st array elements:\n");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    printf("Enter 2nd array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < m; i++)
    {
        t = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
                t = 1;
        }
        if (t == 0)
        {
            c[k1] = a[i];
            k1++;
        }
    }
    printf("A-B:\n");
    for (i = 0; i < k1; i++)
        printf("%d,", c[i]);
    for (i = 0; i < n; i++)
    {
        t = 0;
        for (j = 0; j < m; j++)
        {
            if (b[i] == a[j])
                t = 1;
        }
        if (t == 0)
        {
            d[k2] = b[i];
            k2++;
        }
    }
    printf("\nB-A:\n");
    for (i = 0; i < k2; i++)
        printf("%d,", d[i]);
    return 0;
}
