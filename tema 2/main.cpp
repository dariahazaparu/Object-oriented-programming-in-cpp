#include <iostream>
#include "persoana.h"
#include "abonat.h"
#include "abonat_skype.h"
#include "agenda.h"

#include <fstream>

std :: ifstream fin ("fisier.in");
std :: ofstream fout ("fisier.out");

int main() {

    agenda Agenda_1;
    fin >> Agenda_1;
    fout << Agenda_1;

//    pentru verificare copiere si atribuire
//    agenda Agenda_2(Agenda_1);
//    fout << Agenda_2;
//    agenda Agenda_3;
//    Agenda_3 = Agenda_2;
//    fout << Agenda_3;


    long unsigned int index;
    fin >> index;
    std :: string cerere = Agenda_1[index];
    std :: cout << "Numele cerut este " << cerere << "." <<'\n';

    std :: string cauta_nume;
    fin >> cauta_nume;
    persoana *vip = Agenda_1 [cauta_nume];
    std :: cout << "Persoana cautata este: \n" << *vip;




    return 0;
}
