/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#include "../include/sistem_kafe.h"
#include <iostream>
#include <limits>

SistemKafe::SistemKafe() {
    menu = {
        {"Nasi Goreng", 25000, "makanan", 20},
        {"Mie Goreng", 22000, "makanan", 18},
        {"Sate Ayam", 30000, "makanan", 15},
        {"Es Teh Manis", 8000, "minuman", 30},
        {"Es Jeruk", 10000, "minuman", 25},
        {"Kopi Susu", 12000, "minuman", 20},
        {"Es Cendol", 15000, "minuman", 15}
    };

    for (const auto& item : menu) {
        inventory.tambahPersediaan(item.getNama(), item.getStok());
    }

    pelanggan = {
        {"Asep", "reguler", 100},
        {"Sinta", "premium", 250},
        {"Putri", "vip", 500}
    };
}

void SistemKafe::tampilkanMenu() const {
    std::cout << "\n=== Menu Kafe ===" << std::endl;
    std::cout << "No.  Nama Menu             Harga        Kategori       Stok" << std::endl;
    
    int nomor = 1;
    for (const auto& item : menu) {
        std::string noTampil = std::to_string(nomor) + ".";
        if (noTampil.length() < 5) noTampil += std::string(5 - noTampil.length(), ' ');
        
        std::cout << noTampil << " ";
        item.tampilkan();
        nomor++;
    }
}

void SistemKafe::prosesPesanan(int indexPelanggan) {
    Pelanggan& p = pelanggan[indexPelanggan];
    Pesanan pesanan;
    
    std::cout << "\nSelamat datang, " << p.getNama() << "!" << std::endl;
    
    while (true) {
        tampilkanMenu();
        std::cout << "\nMasukkan nomor menu (0 untuk selesai): ";
        int pilihan;
        std::cin >> pilihan;
        
        if (std::cin.fail() || pilihan < 0 || pilihan > menu.size()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            throw InputTidakValidException();
        }
        
        if (pilihan == 0) break;
        
        std::cout << "Jumlah: ";
        int jumlah;
        std::cin >> jumlah;
        
        if (std::cin.fail() || jumlah <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            throw InputTidakValidException();
        }
        
        try {
            pesanan.tambahItem(menu[pilihan-1], jumlah, inventory);
            std::cout << "Ditambahkan " << jumlah << " " << menu[pilihan-1].getNama() << std::endl;
        } catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    
    pesanan.tampilkanPesanan();
    double total = p.beriDiskon(pesanan.getTotalHarga());
    if (total != pesanan.getTotalHarga()) {
        std::cout << "Total setelah diskon: Rp " << total << std::endl;
    }
    
    p.tambahPoin(static_cast<int>(total/1000));
    std::cout << "Mendapatkan " << static_cast<int>(total/1000) << " poin" << std::endl;
}

void SistemKafe::jalankan() {
    std::cout << "=== Sistem Manajemen Kafe Indonesia ===" << std::endl;
    
    std::cout << "\nPilih pelanggan:" << std::endl;
    for (size_t i = 0; i < pelanggan.size(); ++i) {
        std::cout << i+1 << ". " << pelanggan[i].getNama() 
                  << " (" << pelanggan[i].getMembership() << ")" << std::endl;
    }
    
    int pilihan;
    std::cin >> pilihan;
    
    if (std::cin.fail() || pilihan <= 0 || pilihan > pelanggan.size()) {
        throw InputTidakValidException();
    }
    
    prosesPesanan(pilihan-1);
}