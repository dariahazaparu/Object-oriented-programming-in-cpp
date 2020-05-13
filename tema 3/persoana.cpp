//
// Created by Daria on 5/12/2020.
//

#include <iostream>
#include "persoana.h"

persoana::persoana(std :: string CNP, std :: string nume, std :: string nume_film)
    : CNP(CNP), nume(nume), nume_film(nume_film) {}

std :: istream & operator >> (std :: istream& i, persoana& a) {
    a.citire(i);
    return i;
}

void persoana::citire(std :: istream& i) {
    i >> CNP >> nume >> nume_film;
}

std :: ostream& operator << (std :: ostream& o, persoana& a) {
    a.print(o);
    return o;
}

void persoana::print(std :: ostream& o) {
    o << CNP << " " << nume << " " << nume_film << " ";
}

persoana::~persoana() = default;

