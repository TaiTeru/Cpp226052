#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	/*
	* Dem so lan xuat hien.
	* In moi gia tri phan biet trong mang cung so lan xuat hien cua no
	* Khong dung mang phu
	* VD 2 3 2 5 3 2 7 5
	* 2 : 3 lan
	* 3 : 2 lan
	* 5 : 2 lan
	*/


	int n = 0;
	int a[] = { 2, 3, 2, 5, 3, 2, 7, 5 };
	
	int xuat_hien = 0;
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len; i++) {
		xuat_hien = 0;
		//Kiem tra truoc do da xuat hien chua
		for (int k = 0; k < i; k++) {
			if (a[k] == a[i]) {
				xuat_hien = 1;
				break;
			}
		}
		if (xuat_hien == 1) {
			continue;
		}
		int dem = 1;
		for (int j = i + 1; j < len; j++) {
			if (a[j] == a[i]) {
				dem++;
			}
		}
		printf("So %d xuat hien %d lan\n", a[i], dem);
	}

}

