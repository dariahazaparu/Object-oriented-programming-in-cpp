//
// Created by Daria on 3/30/2020.
//

#ifndef TEMA_2_ABONAT_H
#define TEMA_2_ABONAT_H

#include "persoana.h"

class abonat : public persoana {
protected:
    std :: string tel;
public:
    explicit abonat(const std :: string &id = "", const std :: string &name = "", std :: string tel = "");
    abonat(const abonat &a);
    const std :: string &get_tel() const;
    void set_tel(std :: string m_tel);
    friend std :: istream& operator >> (std :: istream &i, abonat &a);
    friend std :: ostream& operator << (std :: ostream &o, abonat &a);
    abonat& operator = (abonat const &a);
    virtual ~abonat() override;
};


#endif //TEMA_2_ABONAT_H
