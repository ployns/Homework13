#include<stdio.h>
int main()
{
	int num;
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			if (i >= j ) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}