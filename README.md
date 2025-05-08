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

## Cara Compile
g++ main.cpp -o kafe_indonesia

./kafe_indonesia

## Output
![Image](https://github.com/user-attachments/assets/2356175f-43ac-4d13-8431-9a99625cfaf5)
![Image](https://github.com/user-attachments/assets/d1d02fd5-4e06-4eef-9a5c-d548bef84c12)
![Image](https://github.com/user-attachments/assets/c6813290-cc5f-4b00-96b3-efd31556c887)
