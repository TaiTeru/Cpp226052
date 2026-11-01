#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main_baitap6() {
// Tao menu bang switch
	int n, a, b;

	printf("======= MENU ========\n");
	printf("1. Cong\n");
	printf("2. Tru\n");
	printf("3. Nhan\n");
	printf("4. Chia\n");
	printf("=====================\n\n");
	printf("Nhap vao 2 so a va b: \n");

	if (scanf("%d %d", &a, &b) != 2) {
		printf("So a hoac b khong hop le!\n");
		return;
	}
	printf("Nhap vao so menu : ");

	if (scanf("%d", &n) != 1) {
		printf("So menu khong hop le");
		return;
	}
	else {
		switch (n) {
			case 1:
				printf(" Ket qua %d + %d = %d ", a, b, a + b);
				break;
			case 2:
				printf(" Ket qua %d - %d = %d ", a, b, a - b);
				break;
			case 3:
				printf(" Ket qua %d * %d = %d ", a, b, a * b);
				break;
			case 4:
				if (b == 0) {
					printf("Khong the chia cho so 0!\n");
				}
				else {
					printf(" Ket qua %d / %d = %.1f ", a, b, (double)a / b);
					
				}
				break;
			default:
				printf("Lua chon menu khong hop le! Vui long chi chon tu 1 den 4.\n");
				break;
        


					
				
		}
		


	}


}