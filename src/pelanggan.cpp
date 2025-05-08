/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#include "../include/pelanggan.h"
#include <iostream>

Pelanggan::Pelanggan(const std::string& n, const std::string& mem, int p)
    : nama(n), membership(mem), poin(p) {}

void Pelanggan::tambahPoin(int p) { poin += p; }

void Pelanggan::tampilkanInfo() const {
    std::cout << "\n=== Info Pelanggan ===" << std::endl;
    std::cout << "Nama:      " << nama << std::endl;
    std::cout << "Membership: " << membership << std::endl;
    std::cout << "Poin:      " << poin << std::endl;
}

double Pelanggan::beriDiskon(double total) const {
    if (membership == "premium") return total * 0.9;
    if (membership == "vip") return total * 0.85;
    return total;
}

std::string Pelanggan::getNama() const { return nama; }
std::string Pelanggan::getMembership() const { return membership; }
int Pelanggan::getPoin() const { return poin; }