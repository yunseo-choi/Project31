#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int dump;
	int num = 0;

	printf("��ȯ�� �� ������ �Է��ϼ���. >> ");
	scanf_s("%d %d", &x,&y);

	printf("�Է��� �� �� : a = %d and b = %d\n", x, y);

	printf("�ӽ� ���� ���   �̿���[1]");
	printf("������ ��������    ��ȯ ���[2]");
	printf("������ ���������� ��ȯ ���[3]");
	printf("XOR ������ ^       �̿� ���[4]");

	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >>");
	scanf_s("%d", &num);
	if (num == 1) {
		dump = x;
		x = y;
		y = dump;
	}
	else if (num == 2) {
		x = x + y;
		y = x - y; 
		x = x - y;
	}
	else if (num == 3) {
		x = x * y;
		y = x / y;
		x = x ^ y;
	}
	else if (num == 4) {
		x = x ^ y;
		y = x / y;
		x = x ^ y;
	}
	
	printf("��ȯ�� �� ��: a = %d and b = %d", x, y);

	

	
	
	
	
	
	}