#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main_baitap3() {

	// Bai tap nhap vao 2 so nguyen a, b. Tim va in ra so lon nhat trong 2 so a, b
	int a, b;
	printf("Nhap vao 2 so nguyen a, b: ");
	if (scanf("%d %d", &a, &b) != 2) {
		printf("a hoac b khong hop le");
	}
	else if (a > b) {
		printf("So lon nhat trong 2 so a, b la: %d", a);
	}
	else {
		printf("So lon nhat trong 2 so a, b la: %d", b);
	}

}