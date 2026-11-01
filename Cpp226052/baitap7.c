#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main_baitap7() {
	// Nhap n va in ra tat ca cac so chan trong khoan tu 1 den n
	int n;
	printf("Nhap vao so n: \n");
	if (scanf("%d", &n) != 1 || n < 1) {
		printf("So n khong hop le");
		return;
	}
	else {
		printf("Cac so chan trong khoan tu 1 toi %d la: \n", n);
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {
				printf("%d ", i);
			}
		}
	}



}