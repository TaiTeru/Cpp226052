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
	for (int i = 0; i < n; i++) {
		int so_nguyen_to = 1;
		if (a[i] < 2) {
			printf("Khong phai so nguyen to");
			so_nguyen_to = 0;
		}
		else {
			for (int j = 2; j <= a[i] / 2; j++) {
				if (a[i] % j == 0) {
					so_nguyen_to = 0;
					break;
				}
			}
		}
		
		if (so_nguyen_to == 1) {
			count++;
			printf("So nguyen to %d\n", a[i]);
		}
	}
	if (count == 0) {
		printf("So luong la 0");
	}
	else {
		printf("So luong %d", count);
	}
	
}

