#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c;
	//printf("Nhap ki tu bat ky: ");
	//scanf("%c", &c);
	//printf("he thap phan: %d\n", c);
	//printf("he thap luc phan: %x\n", c);

	// In tong hieu tich

	int a = 0;
	int b = 0;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	printf("Tong: %d \n", a + b);
	printf("Hieu: %d \n", a - b);
	printf("Tich: %d \n", a * b);
	printf("Thuong: %f \n", (float)a / b);

}