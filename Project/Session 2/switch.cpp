#include <stdio.h>

int main () {
	int hari;
	printf("Hari apa yang kamu pilih [1-7]: ");
	scanf("%d", &hari);
	
	switch(hari) {
		case 1:
			printf("Hari senin\n");
			break;
		case 2:
			printf("Hari selasa\n");
			break;
		default:
			printf("Tidak ada hari %d\n", hari);
			break;
	}
	return 0;
}
