# Object-oriented-programming
<br>

#### Tema 1. 
Clasa "Vector" (vector de numere întregi):
- membri privati pentru vectorul propriuzis si numarul de elemente;
	- constructor pentru initializarea cu un numar dat pe toate componentele        (primeste ca parametru numarul respectiv si numarul componentelor);
   	- constructori pentru initializare si copiere;
    - destructor (în cazul alocarii statice, se seteaza dimensiunea vectorului la zero, iar în cazul alocarii dinamice, se dezaloca zona de memorie utilizata);
    - etoda-operator public de atribuire =;
 - metoda publica pentru reactualizarea numarului de componente si initializarea componentelor cu un numar dat (primeste ca parametru numarul respectiv si numarul componentelor);
 - metoda publica pentru calculul sumei tuturor elementelor vectorului;
 - metoda publica pentru găsirea maximului și a pozitiei lui;
 - metoda publica pentru sortarea crescătoare a vectorului; </br>
 
Produsul scalar a doi vectori de aceeasi lungime, implementa/t prin supraincarcarea operatorului *.
<br>

#### Tema 2.
Se dau urmatoarele clase:
  - Clasa Persoana(id, nume) 
  - Clasa Abonat:Persoana(nr_telefon) 
  - Clasa Abonat_Skype: Abonat (id_skype) 
  - Clasa Abonat_Skype_Romania (adresa_mail) : Abonat_Skype 
  - Clasa Abonat_Skype_Extern(tara) : Abonat_Skype <br/>
  
Sa se construiasca clasa Agenda ce contina o lista de abonati si sa se supraincarce operatorul [ ](indexare)care returneaza abonatul cu numele precizat.
<br> 
 
#### Tema 3.
La realizarea unui film(nume,tip,durata), participa o mulțime de persoane: un regizor, actori, personal tehnic etc. Fiecare personal (cnp, nume, nume_film) are prevăzut prin contract un procent din încasări, drept urmare  primește, pentru fiecare film la care participa, o anumită suma. Actorii, dacă sunt personaje principale, primesc un bonus de 10% din încasări, iar regizorul are prevăzut și o suma fixa, indiferent de calitatea filmului produs.
Structura de date: set<tuple<persoana, film, bonus>> 

Cerința suplimentară: 
- Să se adauge toate campurile relevante pentru modelarea acestei probleme.
- Sa se construiască clasa template FirmaDistributie care sa conțină informații despre filmele realizate într-un an. Clasa conțină numărul total de persoane implicat incrementat automat), numărul de actori (incrementat automat) și o structura de obiecte, alocată dinamic.
- Să se realizeze o specializare pentru tipul Actor, care sa conțină numărul actorilor care au fost distribuiți în roluri principale.
<br>

#### Proiect suplimentar 2021 (ETTI).
În noua aplicație web pe care ați dezvoltat-o este necesară introducerea unor elemente suplimentare de securitate. Pentru asta veți dezvolta o bibliotecă de Password Policies. Aceste politici de parolă sunt configurate de fiecare client care folosește biblioteca voastră și apoi fiecare parola setată de utilizatori este verificată contra acestor reguli. 
<br>
Ele sunt:
- Length: restricția poate specifica lungimea minimă sau lungimea minimă și maximă a unei parole.
- Class: restricția spune câte clase diferite de caractere trebuie să aibă minim parola; clasele sunt: literă mică, literă mare, cifră și alte caractere
- Must Include - parola trebuie obligatoriu să includă cel puțin un caracter din clasa specificată.
- Must Not Include - parola trebuie obligatoriu să NU includă niciun caracter din clasa respectivă.
- Repetition - restricția impune de câte ori se poate repeta consecutiv același caracter în parolă
- Consecutive - restricția impune un număr maxim de caractere consecutive (ex: abc sau 123)<br/>

Dându-se un set de politici de parolă sigură și apoi o listă de parole, să se afișeze pentru fiecare din ele OK sau NOK, în funcție de respectarea sau nu a tuturor acestor politici.
<br><br>
	**Date de intrare**
<br>
Pe prima linie se află un număr întreg pozitiv n, necunoscut de mare, reprezentând numărul de reguli care trebuie respectate. Pe următoarele n linii se află definiția unei reguli, în următoarele formate posibile:
<br><br>
	**Date de ieșire**
<br>
Pentru fiecare parolă verificată, se va afișa OK dacă parola respectă TOATE regulile specificate, sau NOK dacă există măcar o regulă care nu este respectată.
