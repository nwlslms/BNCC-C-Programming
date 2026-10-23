#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("%d adalah bilangan genap", n);
		if (n < 0) {
			printf(" dan negatif\n");
		} else {
			printf(" dan positif\n");
		}
	} else {
		printf("%d adalah bilangan ganjil", n);
		if (n < 0) {
			printf(" dan negatif\n");
		} else {
			printf(" dan positif\n");
		}
	}
	return 0;
}
