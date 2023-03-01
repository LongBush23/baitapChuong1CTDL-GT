#include <iostream>
#include <string>

using namespace std; 
 
struct NhanVien{
	string code;
	string name;
	float salary;
};
typedef struct NhanVien NV;

void input(NV &n){
	cout << "Nhap ma nhan vien : "<<endl;
	getline(cin, n.code);
	cout << "Nhap ten nhan vien : "<<endl;
	getline(cin, n.name);
	cout << "Nhap luong nhan vien: "<<endl;
	cin>> n.salary;
}

void output(NV n){
	cout << "Ma nhan vien : " << n.code << endl;
	cout << "ten nhan vien : " <<n.name << endl;
	cout << "luong nhan vien : " <<n.salary << endl;
}

int main(){
	NhanVien l;
	input(l);
	output(l);
	return 0;
}
