#include <iostream>
#include <vector>
#include "persoana.h"
#include "film.h"
#include "regizor.h"
#include "actor.h"
#include "actor_principal.h"
#include "tehnic.h"
#include "contracte.h"
#include <tuple>

int main() {

//    persoana a1;
//    a1.citire();
//    a1.afisare();

    std :: vector <persoana*> p1;
    auto *a2 = new persoana("d", "e", "f");
    p1.push_back(a2);
    auto *a3 = new persoana("12", "ana", "film");
    p1.push_back(a3);
    persoana *a4 = new regizor("5", "nu", "nici", 12);
    p1.push_back(a4);
    persoana *a5 = new actor("n", "ed", "ggg", 10, 3000);
    p1.push_back(a5);
    persoana *a6 = new actor_principal("666", "ass", "hehe", 2, 2500);
    p1.push_back(a6);
    persoana *a7 = new tehnic ( "1", "nuvr", "nici", "lumini");
    p1.push_back(a7);
    for ( auto &persoana: p1) {
        std :: cout << *persoana << "/";
    }
    std :: cout << '\n';


    film f0 (p1, "g", 10, "drama");
    std :: cout << f0;

    std :: cout << "\n";
    contracte h;
    h.insert(a5, "nn", 10);
    h.insert(a6, "pp", 15);
    std :: cout << h;

    return 0;
}
