#include <iostream>
#include <string>
using namespace std;

struct LUANVAN{
	string maLuanVan;
	string tenLuanVan;
	string hoTenSinhVien;
	string hoTenGiangVien;
	int namThucHien;
};

typedef struct LUANVAN LV;

void nhapLV(LV &lv){
	cout << "Nhap ma luan van : ";
	getline(cin, lv.maLuanVan);
	cout  << "Nhap ten Luan van : ";
	getline(cin, lv.tenLuanVan);
	cout << "Nhap ho ten sinh vien : ";
	getline(cin, lv.hoTenSinhVien);
	cout << "Nhap ho ten Giang vien : ";
	getline(cin, lv.hoTenGiangVien);
	cout << "Nhap nam thuc hien : ";
	cin >> lv.namThucHien;
}

void xuatLV(LV lv){
	cout << "Ma luan van : " << lv.maLuanVan <<endl;
	cout << "ten luan van : "<< lv.tenLuanVan << endl;
	cout << "ho ten sinh vien thuc hien: "<< lv.hoTenSinhVien << endl;
	cout << "ho ten giang vien huong dan: "<< lv.hoTenGiangVien<< endl;
	cout << "Nam thuc hien : "<< lv.namThucHien << endl;
	
}


int main(){
	LUANVAN lv;
	nhapLV(lv);
	xuatLV(lv);
	return 0;
}
