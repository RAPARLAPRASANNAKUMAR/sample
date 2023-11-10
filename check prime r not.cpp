#include<stdio.h>
main()
{
	 int n, i, fact=0;
	 printf("enter any number");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	    if(n%i==0) 
	    fact++;
	}
	if(fact==2)
	printf("%d is a prime number",n);
	else
	printf("%d is not a prime number",n);
	
}
	

