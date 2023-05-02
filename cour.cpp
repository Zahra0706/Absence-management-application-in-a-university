#include "Cours.h"

Cours::Cours(std::string nom, std::string horaire, std::string salle) {
    this->nom = nom;
    this->horaire = horaire;
    this->salle = salle;
}

std::string Cours::getNom() const { return nom; }
std::string Cours::getHoraire() const { return horaire; }
std::string Cours::getSalle() const { return salle; }
