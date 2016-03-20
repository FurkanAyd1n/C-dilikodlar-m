#include <stdio.h>
int main(void)
{
	
	int altsinir,ustsinir;
	
	
	printf("alt siniri giriniz");
	scanf("%d",& altsinir);
	
	
	printf("ust sinir giriniz");
	scanf("%d",& ustsinir);
	while(altsinir<=ustsinir)
	{
		printf ("%d",altsinir);
		altsinir=altsinir+1;
	}
	printf("\n Bu kadar! \n");
	
	
}
