#include "¿À¸ñ.h"

int check = 1;
int main(void) {
	while (1) {
		gamecontrol();
		gotoxy(0, 23);
		return 0;
	}
}

void Put_Stone(int Board[][20], int x, int y) {
	if (Board[y][x / 2] == 0) {
		if (check == 1) {
			Board[y][x / 2] = 1;
			check = 2;
		}

		else {
			Board[y][x / 2] = 2;
			check = 1;
		}
	}
}

void Stone() {
	if (check == 1)
		printf("¡Ü");
	else
		printf("¡Û");
}