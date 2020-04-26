//
// Created by Daria on 3/30/2020.
//

#include "persoana.h"
#include <iostream>
#include <utility>

persoana::persoana(string id, string name) : id(std::move(id)), name(std::move(name)) {
//    std :: cout<<"constr p\n";
}

persoana::persoana(const persoana &a)
        : id(a.id), name(a.name) {}

const string &persoana::get_id() const {
    return id;
}

void persoana::set_id(string m_id) {
    id = std::move(m_id);
}

const string &persoana::get_name() const {
    return name;
}

void persoana::setName(string m_name) {
    name = std::move(m_name);
}

istream& operator >> (istream &i, persoana &a) {
    i >> a.id;
    i >> a.name;
    return i;
}

ostream& operator << (ostream &o, const persoana &a) {
    o << "ID:" << a.id << '\n' << "Name:" << a.name << '\n';
    return o;
}

persoana &persoana::operator=(persoana const &a) {
    if (this == &a) return *this;
    this -> id = a.id;
    this -> name = a.name;
    return *this;
}

persoana::~persoana() = default;
