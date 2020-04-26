#include <iostream>
#include "persoana.h"
#include "abonat.h"
#include "abonat_skype.h"
#include "agenda.h"

#include <fstream>

std :: ifstream fin ("fisier.in");
std :: ofstream fout ("fisier.out");

int main() {
/*
    auto *a = new agenda();
//    fin >> *a;
    operator>>(fin, *a);
    auto *b = new agenda();
    *b = *a;
//    b -> operator=(*a);
    fout << *b;
//    std :: cout<< a -> size();
    string ceva = a -> operator[](1);
    std :: cout << ceva;
    delete a;
//    delete b;
*/

    agenda a;
    fin >> a;
    fout << a;
    agenda b(a);
    fout<<b;
//    agenda b;
//    b = a;
//    fout << b;
//    string ceva = a[5];
//    std :: cout << ceva;
    return 0;
}
