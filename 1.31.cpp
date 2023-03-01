#include <iostream>
using namespace std;

struct ThiSinh{
	char maThiSinh[6];
	char hoTen[31];
	float diemToan;
	float diemLy;
	float diemHoa;
	float diemTongCong;
};

typedef struct ThiSinh TS;

void nhapThiSinh(TS &t){
	cout << "Nhap ma thi sinh: ";
	cin >> t.maThiSinh;
	cout <<" Nhap ten thi sinh: ";
	cin.ignore();// doc bo ky tu \n con lai trong bo dem
	cin.getline(t.hoTen, 31);
	cout << "Nhap diem Toan: ";
	cin >> t.diemToan;
	cout << "Nhap diem ly: ";
	cin >> t.diemLy;
	cout << "Nhap diem hoa: ";
	cin >> t.diemHoa;
	
	t.diemTongCong = t.diemToan + t.diemHoa + t.diemLy;
}

void xuatThiSinh(TS t){
	cout << "Ma thi sinh: "<< t.maThiSinh <<endl;
	cout << "Ho ten: "<< t.hoTen<<endl;
	cout << "Diem toan: "<< t.diemToan <<endl;
	cout << "Diem ly : "<< t.diemLy <<endl;
	cout << "Diem Hoa: " << t.diemToan<<endl;
}

void nhapDanhSachThiSinh(TS ds[], int &n){
	cout << "Nhap so luong thi sinh : ";
	cin >> n;
	for (int i=0; i<n ;i++){
		cout << "Nhap thong tin thi sinh "<< i+1 <<":"<< endl;
		nhapThiSinh(ds[i]); 
	}
}

void xuatDanhSachThiSinh(TS ds[], int n){
	cout << "Danh sacsh thi sinh : "<< endl;
	for (int i=0 ; i<n; i++){
		cout << "thi sinh thu " << i+1 << endl;
		xuatThiSinh(ds[i]);
		cout << endl;
	}
}

int main(){
	ThiSinh dsThiSinh[100];
	int n;
	nhapDanhSachThiSinh(dsThiSinh, n);
	xuatDanhSachThiSinh(dsThiSinh, n);
	return 0;
}


