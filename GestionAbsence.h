#ifndef GESTION_ABSENCE_H
#define GESTION_ABSENCE_H

#include <vector>
#include "Absence.h"

class GestionAbsence {
private:
    std::vector<Absence> absences;

public:
    void ajouterAbsence(Absence absence);
    void afficherAbsences() const;
};

#endif // GESTION_ABSENCE_H
