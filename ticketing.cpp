#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

// Struktur untuk menyimpan data tiket
struct Tiket {
    string namaFilm;
    int harga;
    int stok;
};

// Fungsi untuk menampilkan daftar tiket yang tersedia
void tampilkanTiket(Tiket daftarTiket[], int jumlah) {
    cout << "\n|============================================|" << endl;
    cout << "|                Daftar Tiket                |" << endl;
    cout << "|============================================|" << endl;
    cout << left << setw(5) << "No" << setw(20) << "Nama Film" << setw(10) << "Harga" << setw(10) << "Stok" << endl;
    
    // Loop untuk menampilkan setiap tiket dalam daftar
    for (int i = 0; i < jumlah; i++) {
        cout << setw(5) << i + 1
             << setw(20) << daftarTiket[i].namaFilm
             << setw(10) << daftarTiket[i].harga
             << setw(10) << daftarTiket[i].stok << endl;
    }
}

int main() {
    // Inisialisasi daftar tiket bioskop
    const int jumlahTiket = 3;
    Tiket daftarTiket[jumlahTiket] = {
        {"Moana", 40000, 50},
        {"Agak Laen", 40000, 30},
        {"Terrifier", 45000, 20}
    };

    int pilihan;
    int totalPendapatan = 0;

    // Loop utama untuk menjalankan menu aplikasi
    do {
        // Menampilkan menu utama
        cout << "\n|============================================|" << endl;
        cout << "|       Sistem Penjualan Tiket Bioskop       |" << endl;
        cout << "|============================================|" << endl;
        cout << "| 1 | Tampilkan Daftar Tiket                 |" << endl;
        cout << "| 2 | Beli Tiket                             |" << endl;
        cout << "| 3 | Lihat Total Pendapatan                 |" << endl;
        cout << "| 4 | Keluar                                 |" << endl;
        cout << "|============================================|" << endl;
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;

        // Pilihan untuk menampilkan daftar tiket
        if (pilihan == 1) {
            tampilkanTiket(daftarTiket, jumlahTiket);
        }
        // Pilihan untuk membeli tiket
        else if (pilihan == 2) {
            int pilihanFilm, jumlahBeli; // Variabel untuk menyimpan pilihan film dan jumlah tiket yang dibeli

            // Menampilkan daftar tiket agar pembeli dapat memilih
            tampilkanTiket(daftarTiket, jumlahTiket);
            cout << "\nPilih Nomor Cinema Yang Ingin Ditonton: ";
            cin >> pilihanFilm;

            // Validasi pilihan film
            if (pilihanFilm < 1 || pilihanFilm > jumlahTiket) {
                cout << "Pilihan Tidak Benar." << endl;
                continue;
            }

            // Meminta jumlah tiket yang ingin dibeli
            cout << "Masukkan Jumlah Tiket Yang Ingin Dibeli: ";
            cin >> jumlahBeli;

            // Validasi jika stok tidak mencukupi
            if (jumlahBeli > daftarTiket[pilihanFilm - 1].stok) {
                cout << "Stok Tidak Cukup. Hanya Tersedia " << daftarTiket[pilihanFilm - 1].stok << " Tiket." << endl;
            } else {
                // Mengurangi stok tiket sesuai jumlah yang dibeli
                daftarTiket[pilihanFilm - 1].stok -= jumlahBeli;
                int totalHarga = jumlahBeli * daftarTiket[pilihanFilm - 1].harga;

                // Memberikan diskon juka pembelian tiket >= 5
                if (jumlahBeli >= 5) {
                    int diskon = static_cast<int>(std::round(totalHarga * 0.05));
                    totalHarga -= diskon;
                    cout << "Anda Mendapatkan Diskon 5%! Total Diskon: " << diskon << endl;
                }

                // Menampilkan total harga dan menambah pendapatan
                cout << "Total Harga: " << totalHarga << endl;
                totalPendapatan += totalHarga;
                cout << "Pembelian Berhasil!" << endl;
            }
        }
        // Pilihan untuk menampilkan total pendapatn
        else if (pilihan == 3) {
            cout << "Total Pendapatan Saat Ini: " << totalPendapatan << endl;
        }
        // Pilihan untuk keluar dari aplikasi
        else if (pilihan == 4) {
            cout << "Terima Kasih Telah Menggunakan Sistem Penjualan Tiket." << endl;
        }
        // Jika pilihan tidak valid
        else {
            cout << "Pilihan Tidak Benar. Coba Lagi." << endl;
        }
    } while (pilihan != 4); // Loop berakhir jika pengguna memilih untuk keluar

    return 0; // Program selesai
}
