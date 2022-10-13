#include <stdio.h>
main()
{
    int a[10],b[10],c[20],i,j,t,z,x,k=0,m,n;
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
    c[k]=a[i];
    k++;
    }
    for(j=0;j<n;j++)
    {
    c[k]=b[j];
    k++;
    }

    x=m+n;

    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if (c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }

    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if (c[i]==c[j])
            {
                for(z=j;z<x;z++)
                {
                    c[z]=c[z+1];
                }
                x--;
            }
        }
    }
    printf("Union of 2 array:\n");
    for(i=0;i<x;i++)
    printf("%d,",c[i]);
}