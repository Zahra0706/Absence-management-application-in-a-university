#ifndef COUR_H_INCLUDED
#define COUR_H_INCLUDED

#include <string>

class Cours {
private:
    std::string nom;
    std::string horaire;
    std::string salle;

public:
    Cours(std::string nom, std::string horaire, std::string salle);
    std::string getNom() const;
    std::string getHoraire() const;
    std::string getSalle() const;
};

#endif // COUR_H_INCLUDED
