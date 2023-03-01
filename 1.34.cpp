#include <iostream>
#include <string>
using namespace std;

struct HOCSINH{
	string hoTen;
	float diemTB;
};

struct LOPHOC{
	char tenLop[30];
	int SiSo;
	HOCSINH DanhSachHocSinh[50];
};

void nhapHocSinh(HOCSINH &hs){
	cout << "Nhap ten hoc sinh: ";
	getline(cin, hs.hoTen);
	cout << "Nhap diem trung binh: ";
	cin >> hs.diemTB;
	cin.ignore(); // xoa bo dem
}

void nhapLopHoc(LOPHOC &lp){
	cout << "Nhap ten lop: ";
	cin.getline(lp.tenLop, 30);
	cout << "nhap si so lop: ";
	cin >> lp.SiSo;
	cin.ignore();// xoa bo dem co gang nho ham nay nha dm 
	for (int i = 0; i < lp.SiSo; i++){
		cout << "Nhap thong tin hoc sinh thu "<< i+1 << ":" <<endl;
		nhapHocSinh(lp.DanhSachHocSinh[i]);
	}
}

void xuatHocSinh(HOCSINH hs){
	cout << "ho ten: "<< hs.hoTen << endl;
	cout << "Diem trung binh: "<< hs.diemTB<< endl;
}

void xuatLopHoc(LOPHOC lp){
	cout << "Ten lop : "<< lp.tenLop<<endl;
	cout << "Si so lop : "<< lp.SiSo<<endl;
	for(int i=0; i < lp.SiSo; i++){
		cout << "thong tin hoc sinh thu "<< i + 1<< ":" <<endl;
		xuatHocSinh(lp.DanhSachHocSinh[i]);
		cout << endl;
	}
}

int main(){
	LOPHOC cl;
	nhapLopHoc(cl);
	xuatLopHoc(cl);
	return 0;
}
