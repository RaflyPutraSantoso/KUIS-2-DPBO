/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#ifndef INVENTORY_H
#define INVENTORY_H

#include <map>
#include <string>

class Pesanan;

class Inventory {
private:
    std::map<std::string, int> persediaan;
    friend class Pesanan;

public:
    void tambahPersediaan(const std::string& item, int jumlah);
    bool cekPersediaan(const std::string& item, int jumlah) const;
    void tampilkanPersediaan() const;
};

#endif 