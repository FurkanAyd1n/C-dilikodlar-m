#include <stdio.h>
int main()
{
   /*	switch(değişken)
	{
		case durum1: işlemler ; break;     not:getchar fonksiyonu klavyeden girilen herhangi bir değeri bellekte tutmaya yarar(klavyeden girilen tek bir karakteri okur)
		case durum2: işlemler ; break;
		case durum3: işlemler ; break;
		.
		.
		.
		case durumN: işlemler ; break;
		
		default : işlemler ; break;
	}
	
	int secim;
	 surayagit: printf("\n1-5 arasinda bir sayi giriniz :"); scanf("%d",&secim);
	
	switch(secim)
	{
		case 1: printf("1 e bastiniz "); break;
		case 2: printf("2 e bastiniz "); break;
		case 3: printf("3 e bastiniz "); break;
		case 4: printf("4 e bastiniz "); break;
		case 5: printf("5 e bastiniz "); break;
		default : printf("Lutfen 1-5 arasi bir sayi giriniz"); break;
		
	}
	goto surayagit;
	
	char karakter;
	printf("bir karakter giriniz :"); scanf("%c",&karakter);
	//karakter=getchar();
	switch(karakter)
	{
		case 'a': printf("a harfine bastiniz"); break;
		case 'b': printf("b harfine bastiniz"); break;
		case 'c': printf("c harfine bastiniz"); break;
		default : printf("yanlis bir deger girdiniz"); break;
		
	
	int secim;
	printf("Akrep burcu icin : 1\n");
  	printf("Koc burcu icin   : 2\n");
	printf("Yay burcu icin   : 3\n\n");
    tekrar: printf("Secim yapiniz :"); scanf("%d",&secim);
    
    switch(secim)
    {
         case 1: printf("Bugün alisveris yapmak size iyi gelecektir"); break;
         case 2: printf("Cok kararsizsiniz"); break;
         case 3: printf("Dost canlisi bir kisiliginiz var"); break;
         default : printf("Yanlis bir deger girdiniz \a\a\a"); goto tekrar;
    
	
	}
	
	
	int secim,s1,s2; float sonuc;
	printf("Toplama icin :1\n");
	printf("Cikarma icin :2\n");
	printf("Carpma icin :3\n");
	printf("Bolme icin :4\n\n");
	printf("Secim yapiniz :"); scanf("%d",&secim);
	
	//printf("2 adet sayi giriniz :"); scanf("%d%d",&s1,&s2);
	
	switch(secim)
	{
		case 1:
		{
			    printf("2 adet sayi giriniz :"); scanf("%d%d",&s1,&s2);
				sonuc=s1+s2; break;
		}
		case 2:
		{
			    printf("2 adet sayi giriniz :"); scanf("%d%d",&s1,&s2);
			    sonuc=s1-s2; break;
		}
		case 3:
		{
			printf("2 adet sayi giriniz :"); scanf("%d%d",&s1,&s2);
			sonuc=s1*s2; break;
		}
		case 4:
		{
			printf("2 adet sayi giriniz :"); scanf("%.1f%.1f",&s1,&s2);
			sonuc=s1/s2; break;
		} 
		default : printf("Yanlis bir secim yaptiniz"); break;
		  
	}
	printf("sonuc :%.3f,sonuc");
	*/
	/* 1-3 Yay,koç,oğlak
    4-7 akrep,ikizler,balık
	7-10 yengeç,terazi,kova
	int deger,secenek;
	enbasagit : printf("1-10 arasinda bir deger giriniz :"); scanf("%d",&deger);
	if(deger>=1 && deger<=3)	
	{
		printf("yay icin : 1\n");
		printf("koc icin : 2\n");
		printf("oglak icin :3\n\n");
		tekrar1 : printf("Seccim yapiniz :"); scanf("%d",&secenek);
		switch(secenek)
		{
			case 1: printf("yay burcu dost canlisidir"); break;
			case 2: printf("Koc burcu sadiktir"); break;
			case 3: printf("oglak burcu sevimlidir"); break;
			default : printf("1-3 arasinda bir deger  giriniz"); goto tekrar1;
		}
	}
	else if(deger>=4 && deger<=7)
	{
		printf("akrep icin     : 1\n");
		printf("ikizler icin   : 2\n");
		printf("balik icin     : 3\n\n");
		tekrar2 : printf("Secim yapiniz :"); scanf("%d",&secenek);
		switch(secenek)
		{
			case 1: printf("akrep burcu dost canlisidir"); break;
			case 2: printf("koc burcu dost canlisidir "); break;
			case 3: printf("balik burcu sevimlidir"); break;
			default : printf("1-3 arasinda bir deger giriniz"); goto tekrar2;
		}
	}
	else if(deger>=8 && deger<=10)
	{
		printf("yengec icin     : 1\n");
		printf("terazi icin     : 2\n");
		printf("kova icin       : 3\n\\n");
		tekrar3 : printf("Secim yapiniz :"); scanf("%d",&secenek);
		
		switch(secenek)
		{
			case 1: printf("yengec burcu dost canlisidir"); break;
			case 2: printf("terazi burcu sadiktir"); break;
			case 3: printf("kova burcu sevimlidir"); break;
			default : printf("1-3 arasinda bir deger giriniz"); goto tekrar3;
		}
	}
	else
	{
		printf("1-10 arasinda bir deger giriniz"); goto enbasagit;
    }
    */
    
    int secim,secim2;
    
	printf("Dort islem icin                   :1\n");
	printf("Ozel matematik fonksiyonlari icin :2\n\n");
	printf("secim yapiniz :"); scanf("%d",&secim);
	switch(secim)
	{
		case 1:
			{
				printf("Toplama icin  :1\n");
				printf("Cikarma icin  :2\n");
				printf("Carpma icin   :3\n");
				printf("Bolme icin    :4\n");
			secimyap :	printf("Secim yapiniz :"); scanf("%d",&secim2)
				
				if(secim2==1)
				{
					printf("2 adet sayi gi=riniz :"); scanf("%d%d",&s1,&s2);
					printf("Toplam : %d",s1+s2);
				} 
				else if(secim2==2)
				{
					printf("2 adet sayi giriniz :"); scanf("%d%d",&s1,&s2)
					printf("Fark : %d",s1-s2);
				}
				else if(secim2==3)
				{
				printf("2 adet sayi giriniz :"); scanf("%d%d",&s1,&s2);
				printf("Carpim: %d",s1*s2);	
				}
				else if(secim2==4)
				{
					printf("2 adet sayi giriniz :"); scanf("%d%d",&s1,&s2);
					printf("Bolme :%.1f",(float)s1/(float)s2);
				}
				else
				{
					printf("1-4 arasinda bir deger giriniz"); goto secimyap:;
				}
				
					
				
			}
		
	}
	
	
	
	
	
}
