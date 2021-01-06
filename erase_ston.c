#include "¿À¸ñ.h"

void Erase_Stone(int x, int y) {
	gotoxy(x, y);
	if (x == 0 && y == 0)
		printf("¦£");
	else if (x == 36 && y == 0)
		printf("¦¤");
	else if (x == 0 && y == 18)
		printf("¦¦");
	else if (x == 36 && y == 18)
		printf("¦¥");
	else if (x == 0)
		printf("¦§");
	else if (y == 0)
		printf("¦¨");
	else if (x == 36)
		printf("¦©");
	else if (y == 18)
		printf("¦ª");
	else
		printf("¦«");
}
