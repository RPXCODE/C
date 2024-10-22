#include <stdio.h>

int main(){
	int makanan_pertama,makanan_kedua,makanan_ketiga;
	int total;
	
	printf("masukkan kalori makanan pertama :");
	scanf("%d",&makanan_pertama);
	
	printf("masukan kalori makanan kedua :");
	scanf("%d",&makanan_kedua);
	
	printf("masukan kalori makanan ketiga :");
	scanf("%d",&makanan_ketiga);
	
	total = makanan_pertama+makanan_kedua+makanan_ketiga;
	
	printf("total kalori : %d\n",total);
	if(!(total>2000)) {
		printf("total kalori tidak melebihi batas harian");
		
	} else
	{
		printf("total kalori melebihi batas harian");
	}
}