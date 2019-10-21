/*******************************************************************
*	Materi : Pratikum PBO 										   *
*	Nama   : Aulia Rahman										   *
*	Kelas  : TK-42-03											   *
*   Tujuan : Tugas Pratikum Modul 4								   *
********************************************************************/

#include <iostream>
#include <string>

using namespace std;

int total, jumlah, nilai, i, rata, nim;
string nama;


class mahasiswa {
public:
	int nim;
	string nama;
	float nilai, rata;
	void printData() {
		cout << "------------------------------------ " << endl << endl;
		cout << "NIM   \t= " << nim << endl;
		cout << "Nama  \t= " << nama << endl;
		cout << "Nilai \t= " << total << endl;
		cout << "Rata \t= " << rata << endl;
	}
};

void input()
{
	cout << "Selamat Datang  " << endl << endl;

	cout << "Masukan Nama \t : "; getline(cin, nama);
	cout << "Masukan Nim \t : "; cin >> nim;
	cout << "Masukan Jumlah \t : "; cin >> jumlah;
	cout << endl;

	for (int i = 1; i <= jumlah; i++) {
		cout << "Masukkan Nilai " << i << " : "; cin >> nilai;
		total = total + nilai;
	}

	cout << endl;
	cout << "Total            : " << total << endl;
	rata = total / nilai;
	cout << "Rata-rata        : " << rata << endl << endl;

}

int main()
{
	input();
	mahasiswa aulia = { nim,nama,total,rata };
	aulia.printData();
}
