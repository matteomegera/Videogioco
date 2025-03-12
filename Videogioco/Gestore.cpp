#include "Gestore.h"

Gestore::Gestore() {
    wins = 0;
}

//Qui dobbiamo fare overloading ogni volta che vogliamo cambiare le classi che 
//combattono
void Gestore::battaglia1v1(Guerriero & x, Mago& y) {
    x.attacca(y);
    y.attacca(x);
}

void Gestore::risultato(Personaggio x, Personaggio y) {
    if (x.getVita() < y.getVita()) {
        cout << "Vince " << y.getNome() << endl;
    }
    else {
        cout << "Vince " << x.getNome() << endl;
    }
}
