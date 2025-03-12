#pragma once
#define HEAL 25
#define DMG 30
#define EXP_PER_KILL 25
#define EXP_LVL_UP 100
#define HP_X_LVL 20
#define EXP_DEFAULT 10

#include <iostream>
#include <string>
using namespace std;


class Personaggio {
protected:
    string nome;
    int vita;
    int livello;
    int scudo;
    int exp;

public:
    Personaggio(string n, int v, int l);

    int getScudo();
    
    string getNome();
    int getVita();
    int getLivello();
    int getExp();

    void setScudo(int s);
    void setVita(int hp);
    void setExp(int e);
    void setNome(string n);
    void setLivello(int l);

    void guadagnaExp(int valore);

    void guadagnaExp();

    void livelloUp();

    int calc_damage();

    void attacca(Personaggio& bersaglio);

    void mostraStato();
};

