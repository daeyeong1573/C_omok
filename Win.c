#include "¿À¸ñ.h"
int Win_Check(int Board[][20]) {
	int i;
	int j;
	for (i = 2; i < 18; i++) {
		for (j = 0; j < 20; j++) {
			if (Board[j][i - 2] == 1 && Board[j][i - 1] == 1 && Board[j][i] == 1 && Board[j][i + 1] == 1 && Board[j][i + 2] == 1) {
				gotoxy(0, 22);
				printf("*** ¹éµ¹ ½Â¸® ***");
				getch();
				return 1;
			}
			else if (Board[j][i - 2] == 2 && Board[j][i - 1] == 2 && Board[j][i] == 2 && Board[j][i + 1] == 2 && Board[j][i + 2] == 2) {
				gotoxy(0, 22);
				printf("*** Èæµ¹ ½Â¸® ***");
				getch();
				return 1;
			}

			else if (Board[i - 2][j] == 1 && Board[i - 1][j] == 1 && Board[i][j] == 1 && Board[i + 1][j] == 1 && Board[i + 2][j] == 1) {
				gotoxy(0, 22);
				printf("*** ¹éµ¹ ½Â¸® ***");
				getch();
				return 1;
			}
			else if (Board[i - 2][j] == 2 && Board[i - 1][j] == 2 && Board[i][j] == 2 && Board[i + 1][j] == 2 && Board[i + 2][j] == 2) {
				gotoxy(0, 22);
				printf("*** Èæµ¹ ½Â¸® ***");
				getch();
				return 1;
			}
		}
	}

	for (i = 2; i < 18; i++) {
		for (j = 2; j < 18; j++) {
			if (Board[j - 2][i - 2] == 1 && Board[j - 1][i - 1] == 1 && Board[j][i] == 1 && Board[j + 1][i + 1] == 1 && Board[j + 2][i + 2] == 1) {
				gotoxy(0, 22);
				printf("*** ¹éµ¹ ½Â¸® ***");
				getch();
				return 1;
			}
			else if (Board[j - 2][i - 2] == 2 && Board[j - 1][i - 1] == 2 && Board[j][i] == 2 && Board[j + 1][i + 1] == 2 && Board[j + 2][i + 2] == 2) {
				gotoxy(0, 22);
				printf("*** Èæµ¹ ½Â¸® ***");
				getch();
				return 1;
			}

			else if (Board[j + 2][i - 2] == 1 && Board[j + 1][i - 1] == 1 && Board[j][i] == 1 && Board[j - 1][i + 1] == 1 && Board[j - 2][i + 2] == 1) {
				gotoxy(0, 22);
				printf("*** ¹éµ¹ ½Â¸® ***");
				getch();
				return 1;
			}
			else if (Board[j + 2][i - 2] == 2 && Board[j + 1][i - 1] == 2 && Board[j][i] == 2 && Board[j - 1][i + 1] == 2 && Board[j - 2][i + 2] == 2) {
				gotoxy(0, 22);
				printf("*** Èæµ¹ ½Â¸® ***");
				getch();
				return 1;
			}
		}
	}
	return 0;
}