#include <stdio.h>
void main()
{
   int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
   printf("Enter order of 1st matrix:\n");
   scanf("%d%d",&m,&n);
   printf("Enter order of 2nd matrix:\n");
   scanf("%d%d",&p,&q);
   if(n==p)
   {

   printf("Enter 1st array elements:\n");
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
   }
   printf("Enter 2nd array elements:\n");
   for(i=0;i<p;i++)
   {
       for(j=0;j<q;j++)
       scanf("%d",&b[i][j]);
   }
   for(i=0;i<m;i++)
   {
       for(j=0;j<q;j++)
       {
           c[i][j]=0;
           for(k=0;k<p;k++)
            c[i][j]+=a[i][k]*b[k][j];
       }
   }
   printf("Output matrix\n");
   for(i=0;i<m;i++)
   {
       for(j=0;j<q;j++)
        printf("%d ",c[i][j]);
       printf("\n");
   }
   }
else
    printf("Multiplication not possible\n");
}
