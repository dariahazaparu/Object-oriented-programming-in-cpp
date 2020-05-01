//
// Created by Daria on 3/30/2020.
//

#include "abonat.h"
#include <iostream>
#include <utility>

abonat::abonat(const std :: string &id, const std :: string &name, std :: string tel)
    : persoana(id, name), tel(std::move(tel)) {
//    std :: cout << "constr a\n";
}

abonat::abonat(const abonat &a)
    : abonat(a.id, a.name, a.tel) {}

const std :: string &abonat::get_tel() const {
    return tel;
}

void abonat::set_tel(std :: string m_tel) {
    tel = std::move(m_tel);
}

std :: istream& operator >> (std :: istream &i, abonat &a) {
    i >> a.id;
    i >> a.name;
    i >> a.tel;
    return i;
}

/*std :: ostream& operator << (std :: ostream &o, abonat &a) {
//    o << "ID: " << a.id << '\n' << "Name: " << a.name << '\n' << "Telefon: " << a.tel << '\n';
    a.print(o);
    return o;
}*/

abonat &abonat::operator=(abonat const &a) {
    if (this == &a) return *this;
    this -> id = a.id;
    this -> name = a.name;
    this -> tel = a.tel;
    return *this;
}

void abonat::print(std :: ostream& o) {
    persoana::print(o);
    o << "Tel: " << tel << '\n';
}

abonat::~abonat() = default;
