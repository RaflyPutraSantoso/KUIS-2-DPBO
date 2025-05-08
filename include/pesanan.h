/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#ifndef PESANAN_H
#define PESANAN_H

#include <vector>
#include <utility>
#include <string>
#include "inventory.h"
#include "menu_item.h"
#include "exceptions.h"

class Pesanan {
private:
    std::vector<std::pair<std::string, int>> items;
    double totalHarga;

public:
    Pesanan() : totalHarga(0) {}
    
    template <typename T>
    void tambahItem(const MenuItem<T>& item, int jumlah, Inventory& inventory) {
        if (!inventory.cekPersediaan(item.getNama(), jumlah)) {
            throw StokHabisException(item.getNama());
        }
        inventory.persediaan[item.getNama()] -= jumlah;
        items.emplace_back(item.getNama(), jumlah);
        totalHarga += item.getHarga() * jumlah;
    }
    
    void tampilkanPesanan() const;
    double getTotalHarga() const { return totalHarga; }
};

#endif 