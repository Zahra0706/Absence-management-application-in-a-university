#ifndef ABSENCE_H
#define ABSENCE_H

#include "Etudiant.h"
#include "Cours.h"

class Absence {
private:
    std::string date;
    Etudiant* etudiant;
    Cours* cours;

public:
    Absence(std::string date, Etudiant* etudiant, Cours* cours);
    std::string getDate() const;
    Etudiant* getEtudiant() const;
    Cours* getCours() const;
};

#endif // ABSENCE_H
