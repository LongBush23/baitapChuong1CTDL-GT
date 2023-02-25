#include<stdio.h>
#include<conio.h>

struct ToaDo{
    char Diem;
    float a,b;
};
typedef struct ToaDo TD;

void Nhap(TD &c)
{
    printf("Hay nhap ten diem:");
    scanf("%c",&c.Diem);
    printf("Hay nhap hoanh do:");
    scanf("%f",&c.a);
    printf("Hay nhap tung do:");
    scanf("%f",&c.b);
}
void Xuat(TD c)
{
    printf("%c(%.1f;%.1f)",c.Diem,c.a,c.b);
}
int main()
{
    TD cc;
    char D;
    Nhap(cc);
    Xuat(cc);
	
}
