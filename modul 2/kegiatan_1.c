#include <stdio.h>


int main() {
    double jari2,luasO,kelilingO;
    
    
    printf("masukan jari jari lingkaran:");
    scanf("%lf",&jari2);
    

    
    luasO = 3.14159 * jari2 * jari2;
    kelilingO = 2 * 3.14159 * jari2;

    printf("luas lingkaran: %.2lf\n",luasO);
    printf("keliling lingkaran: %.2lf",kelilingO);
	
    return 0;
	
	}
