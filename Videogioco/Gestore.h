#pragma once

#include "Guerriero.h"
#include "Mago.h"

class Gestore {
private:
    int wins;

public:
    Gestore();

    //Qui dobbiamo fare overloading ogni volta che vogliamo cambiare le classi che 
    //combattono
    void battaglia1v1(Guerriero& x, Mago& y);

    void risultato(Personaggio x, Personaggio y);

};

