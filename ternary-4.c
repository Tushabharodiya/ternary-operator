#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("Enter Value A=");
	scanf("%d",&a);
	printf("Enter Value B=");
	scanf("%d",&b);
	printf("Enter Value C=");
	scanf("%d",&c);
	printf("Enter Value D=");
	scanf("%d",&d);
	
	(a>b) ?(a>c)? (a>d)? printf("A is max"):printf("D is max"):(c>d) ? printf("C is max"): printf("D is max")
	      :(b>c)? (b>d)? printf("B is max"):printf("D is max"):(c>d) ? printf("C is max"): printf("D is max");
}