#include<iostream>
#include "Guerriero.h"
#include "Mago.h"
#include "Gestore.h"
//provaaaaa
//aa
//aa
//
//a
//a
//a
//a
using namespace std;

int main() {
    Gestore arena;

    
    Guerriero milizia("Giovanni", 200, 1, 5);
    Mago incantatore("Mattia", 100, 1);
    
    cout << "STATO PRIMA DELLA BATTAGLIA" << endl;
    milizia.mostraStato();
    incantatore.mostraStato();

    arena.battaglia1v1(milizia, incantatore);
    arena.battaglia1v1(milizia, incantatore);
    arena.battaglia1v1(milizia, incantatore);

    cout << "STATO DOPO LA BATTAGLIA" << endl;
    milizia.mostraStato();
    incantatore.mostraStato();

    arena.risultato(milizia, incantatore);
    

    /*
        int scelta;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Mostra stato eroe" << endl;
        cout << "2. Mostra stato nemico" << endl;
        cout << "3. Eroe attacca nemico" << endl;
        cout << "4. Nemico attacca eroe" << endl;
        cout << "5. Cura eroe" << endl;
        cout << "6. Esci" << endl;
        cout << "Scegli un'opzione: ";
        cin >> scelta;
        cout << endl;

        switch (scelta) {
        case 1:
            eroe.mostraStato();
            break;
        case 2:
            nemico.mostraStato();
            break;
        case 3:
            nemico.attacca(nemico);
        case 4:
            nemico.attacca(eroe);
            break;
        case 5:
            eroe.cura();
            break;
        case 6:
            cout << "Arrivederci!" << endl;
            break;
        default:
            cout << "Scelta non valida, riprova." << endl;
        }
    } while (scelta != 6);*/

    return 0;
}