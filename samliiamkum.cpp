#include<stdio.h>
int main()
{
	int r,h,d,sp;
	printf("Enter height:\n");
	scanf("%d",&h);
     
	for(r=1;r<=h-1;r++)
	{
		for(d=1;d<=r;d++)
			printf("*");
		for(sp=1;sp<=2*(h-r);sp++)
			printf(" ");
		putchar('\b');
		for(d=r;d>=1;d--)
			printf("*");
		printf("\n");
		
	}
       
	for(r=h;r>=1;r--)
	{
		for(d=1;d<=r;d++)
			printf("*");
		for(sp=1;sp<=2*(h-r);sp++)
			printf(" ");
		putchar('\b');
		for(d=r;d>=1;d--)
			printf("*");
			printf("\n");
		
	}
	return 0;
}
