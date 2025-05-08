/*Saya Rafly Putra Santoso NIM 2100846 mengerjakan Kuis 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan*/
#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <stdexcept>
#include <string>

class StokHabisException : public std::runtime_error {
public:
    explicit StokHabisException(const std::string& item)
        : std::runtime_error("Error: Stok " + item + " habis!") {}
};

class InputTidakValidException : public std::runtime_error {
public:
    InputTidakValidException()
        : std::runtime_error("Error: Input tidak valid!") {}
};

#endif 