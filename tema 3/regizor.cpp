//
// Created by Daria on 5/12/2020.
//

#include "regizor.h"

#include <utility>
#include <iostream>

int regizor :: suma_fixa = 5000;

regizor::regizor(std :: string CNP, std :: string nume, std :: string nume_film, int nr_filme)
        : persoana(std::move(CNP), std::move(nume), std::move(nume_film)), nr_filme(nr_filme) {}

void regizor::citire(std :: istream &i) {
    persoana::citire(i);
    i >> nr_filme;
}

void regizor::print(std::ostream &o) {
    persoana::print(o);
    o << "Filme regizate: " << nr_filme << '\n';
}

int regizor::getSumaFixa() {
    return suma_fixa;
}

regizor::~regizor() {};
