#include <stdio.h>

int main () {
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(unsigned short));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(unsigned int));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long)); // Windows = 4 byte (int), Linux = 8 Byte (long long)
	printf("%d\n", sizeof(unsigned long));
	printf("%d\n", sizeof(unsigned long long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	float A = 9.8;
	int B = (int)A;
	printf("%d", B);
	return 0;
}
