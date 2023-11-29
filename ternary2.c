#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter Value A=");
	scanf("%d",&a);
	printf("Enter Value B=");
	scanf("%d",&b);
	
	(a>b) ? printf("A is maximum"): printf("B is maximum");
}