#include <iostream>
#include <vector>

using namespace std;

struct PotonganHarga{
	int minimal;
    float persen;
};

vector<PotonganHarga> daftarPotonganHarga{
    {2000000, .10},
    {1500000, .05},
};

struct HandPhone{
	string merek;
	vector<string> daftarTipe;
	vector<int> daftarHarga;
};

vector<HandPhone> daftarHandPhone{
	{
		"Samsung",
		{"A50", "Z plip","A20"},
		{3500000, 21000000,2500000},
	},
	{
		"Xiomi",
		{"Poco M3", "Redmi 9T","POCO X3 PRO"},
		{1999999, 2100000,3200000},
	},
	{
		"Vivo",
		{"Y15", "Y20","Y21"},
		{3000000,5500000,4000000},
	},
};

// /
// /*void jenis_smartphon(){
// 	cout << "1.samsung" << endl;
// 	cout << "2.xiaomi" << endl;
// 	cout << "3.vivo" << endl;
// }


// string samsung(){
// 	system ("cls");
// 	cout << "samsung a20 /t : Rp 2.599.000" << endl;
// 	cout << "samsung Z plip /t : Rp 20.000.000" << endl;
// 	cout << "samsung A 50 /t : Rp 5.500.000" << endl;
// }
// string xiaomi(){
// 	system ("cls");
// 	cout << "poco M3 /t : Rp 199.9000" << endl;
// 	cout << "poco X3 pro /t : Rp 3.200.000" << endl;
// 	cout << "poco M4 /t : Rp 2.500.000" << endl;
// }
// string vivo(){
// 	system ("cls");
// 	cout << "vivo Y15 /t : Rp 259.9000" << endl;
// 	cout << "vivo Y20 /t : Rp 3.100.000" << endl;
// 	cout << "vivo Y21 /t : Rp4.500.000" << endl;
// }

// string pemesanan (){
// 	int pesan, pilihTipe;
// 	cout << jenis << endl;
// 	cout << endl;
// 	cout << "samsung" << endl;
// 	cout << "xiaomi" << endl;
// 	cout << "vivo" << endl;
// 	cout << "pilih :"; cin >> pesan;
// 	switch (pesan)
// 	{
// 		case 1:
// 			samsung();
			
// 			cout << "Pilih tipe : ";
// 			cin >> pilihTipe;
			
// 			system("cls");
// 			switch(pilihTipe) {
// 				case 1:
// 					cout << "samsung a20 /t : Rp 2.599.000"; []
					
// 					break;
// 			}
			
// 			break;
			
// 	}
// }
// */

void detailHandPhone(HandPhone handphone) {
	int pilihTipe;

	tipe:
		cout << "Merek : " << handphone.merek << "\n";
		cout << "Tipe : " << "\n";
		for (int i = 0; i < handphone.daftarTipe.size(); i++) {
			cout << i + 1 << ". " << handphone.daftarTipe[i] << " ~ Rp " << handphone.daftarHarga[i] << "\n";
		}

		cout << "\nPilih tipe (1 - " << daftarHandPhone.size() << ") : ";
		cin >> pilihTipe;

		system("cls");

		if (pilihTipe > 0 && pilihTipe <= handphone.daftarTipe.size()) {
			cout << "Selamat! Anda telah membeli handphone " << handphone.merek << " " << handphone.daftarTipe[pilihTipe - 1] << " dengan harga Rp " << handphone.daftarHarga[pilihTipe - 1];
		} else {
			goto tipe;
		}
	
}

int main() {
    int pilihMerek;

	merek:
		cout << "===== Ubang Cell =====\n\n";

		for (int i = 0; i < daftarHandPhone.size(); i++) {
			cout << i + 1 << ". " << daftarHandPhone[i].merek << "\n";
		}

		cout << "\nPilih merek (1 - " << daftarHandPhone.size() << ") : ";
		cin >> pilihMerek;

		system("cls");

		if (pilihMerek > 0 && pilihMerek <= daftarHandPhone.size()) {
			detailHandPhone(daftarHandPhone[pilihMerek - 1]);
		} else {
			goto merek;
		}
}