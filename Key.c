#include "오목.h"
void Key_Down(int Board[][20], char key, int* x, int* y) {
	switch (key) {
	case 72:					//위쪽 방향키							
		if (*y - 1 < 0)
			break;
		else
			*y -= 1;
		break;
	case 80:					//아래 방향키							
		if (*y + 1 > 18)
			break;
		else
			*y += 1;
		break;
	case 75:						//왼쪽 방향키						
		if (*x - 2 < 0)
			break;
		else
			*x -= 2;
		break;
	case 77:					//오른쪽 방향키							
		if (*x + 2 > 36)
			break;
		else
			*x += 2;
		break;
	case 32:								//스페이스바				
		Put_Stone(Board, *x, *y);
		break;
	default:
		break;
	}
}