#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	/*
	* Bai tap ve ATM
	*/
	int so_du_atm = 10000000;
	int mat_khau_sys = 1122;
	int mat_khau_user = 0;
	int dang_nhap_thanh_cong = 1, step = 1;
	char lua_chon;
	int so_tien_rut = 0;
	int so_lan_nhap = 0;

	while (1) {
		switch (step) {
			case 1:
				printf("Vui long nhap mat khau 4 so: ");
				scanf("%d", &mat_khau_user);
				if (mat_khau_user == mat_khau_sys) {
					step = 2;
				}
				else {
					step = 6;
				}
				break;
			case 2:
				printf("Vui long nhap so tien rut: ");
				scanf("%d", &so_tien_rut);
				step = 3;
				break;
			case 3:
				if (so_tien_rut <= so_du_atm) {
					step = 4;
				}
				else {
					printf("So tien qua lon so voi ATM hien co.Vui long nhap lai \n");
					step = 2;
				}
				break;
			case 4:
				so_du_atm -= so_tien_rut;
				printf("[THANH CONG] Ban da rut %d VND.\n", so_tien_rut);
				printf("So du con lai trong tai khoan: %d VND\n\n", so_du_atm);
				step = 5;
				break;
			case 5:
				printf("Chuong trinh da thoat.... ");
				return;
			case 6:
				so_lan_nhap++;
				printf("Mat khau sai! ");
				if (so_lan_nhap < 3) {
					printf("Ban co muon tiep tuc khong? (Bam y hoac Y de tiep tuc, phim khac de thoat): ");
					scanf(" %c", &lua_chon);
					if (lua_chon == 'y' || lua_chon == 'Y') {
						step = 1;
					}
					else {
						step = 5;
					}
				}
				else {
					printf("Ban da nhap sai qua 3 lan!\n");
					step = 5;
				}
				
				break;
	
		}
	}
	

} 