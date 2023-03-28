#include <iostream>
#include <string>
using namespace std;

struct SOTIETKIEM {
  string ma_so;
  string loai_tiet_kiem;
  string ho_ten_khach_hang;
  int chung_minh_nhan_dan;
  int ngay_mo_so;
  float so_tien_gui;
};

void nhapThongTin(SOTIETKIEM& sotietkiem) {
  cout << "Nhap thong tin sotietkiem:" << endl;
  cout << "Ma so: ";
  getline(cin, sotietkiem.ma_so);
  cout << "Loai tiet kiem: ";
  getline(cin, sotietkiem.loai_tiet_kiem);
  cout << "Ho ten khach hang: ";
  getline(cin, sotietkiem.ho_ten_khach_hang);
  cout << "Chung minh nhan dan: ";
  cin >> sotietkiem.chung_minh_nhan_dan;
  cout << "Ngay mo so: ";
  cin >> sotietkiem.ngay_mo_so;
  cout << "So tien gui: ";
  cin >> sotietkiem.so_tien_gui;
}

void xuatThongTin(const SOTIETKIEM& sotietkiem) {
  cout << endl << "Thong tin sotietkiem vua nhap:" << endl;
  cout << "Ma so: " << sotietkiem.ma_so << endl;
  cout << "Loai tiet kiem: " << sotietkiem.loai_tiet_kiem << endl;
  cout << "Ho ten khach hang: " << sotietkiem.ho_ten_khach_hang << endl;
  cout << "Chung minh nhan dan: " << sotietkiem.chung_minh_nhan_dan << endl;
  cout << "Ngay mo so: " << sotietkiem.ngay_mo_so << endl;
  cout << "So tien gui: " << sotietkiem.so_tien_gui << endl;
}

int main() {
  SOTIETKIEM sotietkiem;
  nhapThongTin(sotietkiem);
  xuatThongTin(sotietkiem);
  return 0;
}
