#include "¿À¸ñ.h"

void Draw_Put_Stone(int Board[][20]) {
	int i;
	int j;
	for (i = 0; i < 20; i++) {
		for (j = 0; j < 20; j++) {
			if (Board[j][i] == 1) {
				gotoxy(i * 2, j);
				printf("¡Ü");
			}

			else if (Board[j][i] == 2) {
				gotoxy(i * 2, j);
				printf("¡Û");
			}
		}
	}
}