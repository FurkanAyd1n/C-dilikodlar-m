#include <stdio.h>
#include <conio.h>

int main()
int yukseklik,yaricap,alan,hacim,pi=3;
{
	printf("yukseklik giriniz:");
	scanf("%d" , &yukseklik);
	printf("yaricap giriniz:");
	scanf("%d",&yaricap);
	hacim=(3*yaricap*yaricap*yukseklik);
	alan=(3*2*yaricap*yukseklik+2*3*yukseklik*yukseklik);
	printf ("Silindirin alani:%d \nSilindirin hacmi:%d",alan,hacim);
	
	getch();
	return 0;
	
	
}
