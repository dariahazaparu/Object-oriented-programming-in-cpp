//
// Created by Daria on 5/12/2020.
//

#include "contracte.h"
#include <iostream>
#include "regizor.h"
#include "actor.h"
#include "actor_principal.h"
#include "tehnic.h"
#include <utility>

contracte::~contracte() {
//    for (auto &tuplu : mapa) {
//        std :: cout << std :: get<0>(tuplu) << " ";
//        persoana *a =  std :: get<0>(tuplu);
//        delete a;
//        std :: cout << a << '\n';
//        delete std :: get<0>(tuplu);
//    }
}

contracte::contracte() =default;

std :: ostream& operator << (std :: ostream& o, contracte& c) {
    o << "--------Toate contractele:\n\n";
    for( auto& i: c.mapa) {
        persoana *a = std :: get<0>(i);
        o << *a;
        o << "Numele filmului din contract: " << std :: get<1>(i) << '\n';
        o << "Suma primita contract: " << std :: get<2>(i) << "\n\n";
    }
    return o;
}

void contracte::insert(persoana *pers, double suma_standard) {
//    std :: cout << suma_standard << " ";
    std::tuple<persoana *, std :: string, int> contr;
    if (typeid(*pers) == typeid(regizor)) {
        suma_standard = regizor :: getSumaFixa();
    }
    if (typeid(*pers) == typeid(actor_principal)) {
//        std :: cout << suma_standard << " ";
//        std :: cout << *(dynamic_cast<actor_principal*>(pers));
        suma_standard = dynamic_cast<actor_principal*>(pers)->getSumaPlusBonus();
//        std :: cout << suma_standard << "\n";
/// nu inteleg de ce aici iese 0 din cast, in main merge perfect
    }
    if (typeid(*pers) == typeid(actor)) {
        suma_standard = dynamic_cast<actor*>(pers)->getSuma();
    }
    contr = std::make_tuple(pers, pers->getNumeFilm(), suma_standard);
    mapa.insert(contr);
}
