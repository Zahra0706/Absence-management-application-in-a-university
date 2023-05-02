#include "Etudiant.h"

Etudiant::Etudiant(std::string nom, std::string prenom, int id) {
    this->nom = nom;
    this->prenom = prenom;
    this->id = id;
}

std::string Etudiant::getNom() const { return nom; }
std::string Etudiant::getPrenom() const { return prenom; }
int Etudiant::getId() const { return id; }
