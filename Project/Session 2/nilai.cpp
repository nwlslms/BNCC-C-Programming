#include <stdio.h>
#include <stdlib.h>
int main () {
	char cmd;
	do {
		system("cls");
		printf("===== MENU =====\n1. Input nilai\n2. Keluar\n>> ");
		scanf(" %c", &cmd);
		switch(cmd) {
			case '1':
				int nilai;
				printf("Masukkan nilai: ");
				scanf("%d", &nilai);
				char grade;
				if (nilai > 90) {
					grade ='A';
				} else if (nilai > 80) {
					grade = 'B';
				} else if (nilai > 75) {
					grade = 'C';
				} else if (nilai > 60) {
					grade = 'D';
				} else {
					grade = 'E';
				}
				printf("Grade: %c\n", grade);
				system("PAUSE");
				break;
			case '2':
				printf("PROGRAM SELESAI!\n");
				system("PAUSE");
				break;
			default:
				printf("Masukkan input yang sesuai!\n");
				system("PAUSE");
				break;
		}
	} while (cmd != '2');
	return 0;
}
