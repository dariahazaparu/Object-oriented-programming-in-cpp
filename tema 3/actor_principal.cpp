//
// Created by Daria on 5/12/2020.
//

#include "actor_principal.h"
#include <iostream>
#include <utility>

actor_principal::actor_principal(std :: string CNP, std :: string nume, std :: string nume_film, int nr_filme, double suma)
        :actor (std::move(CNP), std::move(nume), std::move(nume_film), nr_filme, suma) {
    suma_plus_bonus = suma * 1.1;
//    std :: cout << nr_filme  << " " << suma << " " << suma_plus_bonus << "\n" ;
}

void actor_principal::citire(std::istream &i) {
    actor::citire(i);
}

void actor_principal::print(std::ostream &o) {
    persoana::print(o);
    o << "Nr filme anterioare: " << nr_filme << '\n';
    o << "Suma ceruta: " << suma << '\n';
}

double actor_principal::getSumaPlusBonus() const {
    return suma_plus_bonus;
}

actor_principal::~actor_principal() = default;


