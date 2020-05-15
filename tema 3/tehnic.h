//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_TEHNIC_H
#define TEMA_3_TEHNIC_H

#include "persoana.h"

class tehnic : public persoana {
    std :: string domeniu;
public:
    explicit tehnic(std :: string CNP = "", std :: string nume = "", std :: string nume_film = "", std :: string domeniu = "");
    void citire(std :: istream &i) override ;
    void print(std :: ostream& o) override ;
    virtual ~tehnic();
};


#endif //TEMA_3_TEHNIC_H
