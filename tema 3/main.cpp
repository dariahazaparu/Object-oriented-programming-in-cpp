#include <iostream>
#include <vector>
#include "persoana.h"
#include "film.h"
#include "regizor.h"
#include "actor.h"
#include "actor_principal.h"
#include "tehnic.h"
#include "contracte.h"
#include "firma_distributie.h"
#include <tuple>
#include <fstream>



std :: ifstream fin("fisier.in");
std :: ofstream fout ("fisier.out");

int main() {

    std :: vector <persoana*> persoane;
    auto *p1 = new persoana("000", "Izabela", "HSM");
    persoane.push_back(p1);
    auto *p2 = new persoana("001", "Mara", "Blood");
    persoane.push_back(p2);
    persoana *p3 = new regizor("002", "Andreea", "HSM", 12);
    persoane.push_back(p3);
    persoana *p4 = new actor("003", "Brindusa", "Blood", 2, 3000);
    persoane.push_back(p4);
    persoana *p5= new actor_principal("004", "Alina", "HSM", 3, 2500);
    persoane.push_back(p5);
    persoana *p6 = new tehnic ( "005", "Sara", "HSM", "lumini");
    persoane.push_back(p6);

    fout << "Afisare persoane din primul vector de persoane :D\n";
    int i = 1;
    for ( auto &persoana: persoane) {
//        std :: cout << typeid(*persoana).name() << " ";
        fout << i << ") " << *persoana << '\n';
//        std :: cout << persoana->getNumeFilm() << " ";
        i++;
    }
    fout << "Sfarsit persoane. ;) am vrut doar sa verific fuctiile virtuale de afisare.\n\n\n";


    std :: vector <film*> filme;
    // am vrut sa fac fara pointer dar mi se oprea .exe si am incercat asa si a mers si am lasat asa :((

    film *f0 = new film (persoane, "HSM", 100, "musical");
//    fout << *f0;
    filme.push_back(f0);

    film *f1 = new film(persoane, "Blood", 1000, "drama");
//    fout << *f1;
    filme.push_back(f1);

    for (auto &film :filme) {
        fout << *film;
    }
    fout << '\n';
    // deci ce-am facut, practic in vectorul de persoane am pus toate persoanele existente si in
    // fiecare film au ramas doar cele care lucreaza la filmul respectiv :D


    contracte h;
    for (auto &i : persoane) {
        h.inserting(i, 2500); // suma standard pentru toate tipurile de persoane
    }
    fout << h;

    // pana aici merge perfect :D

//    firma_distributie<> F0;
//    F0.insert(f1);
//    std :: cout << firma_distributie<>::getNrPersoane() << " ";
//
//    firma_distributie<actor_principal> F;
//    F.insert(f0);
//    std :: cout << firma_distributie<actor_principal>::getNrPersoane() << " ";
//    std :: cout << firma_distributie<actor_principal>::getNrActori() << " ";
//    std :: cout << firma_distributie<actor_principal>::getNrActoriPrinc();

//    delete f1;
    return 0;
}
