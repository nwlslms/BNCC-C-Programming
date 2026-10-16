#include <stdio.h>

int main () {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d == %d: %d\n", A, B, (A == B));
	printf("%d > %d: %d\n", A, B, (A > B));
	printf("%d >= %d: %d\n", A, B, (A >= B));
	printf("%d <= %d: %d\n", A, B, (A <= B));
	printf("%d < %d: %d\n", A, B, (A < B));
	printf("%d != %d: %d\n", A, B, (A != B));
	int test = 1;
	printf("%d\n", ++test);
	printf("%d\n", ++test);
	printf("%d\n", --test);
	return 0;
}
