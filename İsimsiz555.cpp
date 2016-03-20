#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int ustel(int 2,int ust) {
	
	if(ust==0) return 1;
	return taban*ustel(taban,ust-1);
	
	
	
	
	
}
int main(int argc,char*argv[])
{
	int 2,y;
	
	printf("ust gir:");
	scanf("%d",&y);
	printf("sonuc=%d"ustel(2,y));
	getch();
	
}
