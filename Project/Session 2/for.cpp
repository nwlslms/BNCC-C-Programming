#include <stdio.h>

int main () {
	for(int i = 0; i < 100; i++) {
		if (i % 2 == 1) {
			continue;
		} else if (i == 88){
			break;
		}
		printf("%d, ", i);
	}
	printf("\n\n");
	
	for(int baris = 0; baris < 5; baris++) {
		for(int bintang = 0; bintang <= baris; bintang++) {
			printf("* ");
		}
		printf("\n");
	}
//	int i = 0;
//	while(i < 0) {
//		printf("%d, ", i);
//		i++;
//	}
//	printf("\n\n");
//	i = 0;
//	do {
//		printf("%d, ", i);
//		i++;
//	} while (i < 0);
	return 0;
}
