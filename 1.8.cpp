#include<stdio.h>
#include<conio.h>

struct DuongThang{
	float a, b, c;
};

typedef struct DuongThang DT;

void nhap(DT &n){
	printf("a, b, c lan luot la :\n");
	scanf("%f%f%f", &n.a, &n.b, &n.c);
	
}

void xuat(DT n){
	printf("phuong trinh duong thuong co dang : %.2fX + %.2fY + %.2f = 0", n.a, n.b, n.c);
}

int main(){
	DT n;
	nhap(n);
	xuat(n);
}
