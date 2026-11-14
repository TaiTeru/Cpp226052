#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	/*
* Bài 13. Menu quản lý danh sách số nguyên
* Tạo menu cho phép:
 1. Nhập mảng;
 2. Xuất mảng;
 3. Tìm max/min;
 4. Đếm số chẵn/lẻ;
 5. Sắp xếp tăng dần;
 6. Tìm kiếm x;
 0. Thoát.
 Menu lặp lại cho đến khi chọn 0. Không được xử lý mảng trước khi nhập.
*/
	int chon = 0;
	int a[100] = { 0 };
	int n = 0;
	int da_nhap = 0;


	do
	{

		printf("========= MENU ========= \n\n");
		printf("1. Nhap mang \n");
		printf("2. Xuat mang \n");
		printf("3. Tim max/min \n");
		printf("4. Dem so chan/le \n");
		printf("5. Sap xep tang dan \n");
		printf("6. Tim kiem x \n");
		printf("0. Thoat \n");
		printf("Nhap muc ban muon chon: \n"); scanf("%d", &chon);

		if (chon >= 2 && chon <= 6 && da_nhap == 0) {
			printf("Vui long chon muc 1 de nhap mang truoc!\n");
			continue;
		}

		switch (chon) {
			case 1:
			{
				printf("Nhap so luong phan tu : ", n); scanf("%d", &n);
				for (int i = 0; i < n; i++) {
					printf("a[%d] =", i);
					scanf("%d", &a[i]);
				}
				da_nhap = 1;
				break;
			}
				
			case 2:
			{
				for (int i = 0; i < n; i++) {
					printf("a[%d] = %d\n", i, a[i]);
				}
				printf("\n");
				break;
			}
			case 3:
			{
				int max = 0;
				int min = 0;
				max = a[0];
				min = a[0];
				for (int i = 1; i < n; i++) {
					if (a[i] > max) {
						max = a[i];
					}
					if (a[i] < min) {
						min = a[i];
					}
				}
				printf("Max la %d \n", max);
				printf("Min la %d \n", min);
			}
				break;
			case 4:
			{
				int so_chan = 0; int so_le = 0;
				
				for (int i = 0; i < n; i++) {
					if (a[i] % 2 == 0) {
						so_chan++;
					}
					else {
						so_le++;
					}
				
				}
				printf("So chan la %d \n", so_chan);
				printf("So le %d \n", so_le);
				
				break;
			 }
			case 5:
			{
				int temp = 0;
				for (int i = 0; i < n - 1;i++) {
					for (int j = i + 1; j < n; j++) {
						if (a[i] > a[j]) {
							temp = a[i];
							a[i] = a[j];
							a[j] = temp;
						}
					}
				}
				printf("Mang sau khi sap xep tang dan: ");
				for (int i = 0; i < n; i++) {
					printf("%d ", a[i]);
				}
				printf("\n");
				break;
			}
			case 6:
			{
				int x = 0;
				int tim_thay = 0;
				printf("Nhap vao gia tri x: \n");scanf("%d", &x);
				printf("Vi tri tim thay %d (chi so): ", x);
				for (int i = 0; i < n; i++) {
					if (a[i] == x){
						printf("%d ", i);
						tim_thay = 1;
					}
					
				}
				if (tim_thay == 0) {
					printf("Khong tim thay %d trong mang.", x);
				}
				printf("\n");
				break;
			}
			case 0:
			{
				printf("Da thoat chuong trinh.\n");
				break;
			}
				
			default:
			{
				printf("Lua chon khong hop le!\n");
				break;
			}
				

			}
		    
			
	} while (chon != 0);
}
