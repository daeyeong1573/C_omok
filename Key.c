#include "����.h"
void Key_Down(int Board[][20], char key, int* x, int* y) {
	switch (key) {
	case 72:					//���� ����Ű							
		if (*y - 1 < 0)
			break;
		else
			*y -= 1;
		break;
	case 80:					//�Ʒ� ����Ű							
		if (*y + 1 > 18)
			break;
		else
			*y += 1;
		break;
	case 75:						//���� ����Ű						
		if (*x - 2 < 0)
			break;
		else
			*x -= 2;
		break;
	case 77:					//������ ����Ű							
		if (*x + 2 > 36)
			break;
		else
			*x += 2;
		break;
	case 32:								//�����̽���				
		Put_Stone(Board, *x, *y);
		break;
	default:
		break;
	}
}