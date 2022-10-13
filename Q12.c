#include <stdio.h>
int main()
{
    int a[10], b[10], c[20], d[20], e[20], i, j, k1 = 0, k2 = 0, m, n, t, l = 0;
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
    for (i = 0; i < k1; i++)
    {
        e[l] = c[i];
        l++;
    }
    for (j = 0; j < k2; j++)
    {
        e[l] = d[j];
        l++;
    }
    printf("\nSymmetric Difference:\n");
    for (i = 0; i < l; i++)
        printf("%d,", e[i]);
    return 0;
}
