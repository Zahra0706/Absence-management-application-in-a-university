#include "Absence.h"

Absence::Absence(std::string date, Etudiant* etudiant, Cours* cours) {
    this->date = date;
    this->etudiant = etudiant;
    this->cours = cours;
}

std::string Absence::getDate() const { return date; }
Etudiant* Absence::getEtudiant() const { return etudiant; }
Cours* Absence::getCours() const { return cours; }
