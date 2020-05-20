//
// Created by Daria on 5/15/2020.
//

#ifndef TEMA_3_FIRMA_DISTRIBUTIE_SPEC_H
#define TEMA_3_FIRMA_DISTRIBUTIE_SPEC_H

#include "actor_principal.h"
#include "firma_distributie.h"

template<>
class firma_distributie<actor_principal> {
    std :: vector <film*> rola_filme;
    static int nr_persoane;
    static int nr_actori;
    static int nr_actori_princ;

public:
    firma_distributie() = default;
    explicit firma_distributie(std::vector<film *> &rolafilme) {
        for (auto &film: rolafilme)
            insert(film);
    }

    void insert(film *f) {
        //        std :: cout << *f;
        rola_filme.push_back(f);

        for (auto &persoana: f->getPersoanePart()) {
//            std :: cout << *persoana;
            nr_persoane++;
            if (typeid(*persoana).name() == typeid(actor).name() || typeid(*persoana).name() == typeid(actor_principal).name())
                nr_actori++;
            if (typeid(*persoana).name() == typeid(actor_principal).name())
                nr_actori_princ++;
        }
    }

    static int getNrPersoane() {
        return nr_persoane;
    }
    static int getNrActori()  {
        return nr_actori;
    }

    static int getNrActoriPrinc() {
        return nr_actori_princ;
    }

//    std :: string operator[](int index) {
//        return rola_filme[index-1]->getNumeFilm();
//    }

    ~firma_distributie() {
        for (auto &film : rola_filme)
            delete film;
    }
};

#endif //TEMA_3_FIRMA_DISTRIBUTIE_SPEC_H
