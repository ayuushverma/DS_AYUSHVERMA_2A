#include <stdio.h>
main()
{
    int a[10],b[10],c[20],i,j,k=0,m,n;
    printf("Enter size of 1st and 2nd set:\n");
    scanf("%d%d",&m,&n);
    printf("Enter 1st array elements:\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Enter 2nd array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if (a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }
    printf("Intersection of 2 array:\n");
    for(i=0;i<k;i++)
    printf("%d ",c[i]);
}