#include<stdio.h>
int cf(int q,int p)
{  if(p<=1) return q;
    return q*cf(q,p-1);
}
int prime(int n)
{ if(n==2) return 1;
    for(int i=2;i<=n/i;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{ 
    int i,j;
    for (i=2;;i++)
     for(j=2;j<1000;j++){
    if(prime(i)&&prime(j))
      if(prime(cf(i,j)+cf(j,i))) {
          printf("%d %d",i,j);
          return 0;
      }
     }

    return 0;
}