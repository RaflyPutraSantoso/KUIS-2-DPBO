/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#include "../include/inventory.h"
#include <iostream>

void Inventory::tambahPersediaan(const std::string& item, int jumlah) {
    persediaan[item] += jumlah;
}

bool Inventory::cekPersediaan(const std::string& item, int jumlah) const {
    auto it = persediaan.find(item);
    return it != persediaan.end() && it->second >= jumlah;
}

void Inventory::tampilkanPersediaan() const {
    std::cout << "\n=== Persediaan Saat Ini ===\n";
    std::cout << "Item                     Jumlah" << std::endl;
    for (const auto& [item, jumlah] : persediaan) {
        std::string itemTampil = item;
        if (item.length() < 25) itemTampil += std::string(25 - item.length(), ' ');
        std::cout << itemTampil << jumlah << std::endl;
    }
}