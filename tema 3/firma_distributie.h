//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_FIRMA_DISTRIBUTIE_H
#define TEMA_3_FIRMA_DISTRIBUTIE_H

#include <iostream>
#include "actor.h"
#include "actor_principal.h"
#include "film.h"

template <class t = actor>
class firma_distributie {
    std :: vector <film*> rola_filme;
    static int nr_persoane;
    static int nr_actori;
public:
    firma_distributie() = default;
    explicit firma_distributie(std::vector<film*> rolafilme) {
        for (auto &film: rolafilme)
            firma_distributie::insert(film);
    }

    void insert(film* f) {

//        std :: cout << *f;
        rola_filme.push_back(f);

        for (auto &persoana: f->getPersoanePart()) {
//            std :: cout << *persoana;
            nr_persoane++;
            if (typeid(*persoana).name() == typeid(actor).name() || typeid(*persoana).name() == typeid(actor_principal).name())
                nr_actori++;
        }
    }

    static int getNrPersoane() {
        return nr_persoane;
    }
    static int getNrActori() {
        return nr_actori;
    }

    std :: string operator[](int index) {
        return rola_filme[index-1]->getNumeFilm();
    }

    ~firma_distributie() {
        for (auto &film : rola_filme)
            delete film;
    }
};



#include "firma_distributie.h"
#endif //TEMA_3_FIRMA_DISTRIBUTIE_H
