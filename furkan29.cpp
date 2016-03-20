#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int pi=3;
	int yaricap;
	int yukseklik;
	int alan;
	int hacim;
	 printf("silindirin yaricapi (r) : " );
	 scanf("%d", &yaricap);
	 printf ("silindirin yuksekligi (h): ");
	 scanf ("%d", &yukseklik);
	 
	 
	 alan=pi*2*yaricap*yukseklik;
	 hacim=pi*yaricap*yaricap*yukseklik;
	 printf("\n Silindirin alani %d\n Silindirin hacmi %d  ",alan,hacim);
	 
	 system ("PAUSE");
	return 0; 
	 
}
