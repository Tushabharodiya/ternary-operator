#include<stdio.h>
main()
{
	int a,b,c,d,e;
	
	printf("Enter Value A=");
	scanf("%d",&a);
	printf("Enter Value B=");
	scanf("%d",&b);
	printf("Enter Value C=");
	scanf("%d",&c);
	printf("Enter Value D=");
	scanf("%d",&d);
	printf("Enter Value E=");
	scanf("%d",&e);
	
	(a>b) ?(a>c) ? (a>d)? (a>e)?printf("A is max"):printf("D is max"):(d>e) ?printf("D is max"): printf("E is max"):
		(c>d)?(c>e)? printf("C is max"):printf("E is max"):(d>e)?printf("D is max"): printf("E is max")
	      :(b>c) ? (b>d)? (b>e)?printf("B is max"):printf("D is max"):(d>e) ?printf("D is max"): printf("E is max"):
		(c>d)?(c>e)? printf("C is max"):printf("E is max"):(d>e)?printf("D is max"): printf("E is max");
}