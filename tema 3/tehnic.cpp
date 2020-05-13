//
// Created by Daria on 5/12/2020.
//

#include "tehnic.h"
#include <iostream>
#include <utility>

tehnic::tehnic(std :: string CNP, std :: string nume, std :: string nume_film, std :: string domeniu)
    : persoana(std::move(CNP), std::move(nume), std::move(nume_film)), domeniu(std::move(domeniu)) {}

void tehnic::citire(std::istream &i) {
    persoana::citire(i);
    i >> domeniu;
}

void tehnic::print(std::ostream &o) {
    persoana::print(o);
    o << domeniu << " ";
}

tehnic::~tehnic() = default;