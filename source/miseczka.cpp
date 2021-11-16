#include <iostream>
#include <memory>
#include "../include/miseczka.h"
#include "../include/paleczka.h"

/*
 * Konstruktor z referencjami do paleczek obok miski.
 */
Miseczka::Miseczka(std::shared_ptr<Paleczka> l, std::shared_ptr<Paleczka> p) {
    this->lewa = l;
    this->prawa = p;
}

/*
 * [private]
 * Metoda sprawdzająca dostępność pałeczek obok miseczki.
 * Jeżeil chociaż jedna pałeczka jest niedostępna, miseczka jest niedostępna (zwraca fałsz).
 * Jeżeli obie pałeczki sa dostępna, miseczka jest dostępna (zwraca prawdę).
 */
bool Miseczka::czyDostepna() {
    if (this->lewa->getZajeta() || this->prawa->getZajeta()) return false;
    return true;
}

/*
 * [public]
 * Metoda rozpoczyna posiłek z miseczki (jeżeli obie pałeczki do okoła sa dostępne).
 * Jeżeli posiłek można rozpocząć zwraca prawdę.
 * Jeżeli posiłku nie można rozpocząć zwraca fałsz.
 */
bool Miseczka::rozpocznijPosilek() {
    if (this->czyDostepna()) {
        this->lewa->swapZajeta();
        this->prawa->swapZajeta();
        return true;
    }
    else return false;
}