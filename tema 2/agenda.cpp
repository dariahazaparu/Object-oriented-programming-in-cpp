//
// Created by Daria on 3/30/2020.
//

#include "agenda.h"
#include <iostream>
//#include <utility>

agenda::agenda(int n) {
    AG.resize(n);
}

agenda::agenda(const agenda &ag) {
    int n = ag.AG.size();
    for (int i = 0; i < n; ++i) {
        AG.push_back(new abonat_skype(*ag.AG[i]));
    }
}

std :: istream& operator >> (std :: istream &i, agenda &ag) {
    int n;
    i >> n;
    int t;
    for (int j = 0; j < n; ++j) {
        i >> t;
        if (t == 0) {
            persoana *ab = new abonat_skype();
            i >> *ab;
            ag.AG.push_back(dynamic_cast<abonat_skype *>(ab));
//            std :: cout << *ag.AG[j];
        } else if (t == 1) {
            abonat *ab = new abonat_skype();
            i >> *ab;
//            std :: cout << ab;
            ag.AG.push_back(dynamic_cast<abonat_skype *>(ab));
//            std :: cout << *ag.AG[j];
        } else if (t == 2) {
            abonat_skype *ab = new abonat_skype();
            i >> *ab;
            ag.AG.push_back(ab);
//            std :: cout << *ag.AG[j];
        }
    }
    return i;
}

std :: ostream& operator << (std :: ostream &o, agenda &ag) {
    o << "Agenda:\n";
    int n = ag.AG.size();
    for (int i = 0; i < n; ++i) {
        o << i+1 << ")\n";
        operator << (o, *ag.AG[i]);
        o << '\n';
    }
    return o;
}

agenda &agenda::operator=(agenda const &ag) {
    if (this == &ag) return *this;
    int n = ag.AG.size();
    for (int i = 0; i < n; ++i) {
        abonat_skype *ab = new abonat_skype();
        *ab = *ag.AG[i];
        this -> AG.push_back(ab);
    }
    return *this;
}

std :: string agenda::operator[](int index) {
    if (index >= AG.size()) {
        std :: cout << "index prea mare";
    }
    return AG[index] -> get_name();
}

int agenda::size() {
    return AG.size();
}

agenda::~agenda() = default;

