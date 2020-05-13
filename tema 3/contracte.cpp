//
// Created by Daria on 5/12/2020.
//

#include "contracte.h"
#include <iostream>
#include <utility>

contracte::contracte(std :: set<std :: tuple<persoana *, std :: string, int>> mapa) : mapa(std::move(mapa)) {}

contracte::~contracte() {
    for (auto &tuplu : mapa) {
//        std :: cout << std :: get<0>(tuplu) << " ";
//        persoana *a =  std :: get<0>(tuplu);
//        delete a;
//        std :: cout << a << '\n';
//        delete std :: get<0>(tuplu);
    }
}

contracte::contracte() = default;

std :: ostream& operator << (std :: ostream& o, contracte& c) {
    for( auto& i: c.mapa) {
        persoana *a = std :: get<0>(i);
        o << *a << " ";
        o << std :: get<1>(i) << " ";
        o << std :: get<2>(i) << "\n";
    }
    return o;
}

void contracte::insert(persoana *a, std :: string b, int c) {
    std :: tuple <persoana *, std :: string, int> abc;
    abc = std :: make_tuple (a, b, c);
    mapa.insert(abc);
}


