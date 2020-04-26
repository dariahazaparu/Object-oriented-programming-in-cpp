//
// Created by Daria on 3/30/2020.
//

#ifndef TEMA_2_ABONAT_H
#define TEMA_2_ABONAT_H

#include "persoana.h"

class abonat : public persoana {
protected:
    string tel;
public:
    explicit abonat(const string &id = "", const string &name = "", string tel = "");
    abonat(const abonat &a);
    const string &get_tel() const;
    void set_tel(string m_tel);
    friend istream& operator >> (istream &i, abonat &a);
    friend ostream& operator << (ostream &o, abonat &a);
    abonat& operator = (abonat const &a);
    virtual ~abonat() override;
};


#endif //TEMA_2_ABONAT_H
