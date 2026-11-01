#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main_baitap5() {

	// Bai tap nhap vao chi so dien tieu thu trong thang. Tinh tien dien theo quy tac
	// 0 - 50 kWh = 1.800d/kWh
	// 51 - 100 kWh = 2.000d/kWh
	// 101 - 200 kWh = 2.500d/kWh
	// Tren 200 kWh = 3.000d/kWh
	double kWh;
	double tien_dien;
	printf("Nhao vao chi so dien tieu thu trong thang : \n");
	if (scanf("%lf", &kWh) != 1) {
		printf("So kWh khong hop le");
		return;
	}
	else {
		if (kWh <= 50) {
			tien_dien = kWh * 1800;
		}
		else if (kWh <= 100) {
			tien_dien = (50 * 1800) + ((kWh - 50) * 2000);
		}
		else if (kWh <= 200) {
			tien_dien = (50 * 1800) + (50 * 2000) + ((kWh - 100) * 2500);
		}
		else {
			tien_dien = (50 * 1800) + (50 * 2000) + (100 * 2500) + ((kWh - 200) * 3000);
		}
		printf("Tong tien dien phai nop la: %.0lf VND\n", tien_dien);


	}



}