#include "Personaggio.h"
using namespace std;

    Personaggio::Personaggio(string n, int v, int l) {
        nome = n;
        vita = v;
        livello = l;
        scudo = l * 2;
        exp = 0;
    }

    int Personaggio::getScudo() {
        return scudo;
    }
    string Personaggio::getNome() {
        return nome;
    }
    int Personaggio::getVita() {
        return vita;
    }
    int Personaggio::getLivello() {
        return livello;
    }
    int Personaggio::getExp() {
        return exp;
    }

    void Personaggio::setScudo(int s) {
        if (s >= 0) {
            scudo = s;
        }
        else {
            scudo = 0;
        }
    }
    void Personaggio::setVita(int hp) {
        if (hp >= 0) {
            vita = hp;
        }
        else {
            vita = 0;
        }
    }
    void Personaggio::setExp(int e) {
        if (e >= 0) {
            exp = e;
        }
        else {
            exp = 0;
        }

    }
    void Personaggio::setNome(string n) {
        nome = n;
    }

    void Personaggio::setLivello(int l) {
        if (l > 0) {
            livello = l;
        }
        else {
            cout << "Errore il livello non puo' essere minore o uguale 0" << endl;
            livello = 1;
        }
    }

    void Personaggio::guadagnaExp(int valore) {
        setExp(valore);
        cout << nome << " guadagna " << valore << " EXP. Totale: " << exp << "/" << EXP_LVL_UP << endl;
        while (exp >= EXP_LVL_UP) {
            livelloUp();
            cout << nome << " sale di livello! Ora e' al livello " << livello << " con scudo: " << scudo << endl;
        }
    }

    void Personaggio::guadagnaExp() {
        int valore = EXP_DEFAULT;
        exp += valore;
        cout << nome << " guadagna " << valore << " EXP. Totale: " << exp << "/" << EXP_LVL_UP << endl;
        while (exp >= EXP_LVL_UP) {
            livelloUp();
            cout << nome << " sale di livello !" << endl;
            cout << nome << " ha ora lo scudo a " << scudo << endl;
        }
    }

    void Personaggio::livelloUp() {
        exp -= EXP_LVL_UP;
        livello++;
        scudo = livello * 2;
        vita += HP_X_LVL;
        cout << nome << " sale al livello " << livello << endl;
        cout << nome << "ha ora " << vita << "di vita" << endl;
    }

    int Personaggio::calc_damage() {
        return 0;
    }

    void Personaggio::attacca(Personaggio& bersaglio) {};

    void Personaggio::mostraStato() {
        cout << "Nome: " << nome << endl;
        cout << "Vita: " << vita << endl;
        cout << "Livello: " << livello << endl;
        cout << "Scudo: " << scudo << endl;
        cout << "Exp: " << exp << " / " << EXP_LVL_UP << endl;
    }
