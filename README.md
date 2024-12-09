# Tiket Bioskop

## Deskripsi
**Tiket Bioskop** adalah program berbasis C++ yang dirancang untuk mempermudah proses penjualan tiket bioskop. Program ini mencakup fitur seperti menampilkan daftar tiket, pembelian tiket dengan diskon, dan pelacakan total pendapatan. Cocok digunakan untuk simulasi sistem penjualan tiket sederhana.

## Fitur
1. **Daftar Tiket**  
   - Menampilkan daftar film yang tersedia, harga tiket, dan jumlah stok tiket.

2. **Beli Tiket**  
   - Memilih film berdasarkan nomor film.  
   - Pembelian tiket dengan perhitungan diskon 5% untuk pembelian 5 tiket atau lebih.  
   - Stok tiket akan diperbarui secara otomatis.  

3. **Total Pendapatan**  
   - Menampilkan total pendapatan yang telah diperoleh dari pembelian tiket.  

4. **Keluar dari Sistem**  
   - Menutup program setelah selesai.

## Cara Menggunakan
1. Clone repository ini ke komputer Anda:
   ```bash
   git clone https://github.com/Pindosaputra123/Tiket-Bioskop.git
   ```
2. Navigasikan ke folder proyek:
   ```bash
   cd Tiket-Bioskop
   ```
3. Kompilasi program menggunakan compiler C++ seperti `g++`:
   ```bash
   g++ ticketing.cpp -o TicketingSystem
   ```
4. Jalankan file hasil kompilasi:
   ```bash
   ./TicketingSystem
   ```
5. Ikuti petunjuk yang ditampilkan di layar untuk menggunakan program.

## Teknologi yang Digunakan
- **Bahasa Pemrograman:** C++  
- **Library:**  
  - `<iostream>`: Untuk input/output.  
  - `<iomanip>`: Untuk format tampilan tabel.  
  - `<string>`: Untuk manipulasi string.  
  - `<cmath>`: Untuk perhitungan diskon.

## Struktur Program
- **Struct Tiket**  
  Menyimpan informasi film, harga tiket, dan stok yang tersedia.

- **Fungsi tampilkanTiket**  
  Menampilkan daftar tiket secara terformat.

- **Logika Utama**  
  Mengelola interaksi pengguna melalui menu utama, memungkinkan pembelian tiket dan perhitungan pendapatan.

## Contoh Tampilan
```
=== Sistem Penjualan Tiket Bioskop ===
1. Tampilkan Daftar Tiket
2. Beli Tiket
3. Lihat Total Pendapatan
4. Keluar
Masukkan Pilihan: 
```

## Pengembangan di Masa Depan
- Tambahkan fitur pembayaran digital.
- Integrasi dengan database untuk penyimpanan data permanen.
- Implementasi sistem autentikasi untuk pengguna dan admin.

## Kontribusi
Kontribusi sangat diterima! Silakan buat pull request atau laporkan masalah melalui [Issues](https://github.com/Pindosaputra123/Tiket-Bioskop/issues).

## Lisensi
Proyek ini dilisensikan di bawah [MIT License](LICENSE).
