#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int deger,rnd,tahmin;
	//char secim;
	int secim;
	do
	{
	int sayac = 0;
	printf("*************************************************************************\n");
	printf("Sistemimiz 1-x arasinda rastgele sayi secicektir x degerinizi giriniz : ");
	scanf("%d",&deger);
	
	rnd = rand() % deger + 1;
	
	printf("\n");
	do
	{
		sayac++;
	printf("Tahminizi giriniz : ");
	scanf("%d",&tahmin);
	
	if(rnd<tahmin)
	{
		printf("Tahmininz fazla buyuktur \n");
		printf("\n");
	}
	else if(rnd>tahmin)
	{
		printf("Tahmininz fazla kucuktur\n");
		printf("\n");
	}
	else 
	{
		printf("%d. denemenizde dogru tahmin ettiniz TEBRIKLER\n",sayac);
		printf("\n");
		printf("Tekrar oynamak ister misiniz E=1/H=2  : ");
		scanf("%d",&secim);
		//scanf("%c",&secim);
		printf("\n");
	}
}while(rnd != tahmin);
}while(secim != 2);
//}while(secim == 'E');
printf("Oyundan cikilmistir\n");
return 0;
}
