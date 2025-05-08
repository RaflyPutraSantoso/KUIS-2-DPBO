# KUIS-2-DPBO

## Soal
![Image](https://github.com/user-attachments/assets/d583ed2f-250d-4c64-86fe-d2a0402eff8e)

## Penjelasan
Desain Program Kafe Kekinian 
1. Kelas Utama 
- SistemKafe: Mengkoordinasi seluruh sistem 
- MenuItem<T>: Template class untuk item menu 
- Inventory: Manajemen stok (menggunakan STL map) 
- Pesanan: Menangani transaksi (friend class Inventory) 
- Pelanggan: Data pelanggan dan membership 
2. Konsep yang digunakan 
- Template: MenuItem untuk fleksibilitas tipe harga 
- STL: vector, map, pair untuk manajemen data 
- Friend: Pesanan perlu akses langsung ke Inventory 
- Exception: Custom exception untuk error handling 
3. Alur Program 
- Inisialisasi data menu dan pelanggan 
- User memilih pelanggan 
- User memesan menu 
- Sistem validasi stok dan hitung total 
- Apply diskon berdasarkan membership

## Output
