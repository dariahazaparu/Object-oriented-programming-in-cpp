#include <iostream>
#include "persoana.h"
#include "abonat.h"
#include "abonat_skype.h"
#include "agenda.h"

#include <fstream>

std :: ifstream fin ("fisier.in");
std :: ofstream fout ("fisier.out");

int main() {
    auto *a = new agenda();
//    fin >> *a;
    operator>>(fin, *a);
//    auto *b = new agenda();
//    *b = *a;
//    b -> operator=(*a);
//    fout << *b;
//    std :: cout<< a -> size();

    std :: string cerere = a -> operator[](5);
    std :: cout << cerere;
    delete a;
//    delete b;


    return 0;
}
