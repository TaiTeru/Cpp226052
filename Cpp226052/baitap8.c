#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main_baitap8() {
	// Nhap n va in ra tong cac so trong khoan tu 1 den n
	int n;
	
	printf("Nhap vao so n: \n");
	if (scanf("%d", &n) != 1 || n < 1) {
		printf("So n khong hop le");
		return;
	}
	else {
		int tong = 0;
		for (int i = 1; i <= n; i++) {
			tong += i;
		}
		printf("Tong trong khoan tu 1 toi %d la %d: \n",n, tong);
	}



}