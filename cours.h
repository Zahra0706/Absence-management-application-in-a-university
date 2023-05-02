#ifndef COURS_H
#define COURS_H

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


#endif
