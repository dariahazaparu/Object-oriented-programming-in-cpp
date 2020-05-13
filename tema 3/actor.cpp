//
// Created by Daria on 5/12/2020.
//

#include <string>
#include <utility>
#include <iostream>
#include "actor.h"


actor::actor(std :: string CNP, std :: string nume, std :: string nume_film, int nr_filme, double suma)
    : persoana(std::move(CNP), std::move(nume), std::move(nume_film)), nr_filme(nr_filme), suma(suma) {}

void actor::citire(std::istream &i) {
    persoana::citire(i);
    i >> nr_filme >> suma;
}
void actor::print(std::ostream &o) {
    persoana::print(o);
    o << nr_filme << " " << suma << " ";
}

actor::~actor() = default;

