#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main_baitap4() {

	// Bai tap nhap vao 3 so nguyen a, b, c. Tim so lon nhat trong 3 so do
	int a, b, c;
	printf("Nhap vao 3 so nguyen a, b, c: ");
	if (scanf("%d %d %d", &a, &b, &c) != 3) {
		printf("a, b hoac c khong hop le");
	}
	else {
		int max = a;
		if (b > max) {
			max = b;
		}
		if (c > max) {
			max = c;
		}
		printf("So lon nhat trong 3 so a, b, c la: %d", max);
	}

}