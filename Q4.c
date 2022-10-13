#include <stdio.h>
main()
{
    int a[10],i,k,n;
    printf("Enter number of elements,max is 10:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the position of element to be deleted");
    scanf("%d",&k);
    for(i=k;i<n;i++)
    a[i]=a[i+1];

    printf("Elements after deletion:\n");
    for(i=0;i<n-1;i++)
    printf("%d,",a[i]);
}