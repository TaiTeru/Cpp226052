#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	/*
	*	Mo phong ATM voi so tien nhap la boi so cua 50.000 VND
	*/

	int so_tien = 0;
	int sl_500k = 0; int sl_200k = 0; int sl_100k = 0; int sl_50k = 0;
	int so_du = 0;
	
	printf("Nhap vao so tien muon rut: "); scanf("%d", &so_tien);

	if (so_tien <= 0 || so_tien % 50000 != 0) {
		printf("So tien khong hop le!\n");
		return;
	}	 

	 if (so_tien >= 1000000) {
		 sl_500k = 1;
		 so_du = so_tien - 500000;
		 
	 }
	 else {
		 sl_500k = so_tien / 500000;
		 so_du = so_tien % 500000;
	 }
	 if (so_tien == 1000000) {
		 sl_200k = 1;
		 so_du = so_du - 200000;

	 }
	 else {
		 sl_200k = so_du / 200000;
		 so_du = so_du % 200000;
	 }
	 if (so_tien == 1000000) {
		 sl_100k = 2;
		 so_du = so_du - 200000;

	 }
	 else {
		 sl_100k = so_du / 100000;
		 so_du = so_du % 100000;
	 }
	 sl_50k = so_du / 50000;

	 printf("So to 500k: %d\n", sl_500k);
	 printf("So to 200k: %d\n", sl_200k);
	 printf("So to 100k: %d\n", sl_100k);
	 printf("So to 50k: %d\n", sl_50k);
	


}
