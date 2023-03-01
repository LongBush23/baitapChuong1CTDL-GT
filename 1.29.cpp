#include <iostream>
#include <string>

using namespace std;

struct Player{
	string name;
	int age;
	string position;
};

typedef struct Player P;

struct DOIBONG{
	string code;
	string name;
	Player players[30];
	int numPlayers;
};
typedef struct DOIBONG DB;

void inputPlayer(P &p){
	cout << "Nhap ten cau thu: ";
	getline(cin, p.name);
	cout <<"Nhap tuoi cau thu: ";
	cin>> p.age;
	cin.ignore();// xoas booj dem de doc chuoi tiep theo
	cout<< "Nhap vi tri choi cua cau thu: ";
	getline(cin, p.position);
}

void inputDOIBONG(DB &team){
	cout << "Nhap ma doi bong: "<<endl;
	getline(cin, team.code);
	cout << "Nhap ten doi bong: "<<endl;
	getline(cin, team.name);
	cout << "Nhap so luong cau thu: ";
	cin >> team.numPlayers;
	cin.ignore();
	
	for (int i = 0; i < team.numPlayers; i++){
		cout<< "Nhap thong tin cho cau thu thu "<< i + 1<< endl;
		inputPlayer(team.players[i]);
	}
}

void outputPlayer(P p){
	cout<<"Ten cau thu: "<<p.name<<endl;
	cout<<"Tuoi cau thu: "<<p.age<<endl;
	cout<<"vi tri choi: "<<p.position<<endl;
}

void outputDOIBONG(DOIBONG team){
	cout << "Ma doi bong: "<< team.code<<endl;
	cout << "ten doi bong: "<< team.name<<endl;
	cout << "so luong cau thu: "<< team.numPlayers<<endl;
	
	for (int i=0; i<team.numPlayers; i++){
		cout<< "Thong tin cau thu thu "<< i+1 <<endl;
		outputPlayer(team.players[i]);
		cout <<endl;
	}	
	
}

int main() {
    DOIBONG team;
    inputDOIBONG(team);
    outputDOIBONG(team);
    return 0;
}
