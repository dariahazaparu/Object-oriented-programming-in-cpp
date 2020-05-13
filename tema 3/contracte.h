//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_CONTRACTE_H
#define TEMA_3_CONTRACTE_H


#include <set>
#include <tuple>
#include "persoana.h"

class contracte {
    std :: set < std :: tuple < persoana*, std :: string, int > > mapa;
public:
    contracte ();
    explicit contracte(std::set<std::tuple<persoana *, std::string, int>> mapa);
    void insert (persoana* a, std :: string b, int c);
    friend std :: ostream& operator << (std :: ostream& o, contracte& c);
    ~contracte();
};


#endif //TEMA_3_CONTRACTE_H
