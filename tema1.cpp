#include <iostream>
using namespace std;
const int NMAX = 1000;
struct pereche
{
    int maxim;
    int pozitie;
};

class vector
{
private:
    int n; ///dimensiune vector
    int v[NMAX]; ///vectorul
public:
    vector(int dim = 0, int val = 0);
    vector(const vector& x);
    ~vector();
    friend ostream& operator << (ostream  &o, const vector &a);
    friend istream& operator >> (istream &i, vector &a);
    vector& operator = (vector const &x);
    void reactualizare(int dim, int val);
    int suma_elemente();
    pereche pozitie_maxim();
    void sortare();
    int operator * (vector const &x);

};
vector::vector(int dim, int val)
{
    n = dim;
    for(int i = 0; i < dim; i++)
    {
        v[i] = val;
    }
}
vector::vector( const vector& x)
{
    ///cout<<"copiere"<<endl;
    this->n = x.n;
    for (int i = 0; i < x.n; i++)
    {
        this->v[i] = x.v[i];
    }
}
vector::~vector()
{
    n = 0;
}
ostream& operator << (ostream &o, const vector &a)
{
    o << "=[";
    for (int i = 0; i < a.n; i++)
    {
        if (i != a.n - 1)
        {
            o << a.v[i] << ", ";
        }
        else
        {
            o << a.v[i];
        }

    }
    o << "]" << endl;
    return o;
}
istream& operator >> (istream &i, vector &a) {
    cout << "dim:";
    i >> a.n;
    cout << "componente:";
    for (int j = 0; j < a.n; j++)
    {
        i >> a.v[j];
    }
    return i;
}
vector& vector::operator = (vector const &x)
{
    ///cout<<"="<<endl;
    this->n =  x.n;
    for (int i = 0; i < x.n; i++)
    {
        this->v[i] = x.v[i];
    }
    return *this;
}
void vector::reactualizare(int dim, int val)
{
    if (dim <= NMAX) ///daca dimensiunea e prea mare, metoda nu se executa
    {
        if (n > dim)
        {
            for (int i = 0; i < dim; i++)
            {
                v[i] = val;
            }
            for (int i = dim; i < n; i++)
            {
                v[i] = 0;
            }
        }
        else
        {
            n = dim;
            for (int i = 0; i < n; i++)
            {
                v[i] = val;
            }
        }
    }
}
int vector::suma_elemente()
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += v[i];
    }
    return suma;
}
pereche vector::pozitie_maxim()
{
    pereche p;
    p.maxim = v[0];
    p.pozitie = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > p.maxim)
        {
            p.maxim = v[i];
            p.pozitie = i;
        }
    }
    return p;
}
void vector::sortare()
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}
int vector::operator * (vector const &x)
{
    int produs = 0;
    if (x.n != n) return 0;
    else
    {
        for (int i = 0; i < n; i++) {
            produs += x.v[i] * v[i];
        }
        return produs;
    }
}

void citire(int &nr, vector comp[])
{
    cout << "numar de obiecte citite: ";
    cin >> nr;
    cout << "componente obiecte:" << endl;
    for (int i = 0; i < nr; i++)
    {
        cin >> comp[i];
    }
    for (int i = 0; i < nr; i++)
    {
        cout << "Vectorul " << i+1 << ": " << comp[i];
    }
}

int main()
{
    vector comp[100];
    int nr;
    citire (nr, comp);

    ///constructor de initializare
    vector a;

    ///citire de vector
    cin >> a;

    ///afisare vector
    cout << "a" << a;

    ///constructor de initializare cu parametri
    vector a1(10, 1);
    cout<<"vector initializat de parametri a1 "<<a1;

    ///constructor de copiere
    vector b(a);
    cout << "b" << b;

    ///metoda operator public de atribuire
    vector c;
    c = a;
    cout << "c" << c;

    ///metoda de reactualizare
    b.reactualizare(5, 10);
    cout << "b reactualizat " << b;

    ///metoda calcul suma
    cout<<"suma elementelor din vectorul a este "<<a.suma_elemente()<<endl;

    ///metoda gasire maxim si pozitia
    pereche t;
    t = a.pozitie_maxim();
    cout << "maximul este " << t.maxim << " pe pozitia " << t.pozitie << endl;

    ///metoda sortare
    a.sortare();
    cout << "a sortat" << a;

    ///metoda operator * produs scalar
    int k = a * c;
    cout << "produsul scalar dintre a sortat si c este " << k;

    return 0;
}
