//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_FILM_H
#define TEMA_3_FILM_H

#include <string>
#include <vector>
#include "persoana.h"

class film {
    std :: string nume_film;
    int durata; // in minute
    std :: string tip;
    std :: vector <persoana*> persoane_part;

public:
    const std::vector<persoana *> &getPersoanePart() const;

    explicit film(std :: vector<persoana*> persoane, std :: string nume_film = "", int durata = 0, std :: string tip = "");
    friend std :: istream& operator >> (std :: istream &i, film& f);
    void citire(std :: istream& i);
    friend std :: ostream& operator << (std :: ostream& o, film& f);
    void afisare(std :: ostream &o);
    ~film();
};


#endif //TEMA_3_FILM_H
