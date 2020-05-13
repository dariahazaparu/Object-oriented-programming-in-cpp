//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_FIRMA_DISTRIBUTIE_H
#define TEMA_3_FIRMA_DISTRIBUTIE_H

#include "actor.h"
#include "actor_principal.h"

template <class t = actor>
class firma_distributie {
    static int nr_persoane;
    static int nr_actori;
};

template <>
class firma_distributie <actor_principal> {
    static int nr_persoane;
    static int nr_actori;
    static int nr_actori_princ;
};


#endif //TEMA_3_FIRMA_DISTRIBUTIE_H
