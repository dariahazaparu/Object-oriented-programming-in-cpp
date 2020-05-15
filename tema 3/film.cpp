//
// Created by Daria on 5/12/2020.
//
#include <iostream>
#include <utility>
#include "film.h"

film::film(std :: vector<persoana*> persoane, std :: string nume_film, int durata, std :: string tip)
        :nume_film(nume_film),  durata(durata), tip(std::move(tip)) {
    for (auto& pers : persoane) {
        if (pers->getNumeFilm() == nume_film) {
//            std::cout << pers->getNumeFilm() << " " << nume_film << " ";
            persoane_part.push_back(pers);
        }
    }
}

film::~film() {
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
    o << "---------" << nume_film << "--------\n";
    o << "Durata: " << durata << '\n';
    o << "Tip: " << tip << '\n';
    o << "Persoane participante:\n";
    for (auto& persoana: persoane_part) {
        o << *persoana << '\n';
    }
}

const std::vector<persoana *> &film::getPersoanePart() const {
    return persoane_part;
}
