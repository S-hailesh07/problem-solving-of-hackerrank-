#include<stdio.h>
int main()
{
   int n,i;
    scanf("%d",&n);
   long long int a[n];
   long long int sum;
   sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lli",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum +=a[i];
    }
     printf("%lli",sum);
}
