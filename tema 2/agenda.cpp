//
// Created by Daria on 3/30/2020.
//

#include "agenda.h"
#include <iostream>
#include<algorithm>
#include <typeinfo>

enum tip_persoana {
    PERSOANA, ABONAT, ABONAT_SKYPE
};

agenda::agenda(int n)
    : AG(n) {}

agenda::agenda(const agenda &ag) {
    int n = ag.AG.size();
    for (int i = 0; i < n; ++i) {
        if (typeid(*ag.AG[i]) == typeid(persoana)) {
            persoana *ab = new persoana();
            *ab = *ag.AG[i];
            AG.push_back(ab);
        } else if (typeid(*ag.AG[i]) == typeid(abonat)) {
            abonat *ab = new abonat();
            *ab = dynamic_cast<const abonat &>(*ag.AG[i]);
            // cast la const pentru ca altfel nu merge operatorul
            AG.push_back(ab);
        } else if (typeid(*ag.AG[i]) == typeid(abonat_skype)) {
            abonat_skype *ab = new abonat_skype();
            *ab = dynamic_cast<const abonat_skype &>(*ag.AG[i]);
            AG.push_back(ab);
        }
    }
//        std :: copy(ag.AG.begin(), ag.AG.end(), AG.begin());
//        std :: copy(ag.AG.begin()+0, ag.AG.begin()+n-1, AG.begin());
// am incercat cu acest copy dar imi opreste executia si nu inteleg de ce
}

std :: istream& operator >> (std :: istream &i, agenda &ag) {
    int n;
    i >> n;
    int t;
    tip_persoana tip;
    for (int j = 0; j < n; ++j) {
        i >> t;
        tip = (tip_persoana) t;
        if (tip == PERSOANA) {
            persoana *ab = new persoana();
            i >> *ab;
            ag.AG.push_back(ab);
    //            std :: cout << *ag.AG[j];
        } else if (tip == ABONAT) {
            abonat *ab = new abonat();
            i >> *ab;
    //            std :: cout << ab;
            ag.AG.push_back(ab);
    //            std :: cout << *(dynamic_cast<abonat*>(ag.AG[j]));
    //            std :: cout << typeid(*ag.AG[j]).name();
        } else if (tip == ABONAT_SKYPE) {
            abonat_skype *ab = new abonat_skype();
            i >> *ab;
            ag.AG.push_back(ab);
    //            std :: cout << *ag.AG[j];
        }
        // nu m-a lasat sa folosesc switch pt ca declaram acel pointer la primul caz
    }
    return i;
}

std :: ostream& operator << (std :: ostream &o, agenda &ag) {
    o << "Agenda:\n";
    int n = ag.AG.size();
    for (int i = 0; i < n; ++i) {
        o << i+1 << ")\n";
        o << *ag.AG[i];
        o << '\n';
    }
    return o;
}

agenda &agenda::operator=(agenda const &ag) {
    if (this == &ag) return *this;
    int n = ag.AG.size();
    for (int i = 0; i < n; ++i) {
        if (typeid(*ag.AG[i]) == typeid(persoana)) {
            persoana *ab = new persoana();
            *ab = *ag.AG[i];
            AG.push_back(ab);
        } else if (typeid(*ag.AG[i]) == typeid(abonat)) {
            abonat *ab = new abonat();
            *ab = dynamic_cast<const abonat &>(*ag.AG[i]);
            AG.push_back(ab);
        } else if (typeid(*ag.AG[i]) == typeid(abonat_skype)) {
            abonat_skype *ab = new abonat_skype();
            *ab = dynamic_cast<const abonat_skype &>(*ag.AG[i]);
            AG.push_back(ab);
        }
    }
    return *this;
}

std :: string agenda::operator[](long unsigned int &index) {
//    std :: cout << index << " " << AG.size();
    if (index >= AG.size()) {
        std :: cout << "index prea mare";
    }
    return AG[index - 1] -> get_name();
}

int agenda::size() {
    return AG.size();
}

agenda::~agenda() {
    for (auto &persoana : AG ) {
        delete persoana;
    }
}

persoana *agenda::operator[](std::string nume_de_cautat) {
    int n = AG.size();
    for ( auto &i: AG) {
        if (i->get_name() == nume_de_cautat) {
            return i;
        }
    }
    return nullptr; // garantez input corect :D
}

