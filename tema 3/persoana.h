//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_PERSOANA_H
#define TEMA_3_PERSOANA_H


#include <string>

class persoana {

protected:
    std :: string CNP;
    std :: string nume;
    std :: string nume_film;

public:
    explicit persoana(std :: string CNP = "", std :: string nume = "", std :: string nume_film = "");
    friend std :: istream & operator >> (std :: istream& i, persoana& a);
    virtual void citire(std :: istream &i);
    friend std :: ostream& operator << (std :: ostream& o, persoana& a);
    virtual void print(std :: ostream& o);

    const std::string &getNumeFilm() const;
    virtual ~persoana();
};

#endif //TEMA_3_PERSOANA_H
