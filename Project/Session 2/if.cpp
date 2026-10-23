#include <stdio.h>

int main () {
	char cmd;
	printf("Apakah kamu sudah makan: ");
	scanf("%c", &cmd);
	if (cmd == 'Y') {
		printf("BAGUS!\n");
	} else if (cmd == 'N') {
		printf("MAKAN DULU SANA!\n");
	} else {
		printf("KAMU NGOMONG APA!\n");
	}
	
	int capek;
	printf("Kamu capek gak?: ");
	scanf("%d", &capek);
	printf("%s", (capek == '1') ? "Istirahat, ya!":"Semangat terus!");
	int statusIstirahat = (capek == 1) ? 1:0;
	printf("%s", (statusIstirahat == 1) ? "Dia istirahat!" : "Dia terjaga!\n");
	return 0;
}
