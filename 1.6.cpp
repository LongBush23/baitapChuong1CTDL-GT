#include<stdio.h>
#include<conio.h>
struct DaThuc
{
	float a;
	int n;
};
typedef struct DaThuc DATHUC;

void NhapDaThuc(DATHUC &dt)
{
	printf("Nhap n: \n");
	scanf("%d", &dt.n);
	printf("Nhap a: \n");
	scanf("%f", &dt.a);
}
void XuatDaThuc(DATHUC dt){
	for(int i=dt.n; i>=0; i--){
		printf(" + %.2f*%d*X^(%d)", dt.a, i, i);
	}
}

int main(){
	DATHUC dt;
	NhapDaThuc(dt);
	XuatDaThuc(dt);
	return 0;	
}
