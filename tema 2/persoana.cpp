//
// Created by Daria on 3/30/2020.
//

#include "persoana.h"
#include <iostream>
#include <utility>

persoana::persoana(std :: string id, std :: string name) : id(std::move(id)), name(std::move(name)) {
//    std :: cout<<"constr p\n";
}

persoana::persoana(const persoana &a)
        : id(a.id), name(a.name) {}

const std :: string &persoana::get_id() const {
    return id;
}

void persoana::set_id(std :: string m_id) {
    id = std::move(m_id);
}

const std :: string &persoana::get_name() const {
    return name;
}

void persoana::setName(std :: string m_name) {
    name = std::move(m_name);
}

std :: istream& operator >> (std :: istream &i, persoana &a) {
    i >> a.id;
    i >> a.name;
    return i;
}

std :: ostream& operator << (std :: ostream &o, const persoana &a) {
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
