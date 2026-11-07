#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	/*
	*	Tim boi chung nho nhat cua a,b.
	*/

	int a = 0; int b = 0;
	int ucln = 0;
	int bcnn = 0;
	printf("Nhap vao a: \n"); scanf("%d", &a);
	printf("Nhap vao b: \n"); scanf("%d", &b);
	int goc_a = a; int goc_b = b;
	while (a != 0 && b != 0) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	ucln = (a == 0) ? b : a;
	bcnn = (goc_a * goc_b) / ucln;
 	printf("Uoc chung lon nhat cua %d va %d la: %d\n", goc_a, goc_b, bcnn);

}
