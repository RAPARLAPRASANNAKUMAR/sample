#include<stdio.h>
main()
{
	int row,n,column;
	scanf("enter value",&n);
	for(row=1;row<=n;row++)
	{
		for(column=1;column<=row;column++)
		printf("*");
		
	}
	printf(" ");
}
