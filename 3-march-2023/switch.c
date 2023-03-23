#include<stdio.h>
int main()
{int a,b,c;
  scanf("%d%d%d",&a,&b,&c);

  switch (a>b && a>c)
  {case 1:printf("%d is maximum ",a);
    break ;
    default : switch (b>a && b>c)
    {case 2:printf(" %d is maximum ",b);
      break ;
      default :ptintf(" %d is maximum ",c);
    }}
    return 0;
  }
