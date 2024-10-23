#include <stdio.h>

int main()
{
	int a,b;
	printf("masukan dua angka :");
	scanf("%d %d", &a, &b);
	
	int sum = a + b;
	printf("penjumlahan: %d\n", sum);
	
	int difference = a - b;
	printf("pengurangan: %d\n",difference);
	
	int product = a * b;
	printf("perkalian : %d\n", product);
	
	if(b != 0){
		float division = (float)a / b;
		printf("pembagian: %2f\n",division);
	} else{
		printf("Eror: pembagian dengan nol\n");
	}
	
	return 0;
		
}
