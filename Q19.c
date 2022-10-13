#include <stdio.h>
void main()
{
   int a[10][10],b[10][10],i,j,m,n,c=0;
   printf("Enter order of matrix:\n");
   scanf("%d%d",&m,&n);
   printf("Enter array elements:\n");
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
        b[i][j]=a[j][i];
   }
   printf("Transpose of the matrix:\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
        printf("%d ",b[i][j]);
       printf("\n");
   }
}

