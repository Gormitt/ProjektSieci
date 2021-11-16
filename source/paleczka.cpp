#include <iostream>
#include "../include/paleczka.h"

/*
 * Konstruktor który od razu ustawia pałeczkę na zajętą.
 */
Paleczka::Paleczka() {
    this->zajeta = false;
}

/*
 * [public]
 * Metoda zwraca dostępność pałeczki.
 */
bool Paleczka::getZajeta() {
    return this->zajeta;
}

/*
 * [public]
 * Metoda zmienia stan dostępności pałeczki na przeciwny.
 */
void Paleczka::swapZajeta() {
    this->zajeta = !this->zajeta;
}