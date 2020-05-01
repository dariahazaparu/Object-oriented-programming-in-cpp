//
// Created by Daria on 3/30/2020.
//

#ifndef TEMA_2_ABONAT_SKYPE_H
#define TEMA_2_ABONAT_SKYPE_H

#include "abonat.h"

class abonat_skype: public abonat {
protected:
    std :: string skype_id;
public:
    explicit abonat_skype(const std :: string &id = "", const std :: string &name = "", const std :: string &tel = "", std :: string skype_id = "");
    abonat_skype(const abonat_skype& a);
    const std :: string &get_skype_id() const;
    void set_skype_id(std :: string m_skype_id);
    friend std :: istream& operator >> (std :: istream &i, abonat_skype &a);
//    friend std :: ostream& operator << (std :: ostream &o, abonat_skype &a);
    virtual void print (std :: ostream& o);
    abonat_skype& operator = (abonat_skype const &a);
    virtual ~abonat_skype() override;
};


#endif //TEMA_2_ABONAT_SKYPE_H
