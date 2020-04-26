//
// Created by Daria on 3/30/2020.
//

#ifndef TEMA_2_ABONAT_SKYPE_H
#define TEMA_2_ABONAT_SKYPE_H

#include "abonat.h"

class abonat_skype: public abonat {
protected:
    string skype_id;
public:
    explicit abonat_skype(const string &id = "", const string &name = "", const string &tel = "", string skype_id = "");
    abonat_skype(const abonat_skype& a);
    const string &get_skype_id() const;
    void set_skype_id(string m_skype_id);
    friend istream& operator >> (istream &i, abonat_skype &a);
    friend ostream& operator << (ostream &o, abonat_skype &a);
    abonat_skype& operator = (abonat_skype const &a);
    virtual ~abonat_skype() override;
};


#endif //TEMA_2_ABONAT_SKYPE_H
