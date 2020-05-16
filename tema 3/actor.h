//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_ACTOR_H
#define TEMA_3_ACTOR_H


#include "persoana.h"

class actor : public persoana {
protected:
    int nr_filme;
    double suma;

public:
    explicit actor(std :: string CNP = "", std :: string nume = "", std :: string nume_film = "", int nr_filme = 0, double suma = 0);
    void citire(std :: istream& i) override;
    void print(std :: ostream& o) override;

    double getSuma() const;

    virtual ~actor();
};


#endif //TEMA_3_ACTOR_H
