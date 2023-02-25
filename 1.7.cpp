#include<stdio.h>
#include<conio.h>

void Nhap(int &n, int &t){
	printf("Nhap nam la :\n");
	scanf("%d", &n);
	if (n % 4==0){
		printf("nam nay la nam nhuan\n");
	}
	
}

void xuat(int n, int t){
	switch(t){
		case 1:
			printf("thang 1 co 31 ngay ");
			printf("\n");
		case 2:
			if(n%4==0){
			printf("thang 2 co 29 ngay ");
			printf("\n");
		}else{
			printf("thang 2 co 28 ngay");
			printf("\n");
		}
		case 3:
			printf("thang 3 co 31 ngay ");
			printf("\n");
		case 4:
			printf("thang 4 co 30 ngay ");
			printf("\n");
		case 5:
			printf("thang 5 co 31 ngay ");
			printf("\n");
		case 6:
			printf("thang 6 co 30 ngay ");
			printf("\n");
		case 7:
			printf("thang 7 co 31 ngay ");
			printf("\n");
		case 8:
			printf("thang 8 co 31 ngay ");
			printf("\n");
		case 9:
			printf("thang 9 co 30 ngay ");
			printf("\n");
		case 10:
			printf("thang 10 co 31 ngay ");
			printf("\n");
		case 11:
			printf("thang 11 co 30 ngay ");
			printf("\n");
		case 12:
			printf("thang 12 co 31 ngay ");
			printf("\n");
		default:
			break;
	}
}

int main(){
	int n, t;
	Nhap(n, t);
	xuat(n, t);
	
}
