#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	/*
	*	Tim uoc chung lon nhat cua a,b.
	*/

	int a = 0; int b = 0;
	int ucln = 1;
	int so_nho_hon = 0;
	printf("Nhap vao a: \n"); scanf("%d", &a);
	printf("Nhap vao b: \n"); scanf("%d", &b);
	if (a <= 0 || b <= 0) {
		printf("Vui long nhap hai so nguyen duong lon hon 0!\n");
		return;
	}
	so_nho_hon = (a < b) ? a : b;

	for (int i = 1; i <= so_nho_hon; i++) {
		if (a % i == 0 && b % i == 0) {
			ucln = i;
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);


}
