/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <string>
#include <iostream>
#include "exceptions.h"

template <typename T>
class MenuItem {
private:
    std::string nama;
    T harga;
    std::string kategori;
    int stok;

public:
    MenuItem(const std::string& n, T h, const std::string& kat, int s)
        : nama(n), harga(h), kategori(kat), stok(s) {}

    std::string getNama() const { return nama; }
    T getHarga() const { return harga; }
    std::string getKategori() const { return kategori; }
    int getStok() const { return stok; }

    void kurangiStok(int jumlah) {
        if (stok < jumlah) {
            throw StokHabisException(nama);
        }
        stok -= jumlah;
    }

    void tampilkan() const {
        std::string namaTampil = nama;
        if (nama.length() < 20) namaTampil += std::string(20 - nama.length(), ' ');
        
        std::string hargaTampil = "Rp " + std::to_string(harga);
        if (hargaTampil.length() < 13) hargaTampil += std::string(13 - hargaTampil.length(), ' ');
        
        std::string kategoriTampil = kategori;
        if (kategori.length() < 15) kategoriTampil += std::string(15 - kategori.length(), ' ');
        
        std::cout << namaTampil << hargaTampil << kategoriTampil << stok << std::endl;
    }
};

#endif 