#include<stdio.h>

main()
{
	int n,cube = 0;
	
	int *p;
	int *pa;
	
	p = &n;
	pa = &cube;
	
	printf("Enter Area Of Squre = ");
	scanf("%d",&n);
	
	p = &n;
	pa = &cube;
	cube = (*p)*(*p)*(*p);
	
	printf("\nArea Of cube = %d",*pa);
}


