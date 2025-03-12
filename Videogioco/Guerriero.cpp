#include "Guerriero.h"


    Guerriero::Guerriero(string n, int v, int l, int f) : Personaggio(n, v, l){
        forza = f;
    }

    int Guerriero::calc_damage() {
        int damage;
        damage = DMG + forza;
        return damage;
    }

    void Guerriero::attacca(Personaggio& bersaglio) {
        cout << nome << " attacca " << bersaglio.getNome() << "!\n" << endl;
        if (bersaglio.getScudo() <= 0) {
            bersaglio.setVita(bersaglio.getVita() - calc_damage());
            if (bersaglio.getVita() == 0) {
                cout << bersaglio.getNome() << " e' stato sconfitto!\n" << endl;
                guadagnaExp(EXP_PER_KILL);
            }
            else {
                cout << "La vita di " << bersaglio.getNome() << " e' ora: " << bersaglio.getVita() << endl;
            }
        }
        else {
            bersaglio.setScudo(bersaglio.getScudo() - calc_damage());
            cout << "Lo scudo di " << bersaglio.getNome() << " e' ora: " << bersaglio.getScudo() << endl;
        }
    }
