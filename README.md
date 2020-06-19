# ASLTRUK
soal dan jawaban soal uas alstruk

//soal 1 : buat program menghitung volume bangun ruang bola//

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

// soal 4 : perbaiki kode dibawah ini sehingga menghasilkan program menghitung biaya panggilan dengan benar//

#include <stdlib.h>
#include <stdio.h>

int main(){
	int jamA, jamB, menitA, menitB, detikA, detikB, waktuA, waktuB, biaya, detik;
	
	printf(" Nama : Zhehan Gustiyandi\n");
	printf(" NPM : 197006076\n");
	printf(" Kelompok : 4");
	printf("\n");
	printf("\n");
	printf("WAKTU PANGGILAN AWAL \n");
	printf("masukan waktu memulai panggilan (jam) : ",jamA);
	scanf("%i",&jamA);
	printf("masukan waktu memulai panggilan (menit) : ",menitA);
	scanf("%i",&menitA);
	printf("masukan waktu memulai panggilan (detik): ",detikA);
	scanf("%i",&detikA);
	printf("\n");
	
	printf("WAKTU PANGGILAN AKHIR\n");
	printf("masukan waktu mengakhiri panggilan (jam) : ",jamB);
	scanf("%i",&jamB);
	printf("masukan waktu mengakhiri panggilan (menit) : ",menitB);
	scanf("%i",&menitB);
	printf("masukan waktu mengakhiri panggilan (detik): ",detikB);
	scanf("%i",&detikB);
	printf("\n");
	
	waktuA = ((jamA*3600)+(menitA*60)+detikA);
	waktuB = ((jamB*3600)+(menitA*60)+detikB);
	detik = (waktuA - waktuB);
	biaya = (detik/30*700);
	
	printf("Lama waktu bicara anda adalah  %d jam  %d menit  %d detik \n",(jamB-jamA),(menitB-menitA),(detikB-detikA));
	printf("Jadi biaya yang harus dikeluarkan adalah :Rp.%i \n",biaya);
	
	system("pause");
	return 0;
}
