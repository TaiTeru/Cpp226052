#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main_baitap222() {

	// Bai tap nhap vao 1 so nguyen n, kiem tra n la so chan hay so le
	int n;
	printf("Nhap vao 1 so nguyen n: ");
	if (scanf("%d", &n) != 1) {
		printf("n khong hop le");
		return;
	}
	else if (n % 2 == 0) {
		printf("n la so chan");
	}
	else {
		printf("n la so le");
	}


}