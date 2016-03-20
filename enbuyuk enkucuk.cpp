#include <stdio.h>


int main()
{
	int i = 1; // dongu sayaci
	int aktifsayi = 0;
	int enkucuk = 2147483646;  // en kucuk sayi tutulaca
	int enbuyuk = -2147483647; // en buyuk sayi tutulaca
	
	// sayilari oku:
	do
	{
		printf("%d. sayi:",i);
		scanf("%d", &aktifsayi);
		
		if (aktifsayi == -1) break; // sayi girisi bitti
        if (aktifsayi < enkucuk) enkucuk = aktifsayi;
        if (aktifsayi > enbuyuk) enbuyuk = aktifsayi;
        
        i++;
        } while (aktifsayi != -1);
        
        // en buyuk ve en kucugu yazdir:
        printf("\n\nen buyuk: %d\n", enbuyuk);
        printf("en kucuk: %d", enkucuk);
	
	 return 0;
	
}




