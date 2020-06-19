//soal 9 : buat program menghitung volume bangun ruang bola//

#include <stdio.h>
#include <iostream>
using namespace std ;
	int main () {
	float phi = 3.14;
	float volume;
	float r;
	
	printf(" Nama : Zhehan Gustiyandi\n");
	printf(" NPM : 197006076\n");
	printf(" Kelompok : 4");
	printf("\n");
	printf("=============Program Menghitung volume bola================\n");
	printf("\n");
	printf("Masukan Jari-jari bola (cm): ");
	scanf("%f",&r);
	volume = (4/3 * phi * r * r *r);
	printf("Jadi volume bola adalah :  %.3f\n",volume);
	return 0;
}
