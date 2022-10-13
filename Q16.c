#include <stdio.h>
main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
    printf("Enter order of 1st matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter 1st matrix elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter order of 2nd matrix:\n");
    scanf("%d%d",&p,&q);
    printf("Enter 2nd matrix elements:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    if (m==p && n==q)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",c[i][j]);
    printf("\n");
    }
    }
    else{
        printf("Addition not possible");
    }
}