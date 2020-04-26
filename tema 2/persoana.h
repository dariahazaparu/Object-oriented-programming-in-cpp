//
// Created by Daria on 3/30/2020.
//

#ifndef TEMA_2_PERSOANA_H
#define TEMA_2_PERSOANA_H
#include <string>

typedef std::string string;
typedef std::ostream ostream;
typedef std::istream istream;



class persoana {
protected:
    string name;
    string id;
public:
    explicit persoana(string id = "", string name = "");
    persoana(const persoana &a);
    const string &get_id() const;
    void set_id(string m_id);
    const string &get_name() const;
    void setName(string m_name);
    friend istream& operator >> (istream &i, persoana &a);
    friend ostream& operator << (ostream  &o, const persoana &a);
    persoana& operator = (persoana const &a);
    virtual ~persoana();
};


#endif //TEMA_2_PERSOANA_H
