#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(){
	int bit;
	int x;	
	int y;
	do {
		printf("          [1] ��Ʈ AND(&)\n     ");
		printf("          [2] ��Ʈ OR(|)\n       ");
		printf("          [3] ��Ʈ XOR(^)\n      ");
		printf("          [4] ��Ʈ COMPLEMENT(~)\n     ");
		printf("          [0] ���� (stop)            ");

		puts("");
		puts("");
		puts("");

		printf("�� ���� �� �ϳ��� �����ϼ���. >>");
		scanf_s("%d", &bit);
		puts("");

		if (bit == 0)
		{
			printf("�����մϴ�.\n");
			break;
		}




		if (bit == 1)
		{
			printf("��Ʈ ������ �� ���� �Է� >>  ");
			scanf_s("%d %d", &x, &y);
			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x >> i) & 1) ? '|' : '0');
			}
			printf("    %d\n", x);
			puts("");
			puts("");
			puts("");
			printf("y = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((y >> j) & 1) ? '1' : '0');
			}
			printf("    %d\n", y);
			puts("");
			puts("");
			puts("");

			printf("x & y = ");
			int z = x & y;
			for (int t = 31; t >= 0; t--)
			{
				printf("");
			}
		}
				if (bit == 2)
				{
				printf("��Ʈ ������ �� ���� �Է� >>  ");
				scanf_s("%d %d", &x, &y);
				printf("x = ");
				for (int i = 31; i >= 0; i--)
				{
					printf("%c", ((x >> i) & 1) ? '|' : '0');
				}
				printf("    %d\n", x);
				puts("");
				puts("");
				puts("");
				printf("y = ");
				for (int j = 31; j >= 0; j--)
				{
					printf("%c", ((y >> j) & 1) ? '1' : '0');
				}
				printf("    %d\n", y);
				puts("");
				puts("");
				puts("");

				printf("x | y = ");
				int z = x | y;
				for (int t = 31; t >= 0; t--)
				{
					printf("");
				}
				}
				if (bit == 3)
				{
					printf("��Ʈ ������ �� ���� �Է� >>  ");
					scanf_s("%d %d", &x, &y);
					printf("x = ");
					for (int i = 31; i >= 0; i--)
					{
						printf("%c", ((x >> i) & 1) ? '1' : '0');
					}
					printf("    %d\n", x);
					puts("");
					puts("");
					puts("");
					printf("y = ");
					for (int j = 31; j >= 0; j--)
					{
						printf("%c", ((y >> j) & 1) ? '1' : '0');
					}
					printf("    %d\n", y);
					puts("");
					puts("");
					puts("");

					printf("x ^ y = ");
					int z = x ^ y;
					for (int t = 31; t >= 0; t--)
					{
						printf("%c", ((y >> t) & 1) ? '1' : '0');
						
					}
					printf("     %d\n", z);
				}
				if (bit == 4)
				{
					printf("��Ʈ ������ �� ���� �Է� >>  ");
					scanf_s("%d", &x);
					printf("x = ");
					for (int i = 31; i >= 0; i--)
					{
						printf("%c", ((x >> i) & 1) ? '1' : '0');
					}
					printf("    %d\n\n", x);
					printf("x= ");
					int z = ~x;
					for (int t = 31; t >= 0; t--)
					{
						printf("%c", ((z >> t) & 1) ? '1' : '0');
					}
					printf("    %d\n\n\n", z);

				}

	}while (1);
}