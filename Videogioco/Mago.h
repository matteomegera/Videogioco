#pragma once
#include "Personaggio.h"
#include <iostream>


class Mago :public Personaggio {

private:
    int mana;
    //Incantesimo magie[4];

public:
    Mago(string n, int v, int l);

    int calc_damage();

    void attacca(Personaggio& bersaglio);

    void lancia_magia();

    void cura();

};

