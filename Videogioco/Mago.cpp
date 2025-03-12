#include "Mago.h"

    Mago::Mago(string n, int v, int l) : Personaggio(n, v, l) {
        mana = l * 2;
    }

    int Mago::calc_damage() {
        int damage;
        damage = DMG * 2;

        return damage;
    }


    void Mago::attacca(Personaggio& bersaglio) {
        cout << nome << " attacca " << bersaglio.getNome() << "!\n" << endl;
        if (mana > 0) {
            bersaglio.setVita(bersaglio.getVita() - calc_damage());
            if (bersaglio.getVita() == 0) {
                cout << bersaglio.getNome() << " e' stato sconfitto!\n" << endl;
                guadagnaExp(EXP_PER_KILL);
            }
        }
        cout << "La vita di " << bersaglio.getNome() << " e' ora: " << bersaglio.getVita() << endl;
    }

    void Mago::cura() {
        cout << nome << " si cura.\n" << endl;
        vita += HEAL;
        cout << "La vita di " << nome << " e' ora: " << vita << endl;
    }

    void Mago::lancia_magia() {
        //Dovete capire se e' necessario far scegliere la magia al mago prima
        //di chiamare questo metodo oppupre far scegliere la magia direttamente dentro
        //questo metodo
    }