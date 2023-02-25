#include <stdio.h>
#include <conio.h>

struct ToaDo{
	char Diem;
	float x, y, z;
};

typedef struct ToaDo TD;

void nhap(TD &a){
	printf("Nhap ten diem va x , y, z lan luot la: ");
	scanf("%c%f%f%f", &a.Diem, &a.x, &a.y, &a.z);
}

void xuat(TD a){
	printf("%c(%.1f;%.1f;%.1f)", a.Diem, a.x, a.y, a.z );
}

int main(){
	TD a;
	nhap(a);
	xuat(a);
}
