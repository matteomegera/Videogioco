#pragma once
#include "Personaggio.h"
#include <iostream>


class Guerriero :public Personaggio {

private:
    int forza;

public:
    Guerriero(string n, int v, int l, int f);

    int calc_damage();

    void attacca(Personaggio& bersaglio);

};

