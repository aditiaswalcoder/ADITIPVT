
#include<stdio.h>
int main()
{
  printf("Enter the row and column size:");

  int row_size,out,in,p;
  scanf("%d",&row_size);
  for(out=1;out<=row_size;out++)
  {
   for(in=1;in<=row_size;in++)
    printf("%d",out);

        printf("\n");
  }
}

