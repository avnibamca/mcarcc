//1-x2/2!+x4/4!-x6/6! 
#include <stdio.h>
int main()
{
int n,i=1,fact=1,j;
float sum=1,term,x,m;
printf("Enter the value of x:");
scanf("%f",&x);
printf("Enter how many terms you want:");
scanf("%d",&n);

m=x*x;

while(i<=n-1)
{
    
for(j=i*2;j>=1;j--)
{ fact=fact*j;
}

term=(m)/fact;

if(i%2!=0)
sum=sum-term;

else
sum=sum+term;
m=m*x*x;
i++;
}
printf("sum of series= %f",sum);

return 0;
}

