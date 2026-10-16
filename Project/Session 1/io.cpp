#include <stdio.h>

int main () {
	short tinggiGedung;
//	scanf("%hd", &tinggiGedung);
	int gaji;
//	scanf("%d", &gaji);
	long long rekening;
////	scanf("%lld", &rekening);
	scanf("%hd %d %lld", &tinggiGedung, &gaji, &rekening);
	float phi;
	scanf("%f", &phi);
	double sudut;
	scanf("%lf", &sudut);
	char ch;
	scanf(" %c", &ch);
	char nama[21];
	scanf(" %s", nama);
	char namaLengkap[21];
	scanf(" %[^\n]", namaLengkap);
	
	printf("gaji: %hd\ntinggiGedung: %d\nrekening: %lld\nphi: %.2f\nsudut: %.4lf\nch: %c\nnama: %s\nnamaLengkap: %s\n", tinggiGedung, gaji, rekening, phi, sudut, ch, nama, namaLengkap);
	return 0;
}
