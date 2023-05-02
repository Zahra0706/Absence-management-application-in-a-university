#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    int id;

public:
    Etudiant(std::string nom, std::string prenom, int id);
    std::string getNom() const;
    std::string getPrenom() const;
    int getId() const;
};

#endif
