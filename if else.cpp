#include <stdio.h>
int main()
{
 /*	int sayi;
	printf("bir sayi giriniz :"); scanf("%d",&sayi);
	
	if(sayi>0)
	{
		printf("pozitif bir sayi girdiniz");
		
	}
	
	else
	{
	 
	printf("negatif bir sayi girdiniz");
	
	
    }
	
	int s1,s2;
	printf("2 adet sayi giriniz :"); scanf("%d%d",&s1,&s2);
	if(s1>s2)
	{
		printf("%d,%d den buyuktur",s1,s2);
		
		
	}
	else
	printf("%d,%d den kucuktur",s1,s2);
	
	
	// bir koþula baðlý birden fazla durumun gerçekleþmesi elsif else if
	
	int yas;
	printf("Yasinizi giriniz :"); scanf("%d",&yas);
	
	if(yas<=7)
	{
		printf("cocuk");
	}
	else if(yas<=18)
	{
		printf("Genc");
	}
	else
	{
		printf("Yasli");
	}
	
	
	int secim;
	
	printf("C icin : 1\n");
	printf("C# icin : 2\n");
	printf("Oracle icin : 3\n\n");
	
	printf("Secim yapiniz :"); scanf("%d",&secim);
	
	if(secim==1)
	{
		printf("C esnek bir dildir...");
	}
	else if(secim==2)
	{
		printf("C# .Net'in Gözdesidir...");
	}
	else if(secim==3)
	{
		printf("Oracle en iyi veri tabani platformudur...");
	}
	else 
	{
		printf("Lutfen 1 ile 3 arasinda bir deger giriniz...");
	}
	
	
	int vize,final;
	float ort;
	printf("vize notunuz :");  scanf("%d",&vize);
	printf("final notunuz :"); scanf("%d",&final);
	
	//Ortalama = vize*100/40+final*100/60;
	ort=vize*0.4+final*0.6;
	if(ort>90 && ort<100)
	{
		printf(	"Not ortalamaniz %.2f Notunuz 'AA'",ort);
	}
	else if(ort>70 && ort<90)
	{
		printf("Not ortalamaniz %.2f Notunuz 'BB'",ort);
	}
	else if(ort>50 && ort<70)
	{
		printf("Not ortalamaniz %.2f Notunuz 'CC'",ort);
	}
	else if(ort>30 && ort<50)
	{
		printf("Not ortalamaniz %.2f Notunuz 'DD'",ort);
	}
	else 
	{
		printf("Not ortalamaniz %.2f Notunuz 'FF'",ort);
	}
	
	
	char cinsiyet;
	float boy;
	printf("Cinsiyetiniz [E/K]] :"); scanf("%c",&cinsiyet);
	printf("Boyunuz :"); scanf("%f",&boy);
	
	if((cinsiyet=='E') && boy>1.80)
	{
		printf("Cinsiyetiniz Erkek, Boyunuz %.2f 'Basket takimina alindiniz'",boy);
	}
	else if((cinsiyet=='K') && boy>1.70)
	{
	printf("Cinsiyetiniz Kiz, Boyunuz %.2f 'Basket takimina alindiniz'",boy);
    }
	else
	{
		printf("Basket takimina alinamadiniz");
	}
	*/
	
	//1-10 arasýnda ürün üretiliyorsa  ürün*5TL;
	//11-20 arasýnda ürün üretiliyorsa ürün*10TL;
	//21-30 ürün üretiliyorsa ürün*15Tl;
	
	int maas,adet,prim;
	printf("maasiniz :"); scanf("%d",&maas);
	printf("1 ayda ne kadar urun cikardiniz :"); scanf("%d",&adet);
	
	if(adet>=1 && adet<=10)
	{
		prim=adet*5;
		printf("aldiginiz prim %d TL  \ntoplam maasiniz %d",prim,prim+maas);
	}
	else if(adet>=11 && adet<=20)
	{
		prim=adet*10;
		printf("aldiginiz prim %d TL   \nToplam maasiniz %d",prim,prim+maas);
		
	}
	else if(adet>=21 && adet<=30)
	{
		prim=adet*15;
		printf("aldiginiz prim %d TL    \nToplam maasiniz %d",prim,prim+maas);
	}
	else 
	{
		printf("Lutfen 1-30 arasinda bir deger giriniz... ");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}









