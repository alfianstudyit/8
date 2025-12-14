#include <iostream>
#include <string>
#include <limits>
#include <windows.h>   // untuk warna dan clear screen
using namespace std;

// Fungsi untuk ganti warna
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Fungsi untuk clear layar
void cls() {
    system("cls");
}

int main() {
    string databarang[50];
    int jumlahData = 0;

    while (true) {
        int menu;
        string inp;

        cls();
        setColor(11); // biru muda
        cout << "==========================================" << endl;
        cout << "        INVENTARIS BARANG INFORMATIKA     " << endl;
        cout << "==========================================" << endl << endl;

        setColor(14); // kuning
        cout << " Menu:" << endl;
        cout << "  1. Input Data" << endl;
        cout << "  2. Lihat Data" << endl;
        cout << "  3. Keluar" << endl << endl;

        setColor(7); // putih
        cout << " Pilih menu: ";
        cin >> menu;

        //cin.ignore(1000, '\n');   // pakai versi aman
        cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');

        // Menu 1: Input data
        if (menu == 1) {
            cls();
            setColor(10); // hijau
            cout << "=============== INPUT DATA BARANG ===============" << endl << endl;

            if (jumlahData >= 50) {
                setColor(12);
                cout << "Data penuh! Tidak bisa menambah lagi." << endl;
                setColor(7);
                system("pause");
                continue;
            }

            setColor(7);
            cout << "Masukkan nama barang : ";
            getline(cin, inp);

            databarang[jumlahData] = inp;
            jumlahData++;

            setColor(10);
            cout << endl << "Barang berhasil ditambahkan!" << endl;
            setColor(7);
            system("pause");
        }

        // Menu 2: Lihat data
        else if (menu == 2) {
            cls();
            setColor(9); // biru terang
            cout << "================= LIST DATA BARANG =================" << endl << endl;

            if (jumlahData == 0) {
                setColor(12);
                cout << "Belum ada data yang dimasukkan." << endl;
            }
            else {
                setColor(7);
                for (int i = 0; i < jumlahData; i++) {
                    cout << " " << i + 1 << ". " << databarang[i] << endl;
                }
            }

            cout << endl;
            setColor(7);
            system("pause");
        }

        // Menu keluar
        else if (menu == 3) {
            cls();
            setColor(10);
            cout << "Terima kasih telah menggunakan program ini." << endl;
            setColor(7);
            break;
        }

        else {
            setColor(12);
            cout << endl << "Menu tidak valid!" << endl;
            setColor(7);
            system("pause");
        }
    }

    return 0;
}
