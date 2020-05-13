//
// Created by Daria on 5/12/2020.
//

#include <iostream>
#include <utility>
#include "film.h"

film::film(std :: vector<persoana*> persoane_part, std :: string nume_film, int durata, std :: string tip)
    :persoane_part(std::move(persoane_part)),  nume_film(std::move(nume_film)),  durata(durata), tip(std::move(tip)) {}

film::~film() {
    int n = persoane_part.size();
    for( auto& persoana: persoane_part) {
        delete persoana;
    }
}

std :: istream& operator >> (std :: istream &i, film& f){
    f.citire(i);
    return i;
}

void film::citire(std :: istream& i) {
    i >> nume_film >> durata >> tip;
    int n; i >> n;
    for (int j = 0; j < n; ++j) {
        i >> *persoane_part[j];
    }
}

std :: ostream& operator << (std :: ostream& o, film &f) {
    f.afisare(o);
    return o;
}

void film::afisare(std :: ostream& o) {
    o << "persoane: ";
    for (auto& persoana: persoane_part) {
        o << *persoana << "/";
    }
    o << "\n";
    o << "nume film " << nume_film << "\n";
    o << "durata " << durata << '\n';
    o << "tip " << tip << '\n';
}
