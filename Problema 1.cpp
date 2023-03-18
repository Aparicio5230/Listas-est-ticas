#include <iostream>
#include <ostream>

#define TAM 50

using namespace std;

class Mamifero {
  private:

    int id;
    string comida;
    string fechaNacimiento;
    string lugarNacimiento;
    string nombreDueno;
    string nombreAnimal;
    string razaAnimal;
    string lugarResidencia;

  public:
    Mamifero();

    string dameComida()const;
    string dameFechaNacimiento()const;
    string dameLugarNacimineto()const;
    string damenombreDueno()const;
    string dameNombreAnimal()const;
    string dameRazaAnimal()const;
    string dameLugarResidencia()const;
    int dameId()const;

    void fijaId(int);
    void fijaComida(string&);
    void fijaFechaNacimiento(string&);
    void fijaLugarNacimineto(string&);
    void fijanombreDueno(string&);
    void fijaNombreAnimal(string&);
    void fijaRazaAnimal(string&);
    void fijaLugarResidencia(string&);

    void cambiaPropietario(string&);
    void cambiaRecidencia(string&);

    bool operator ==(const Mamifero)const;
    bool operator !=(const Mamifero)const;
    bool operator <(const Mamifero)const;
    bool operator <=(const Mamifero)const;
    bool operator >(const Mamifero)const;
    bool operator >=(const Mamifero)const;

    /*friend istream& operator >> (istream &x, Mamifero &y) {

        cout<<"Id del Animal";
        x>>y.id;
        cout<<"Nombre del animal: ";
        x>>y.nombreAnimal;
        cout<<"Raza: ";
        x>>y.razaAnimal;
        cout<<"Fecha Nacimineto: ";
        x>>y.fechaNacimiento;
        cin.ignore();
        cout<<"Lugar Nacimineto: ";
        x>>y.lugarNacimiento;
        cout<<"Nombre del Propietario: ";
        x>>y.nombreDueno;
        cout<<"Comida o dieta del animal: ";
        x>>y.comida;

        return x;
    }

    friend ostream& operator << (ostream &x, Mamifero& y) {
        x<<"Id del animal: "<<y.id<<endl;
        x<<"Nombre del animal: "<<y.nombreAnimal<<endl;
        x<<"Raza del animal: "<<y.razaAnimal<<endl;
        x<<"Fecha de nacimiento: "<<y.fechaNacimiento<<endl;
        x<<"Lugar de residencia: "<<y.lugarResidencia<<endl;
        x<<"Nombre del dueno: "<<y.nombreDueno<<endl;
        x<<"Dieta o Comida: "<<y.comida<<endl;

        return x;
    }*/

    Mamifero operator = (const Mamifero);
};

Mamifero::Mamifero() {

}

bool Mamifero::operator==(const Mamifero m) const {
    return dameId() == m.dameId();
}

bool Mamifero::operator!=(const Mamifero m) const {
    return dameId() != m.dameId();
}

bool Mamifero::operator<(const Mamifero m) const {
    return dameId() < m.dameId();
}

bool Mamifero::operator<=(const Mamifero m) const {
    return dameId() <= m.dameId();
}

bool Mamifero::operator>(const Mamifero m) const {
    return dameId() > m.dameId();
}

bool Mamifero::operator>=(const Mamifero m) const {
    return dameId() >= m.dameId();
}

Mamifero Mamifero::operator=(const Mamifero m) {
    id = m.id;
    nombreAnimal = m.nombreAnimal;
    nombreDueno = m.nombreDueno;
    razaAnimal = m.razaAnimal;
    lugarNacimiento = m.lugarNacimiento;
    lugarResidencia = m.lugarResidencia;
    comida = m.comida;
    fechaNacimiento = m.fechaNacimiento;
    return *this;
}

int Mamifero::dameId() const {
    return id;
}

void Mamifero::fijaId(int i) {
    id = i;
}

string Mamifero::dameComida() const {
    return comida;
}

string Mamifero::dameFechaNacimiento() const {
    return fechaNacimiento;
}

string Mamifero::dameLugarNacimineto() const {
    return lugarNacimiento;
}

string Mamifero::damenombreDueno() const {
    return nombreDueno;
}

string Mamifero::dameNombreAnimal() const {
    return nombreAnimal;
}

string Mamifero::dameRazaAnimal() const {
    return razaAnimal;
}

string Mamifero::dameLugarResidencia() const {
    return lugarResidencia;
}

void Mamifero::fijaComida(string& c) {
    comida = c;
}

void Mamifero::fijaFechaNacimiento(string& fN) {
    fechaNacimiento = fN;
}

void Mamifero::fijaLugarNacimineto(string& lN) {
    lugarNacimiento = lN;
}

void Mamifero::fijanombreDueno(string& nD) {
    nombreDueno = nD;
}

void Mamifero::fijaNombreAnimal(string& nA) {
    nombreAnimal = nA;
}

void Mamifero::fijaRazaAnimal(string& rA) {
    razaAnimal = rA;
}

void Mamifero::fijaLugarResidencia(string& lR) {
    lugarResidencia = lR;
}

void Mamifero::cambiaPropietario(string& nuevo) {
    nombreDueno = nuevo;
}

void Mamifero::cambiaRecidencia(string& nuevo) {
    lugarResidencia = nuevo;
}

class Felino : public Mamifero {
  private:

  public:
    Felino() : Mamifero() { }

};



class GatoDomestico : public Felino {
  private:

    int id;
    string nombre;
    string dueno;
    string direccion;

  public:
    GatoDomestico() : Felino() { }

    int dameId()const;
    string dameNombre()const;
    string dameDueno()const;
    string dameDireccion()const;

    void fijaId(int);
    void fijaNombre(string);
    void fijaDueno(string);
    void fijaDireccion(string);

    bool operator ==(const GatoDomestico)const;
    bool operator !=(const GatoDomestico)const;
    bool operator <(const GatoDomestico)const;
    bool operator <=(const GatoDomestico)const;
    bool operator >(const GatoDomestico)const;
    bool operator >=(const GatoDomestico)const;

    GatoDomestico& operator = (const GatoDomestico&);

    friend istream& operator >> (istream &x, GatoDomestico &z) {

        cout<<"ID del animal: ";
        x>>z.id;
        cout<<"Nombre Animal: ";
        x>>z.nombre;
        cout<<"Nombre deuno: ";
        x>>z.dueno;
        cout<<"Direccion: ";
        x>>z.direccion;

        return x;
    }

    friend ostream& operator << (ostream&x, GatoDomestico&z) {

        x<<"Id del animal: "<<z.id<<endl;
        x<<"Nombre del animal: "<<z.nombre<<endl;
        x<<"Nombre del dueno: "<<z.dueno<<endl;
        x<<"Direccion de residecia : "<<z.direccion<<endl;

        return x;
    }
};

GatoDomestico& GatoDomestico::operator=(const GatoDomestico& g) {
    id = g.id;
    nombre = g.nombre;
    dueno = g.dueno;
    direccion = g.direccion;

    return *this;
}

int GatoDomestico::dameId() const {
    return id;
}

string GatoDomestico::dameNombre() const {
    return nombre;
}

string GatoDomestico::dameDueno() const {
    return dueno;
}

string GatoDomestico::dameDireccion() const {
    return direccion;
}

void GatoDomestico::fijaId(int i) {
    id = i;
}

void GatoDomestico::fijaNombre(string n) {
    nombre = n;
}

void GatoDomestico::fijaDueno(string d) {
    dueno = d;
}

void GatoDomestico::fijaDireccion(string d) {
    direccion = d;
}

bool GatoDomestico::operator==(const GatoDomestico g) const {
    return dameId() == g.dameId();
}

bool GatoDomestico::operator!=(const GatoDomestico g) const {
    return dameId() != g.dameId();
}

bool GatoDomestico::operator<(const GatoDomestico g) const {
    return dameId() < g.dameId();
}

bool GatoDomestico::operator<=(const GatoDomestico g) const {
    return dameId() <= g.dameId();
}

bool GatoDomestico::operator>(const GatoDomestico g) const {
    return dameId() > g.dameId();
}

bool GatoDomestico::operator>=(const GatoDomestico g) const {
    return dameId() >= g.dameId();
}

////////////////////////////////////////////////////////////// lista

class Lista {
  private:
    GatoDomestico datos[TAM];
    int ultimo;

  public:
    Lista() : ultimo(-1) { }

    bool vacia()const;
    bool llena()const;

    bool inserta(GatoDomestico,int);
    bool elimina(int);
    ///busca, ordena despues

    GatoDomestico recupera(int)const;

    int primero()const;
    int posUltimo()const;

    void imprime();

    int buscar(GatoDomestico);


};

GatoDomestico Lista::recupera(int posicion) const {
    if(vacia() || posicion < 0 || posicion > ultimo-1) {
        cout<<"No se encontro recupera, recupera"<<endl;
        ///exeptions
    } else {
        return datos[posicion];
    }
}

int Lista::posUltimo()const {
    if(vacia()) {
        return -1;
    }
    return ultimo;
}

int Lista::buscar(GatoDomestico elemento) {
    int i=0;
    while(i>=ultimo) {
        if(elemento == datos[i]) {
            return i;
        }
        i++;
    }
    return -1;
}

void Lista::imprime() {
    int i=0;

    while( i <= ultimo) {
        cout<<datos[i++]<<endl;
    }
    cout<<endl;
}

int Lista::primero()const {
    if(vacia()) {
        return ultimo + 1;
    }
    return 0;
}

bool Lista::elimina(int posicion) {
    if(vacia() ) {
        cout<<"No se puede eliminar , eliminar"<<endl;
        return false;
    }

    int i = posicion;
    while(i < ultimo) {
        datos[i] = datos[i-1];
        i++;
    }
    ultimo--;
    return true;
}

bool Lista::inserta(GatoDomestico elemento, int posicion) {
    if(llena()) {
        cout<<"No se puede insertar , insertar"<<endl;
        return false;
    }

    int i=ultimo+1;
    while(i>posicion) {
        datos[i] = datos[i-1];
        i--;
    }
    datos[posicion] = elemento;
    ultimo++;
    return true;
}

bool Lista::vacia() const {
    return ultimo == -1;
}

bool Lista::llena()const {
    return ultimo == TAM-1;
}

int menu();

int opcion;

int main() {

    GatoDomestico minino;
    Lista miLista;
    int totalMininos = 0;
    ///miLista.inserta(0,0);

    int opcionSwitch;

    do {
        opcionSwitch = menu();

        switch(opcionSwitch) {

        case 1: {
            system("cls");
            cout<<"Datos minino:"<<endl;
            cin>>minino;
            cin.ignore();
            miLista.inserta(minino,miLista.primero());
        }
        break;
        case 2: {
            int buscaId,pos;
            cout<<"Busca id: ";
            cin>>buscaId;
            minino.fijaId(buscaId);
            pos = miLista.buscar(minino);
            if(pos == -1) {
                cout<<" No se encuentra"<<endl;
            } else {

                miLista.recupera(pos);
            }
            system("pause");
        }
        break;
        case 3: {
            int indice;
            cout<<"Id del minino a eliminar: ";
            cin>>indice;
            miLista.elimina(indice);
        }
        break;
        case 4: {
            cin.ignore();
            int opcion1;
            cout<<"Datos minino:"<<endl;
            cin>>minino;
            cout<<"Donde deseas insrtar"<<endl<<"1.-Inicio"<<endl<<"2.-Final"<<endl;
            cout<<"Opcion -> ";
            cin>>opcion1;
            switch(opcion1) {
            case 1: {
                miLista.inserta(minino,0);
            }
            break;
            case 2: {
                miLista.inserta(minino,miLista.posUltimo());
            }
            }
        }
        break;
        case 5: {
            system("cls");
            miLista.imprime();
            getchar();
            system("pause");

        }
        default:
            ;
        }
    } while(opcionSwitch != 6);

    return 0;
}

int menu() {
    system("cls");
    cout<<"1.-Agrega"<<endl;
    cout<<"2.-Busca"<<endl;
    cout<<"3.-Elimina"<<endl;
    cout<<"4.-Inserta"<<endl;
    cout<<"5.-Muestra"<<endl;
    cout<<"6.-Salir"<<endl;
    cout<<"Opcion-> ";
    cin>>opcion;
    cin.ignore();
    return opcion;
}
