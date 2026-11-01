#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main_bai11() {

	// Bai tap nhap vao 1 so nguyen n, kiem tra n la so duong, so am hay bang 0
	int n;
	printf("Nhap vao 1 so nguyen n: ");
	
	if (scanf("%d", &n) != 1) {
		printf("n khong hop le");
		return;
	}
	else if (n > 0) {
		printf("n la so duong");
	}
	else if (n < 0) {
		printf("n la so am");
	}
	else {
		printf("n bang 0");

	}

}