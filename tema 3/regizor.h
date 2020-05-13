//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_REGIZOR_H
#define TEMA_3_REGIZOR_H


#include "persoana.h"

class regizor : public persoana {
    int nr_filme;
    static int suma_fixa;
public:
    explicit regizor(std :: string CNP = "", std :: string nume = "", std :: string nume_film = "", int nr_filme = 0);
    void citire(std :: istream &i) override;
    void print(std :: ostream &o) override;
    virtual ~regizor();

};


#endif //TEMA_3_REGIZOR_H
