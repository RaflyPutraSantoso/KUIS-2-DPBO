/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#ifndef SISTEM_KAFe_H
#define SISTEM_KAFe_H

#include <vector>
#include <limits>
#include "menu_item.h"
#include "inventory.h"
#include "pelanggan.h"
#include "pesanan.h"

class SistemKafe {
private:
    std::vector<MenuItem<int>> menu;
    Inventory inventory;
    std::vector<Pelanggan> pelanggan;

public:
    SistemKafe();
    void jalankan();

private:
    void tampilkanMenu() const;
    void prosesPesanan(int indexPelanggan);
};

#endif 