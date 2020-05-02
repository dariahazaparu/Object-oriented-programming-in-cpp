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
    // initial mi l-a sugerat clion sa-l folosesc
    // am inteles ca e de fapt o metoda prin care se evita o copiere inutila,
    // adica paramentru primit este transformat intr-o referinta rvalue si se evita copierea lui in interiorul functiei.
    // rvalue adica o variabila care nu se poate modifica cu o alta valoare, ea exista pur si simplu, cum e 7, sau care e temporara, cum e i+1
    // praaactic parametrul primit de std::move se transforma intr-un rvalue care este de fapt un cast catre &&
    // si nu se mai copiaza
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
