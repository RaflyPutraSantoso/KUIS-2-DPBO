/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#ifndef PELANGGAN_H
#define PELANGGAN_H

#include <string>
#include <iostream>

class Pelanggan {
private:
    std::string nama;
    std::string membership;
    int poin;

public:
    Pelanggan(const std::string& n, const std::string& mem = "reguler", int p = 0);
    
    void tambahPoin(int p);
    void tampilkanInfo() const;
    double beriDiskon(double total) const;
    
    std::string getNama() const;
    std::string getMembership() const;
    int getPoin() const;
};

#endif 