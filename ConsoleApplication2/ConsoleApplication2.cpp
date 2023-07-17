#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};
void tampilkanSemuaMahasiswa() {
	cout << "========== SEMUA DATA MAHASISWA ==========" << endl;
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data mahasiswa." << endl;
		return;
	}

	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM   : " << NIM[i] << endl;
		cout << "Nama  : " << nama[i] << endl;
		cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
		cout << endl;
	}
};
void algorithmacariMahasiswaByNIM() {
	;
	int nimCari;
	cout << "========== CARI MAHASISWA BERDASARKAN NIM ==========" << endl;
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data mahasiswa." << endl;
		return;
	}

	cout << "NIM yang dicari: ";
	cin >> nimCari;

	bool found = false;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == nimCari) {
			cout << "NIM   : " << NIM[i] << endl;
			cout << "Nama  : " << nama[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;
			found = true;
			break;
		}
	}

	if (!found) {
		cout << "Mahasiswa dengan NIM tersebut tidak ditemukan." << endl;
	}
}

void algorithmaSortByTahunMasuk() {
	cout << "========== MAHASISWA BERDASARKAN TAHUN MASUK ==========" << endl;
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data mahasiswa." << endl;
		return;
	}

	// Menggunakan Bubble Sort untuk mengurutkan data
	for (int i = 0; i < jumlahMahasiswa - 1; i++) {
		for (int j = 0; j < jumlahMahasiswa - i - 1; j++) {
			if (tahunMasuk[j] > tahunMasuk[j + 1]) {
				// Tukar posisi data
				swap(NIM[j], NIM[j + 1]);
				swap(nama[j], nama[j + 1]);
				swap(tahunMasuk[j], tahunMasuk[j + 1]);
			}
		}
	}

	// Menampilkan data yang sudah diurutkan
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM   : " << NIM[i] << endl;
		cout << "Nama  : " << nama[i] << endl;
		cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
		cout << endl;
	}
}
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


// 2. binary search & bubblesort 
// 
// 
// 
// 3. perbedaan mendasar antara keduanya terletak pada cara elemen
// disimpan dan diakses dalam struktur data tersebut.
// algoritma stack : menggunakan prinsip elemen terakhir yang ditambahkan ke dalam stack
// adalah elemen pertama yang dihapus dari stack (lifo)
// queues          :Menggunakan prinsip elemen pertama yang dimasukkan ke dalam
// queue akan menjadi elemen pertama yang dikeluarkan(fifo)
//
//
// 4. algoritma stack digunakan saat kita ingin mengimplementasikan operasi lifo.
// dimana elemen terakhir yang dimasukkan ke dalam stack akan menjadi elemen pertama yang diambil dari stack. 
// stack dapat digunakan dalam berbagai kasus,
// 5. a. kedalaman yang dimiliki struktur tersebut adalah 5
//	  b. 
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

