//
// Created by Daria on 3/30/2020.
//

#ifndef TEMA_2_AGENDA_H
#define TEMA_2_AGENDA_H

#include <vector>
#include "abonat_skype.h"

class agenda {
    std :: vector <persoana*> AG;
public:

    explicit agenda(int n = 0);
    agenda (const agenda &ag);
    int size();
    friend std :: istream& operator >> (std :: istream &i , agenda &ag);
    friend std :: ostream& operator << (std :: ostream &o, agenda &ag);
    agenda& operator = (agenda const &ag);
    std :: string operator [] (long unsigned int &index);
    persoana* operator [] (std :: string nume_de_cautat);
    virtual ~agenda();

};


#endif //TEMA_2_AGENDA_H
