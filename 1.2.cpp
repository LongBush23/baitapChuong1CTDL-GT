#include <stdio.h>
#include <conio.h>
struct HonSo{
	int SoNguyen, TuSo, MauSo;
};
typedef struct HonSo HS;

void Nhap(HS &l)
{
	printf("Nhap so nguyen: \n");
	scanf("%d", &l.SoNguyen);
	printf("Nhap Tu so: \n");
	scanf("%d", &l.TuSo);
	do{
		printf("Nhap Mau so: \n");
		scanf("%d", &l.MauSo);
		if(l.MauSo==0){
			printf("Nhap lai mau so!!!!");
		}
		}while(l.MauSo==0);	
	}


void Xuat(HS l)
{
	printf("%d(%d/%d)", l.SoNguyen, l.TuSo, l.MauSo);
}
int main()
{
	HS l1;
	Nhap(l1);
	Xuat(l1);
	return 0;
}
