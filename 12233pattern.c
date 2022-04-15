#include<stdio.h>
void main()
{
 int i,j,n;

 printf("\n Enter the Number :-");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
 printf("%d",i);
  }
 printf("\n");
 }

}