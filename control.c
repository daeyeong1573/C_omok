#include "오목.h"

void gamecontrol() {
	int Baduk_Board[20][20] = { 0 };
	int x = 0, y = 0;
	char Key;

	map();
	gotoxy(x, y);
	Stone();
	do {
		Key = getch();
		Erase_Stone(x, y);
		Key_Down(Baduk_Board, Key, &x, &y);
		printf(" ");
		Draw_Put_Stone(Baduk_Board);
		if (Win_Check(Baduk_Board))
			return 0;
		gotoxy(x, y);
		Stone();
	} while (Key != 27);		//아스키코드 ESC가 아닌동안 실행								
}
