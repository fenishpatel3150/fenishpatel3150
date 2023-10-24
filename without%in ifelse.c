#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	
	printf("Enter the value :");
	scanf("%d",&a);
	
	b=a/2;
	b=b*2;
	
	if(b==a)
	{
	    printf("%d is even ",a);	
	}
	else
	{
		printf("%d is odd",a);
	}
}
