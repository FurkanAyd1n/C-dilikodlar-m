#include <stdio.h>
#include <conio.h>

int main()


{
	
	int i,j,n,c,k,alan;
	
	printf("limit kenar uzunlugu");
	scanf("%d",&n);
	printf("\n\n");
	alan=n;
	for(i=0;i<n;i++)
	
	{
		c=1;
		for(k=alan;k>=0;k--)
		printf(" ");
		
		alan--;
		for(j=0;j<=i;j++)
		{
			printf("%d",c);
			c=(c*(i-j)/(j+1));
			
		}
		printf("\n");
		}
		getch();
		return 0;
}


	
