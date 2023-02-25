#include <stdio.h>
#include <conio.h>
struct DonThuc{
	float a,n;
};
typedef struct DonThuc DT;
void Nhap(DT &t){
	printf("Nhap a: \n");
	scanf("%f", &t.a);
	printf("Nhap n la: \n");
	scanf("%f", &t.n);
}
void Xuat(DT t){
	printf("P(x)=%.2fx^%.2f", t.a, t.n);
}
int main(){
	DT dt;
	printf("Cho don thuc P(x)= ax^n\n");
	Nhap(dt);
	Xuat(dt);
}
