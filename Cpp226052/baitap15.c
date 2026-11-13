#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	/*
	* Bai tap mang tim so nguyen to
	*/
	int n = 0;
	int a[100];
	int count = 0;
	printf("Nhap vao n: \n"); scanf("%d", &n);
	if (n < 0 || n > 100) {
		printf("Khong hop le");
		return;
	}
	for (int i =0; i < n; i++) {
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n / 2; i++) {
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
	printf("Mang sau khi dao nguoc: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

