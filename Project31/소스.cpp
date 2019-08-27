#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int dump;
	int num = 0;

	printf("교환할 두 정수를 입력하세요. >> ");
	scanf_s("%d %d", &x,&y);

	printf("입력한 두 수 : a = %d and b = %d\n", x, y);

	printf("임시 저장 장소   이용방법[1]");
	printf("덧셈과 뺄셈으로    교환 방법[2]");
	printf("곱셈과 나눗셈으로 교환 방법[3]");
	printf("XOR 연산자 ^       이용 방법[4]");

	printf("위 교환 방법 중 한 번호를 선택하세요. >>");
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
	
	printf("교환한 두 수: a = %d and b = %d", x, y);

	

	
	
	
	
	
	}