//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_ACTOR_PRINCIPAL_H
#define TEMA_3_ACTOR_PRINCIPAL_H


#include "actor.h"

class actor_principal : public actor {
    double suma_plus_bonus;
public:
    explicit actor_principal(std :: string CNP = "", std :: string nume = "", std :: string nume_film = "", int nr_filme = 0, double suma = 0);
    void citire ( std :: istream& i) override;
    void print (std :: ostream& o) override;

    double getSumaPlusBonus() const;

    virtual ~actor_principal();
};

#endif //TEMA_3_ACTOR_PRINCIPAL_H
