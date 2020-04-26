//
// Created by Daria on 3/30/2020.
//

#include "abonat_skype.h"
#include <iostream>
#include <utility>

abonat_skype::abonat_skype(const string &id, const string &name, const string &tel, string skype_id)
: abonat(id, name, tel), skype_id(std::move(skype_id)) {
//    std :: cout << "constr ab\n";
}

abonat_skype::abonat_skype(const abonat_skype &a)
    : abonat_skype(a.id, a.name, a.tel, a.skype_id) {}

const string &abonat_skype::get_skype_id() const {
    return skype_id;
}

void abonat_skype::set_skype_id(string m_skype_id) {
    skype_id = std::move(m_skype_id);
}

istream& operator >> (istream &i, abonat_skype &a) {
    i >> a.id;
    i >> a.name;
    i >> a.tel;
    i >> a.skype_id;
    return i;
}

ostream& operator << (ostream &o, abonat_skype &a) {
    o << "ID: " << a.id << '\n' << "Name: " << a.name << '\n' << "Telefon: " << a.tel
    << '\n' << "ID Skype: " << a.skype_id << '\n';
    return o;
}

abonat_skype &abonat_skype::operator=(abonat_skype const &a) {
    if (this == &a) return *this;
    this -> id = a.id;
    this -> name = a.name;
    this -> tel = a.tel;
    this -> skype_id = a.skype_id;
    return *this;
}

abonat_skype::~abonat_skype() = default;
