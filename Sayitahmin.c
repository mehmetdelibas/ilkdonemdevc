#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int sayi,rastgeleSayi,kacinciTahmin=0,skor=10;
	srand(time(NULL));
	rastgeleSayi=(rand()%100)+1;
	printf("1-100 Arasinda rastgele bir sayi tuttum\n");
	printf("HADI TAHMIN ETT !!!\n");
	while(sayi!=-1)
	{
		printf("Tahmin sayin nedir ?");
		scanf("%d",&sayi);
		if(sayi==-1) break;
		if(sayi<1 || sayi>100)
		{
		printf("1-100 Arasi bir sayi demistim basta !!!");
		continue;
		}
		kacinciTahmin++;
		if(sayi==rastgeleSayi)
		{
			printf("Tebrikler %d. tahminde bildin. Skorun 10 uzerinden :%d",kacinciTahmin,skor-1);
			break;
		}
		else
		{
			if(sayi>rastgeleSayi) printf("Daha kucuk bir sayi girmelisin\n");
			else printf("Daha buyuk bir sayi girmelisin\n");
			skor--;
			
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
