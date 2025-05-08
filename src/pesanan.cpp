/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#include "../include/pesanan.h"
#include <iostream>

void Pesanan::tampilkanPesanan() const {
    std::cout << "\n=== Pesanan Saat Ini ===\n";
    for (const auto& [item, jumlah] : items) {
        std::string itemTampil = item;
        if (item.length() < 20) itemTampil += std::string(20 - item.length(), ' ');
        std::cout << itemTampil << "x" << jumlah << std::endl;
    }
    std::cout << "Total: Rp " << totalHarga << std::endl;
}