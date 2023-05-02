#include <iostream>
#include "Etudiant.h"
#include "Cours.h"
#include "Absence.h"
#include "GestionAbsence.h"

using namespace std;

int main() {
    // Saisie des étudiants
    int nbEtudiants;
    cout << "Entrez le nombre d'etudiants : ";
    cin >> nbEtudiants;
	Etudiant etudiants[nbEtudiants];
    for (int i = 0; i < nbEtudiants; i++) {
        string nom, prenom;
        int numEtudiant;

        cout << "\nEtudiant #" << i + 1 << "\n";
        cout << "Nom : ";
        cin >> nom;
        cout << "Prenom : ";
        cin >> prenom;
        cout << "Numero etudiant : ";
        cin >> numEtudiant;

        etudiants[i] = Etudiant(nom, prenom, numEtudiant);
    }

    // Saisie des cours
    int nbCours;
    cout << "\nEntrez le nombre de cours : ";
    cin >> nbCours;

    Cours cours[nbCours];
    for (int i = 0; i < nbCours; i++) {
        string nom, horaire, salle;

        cout << "\nCours #" << i + 1 << "\n";
        cout << "Nom : ";
        cin >> nom;
        cout << "Horaire : ";
        cin >> horaire;
        cout << "Salle : ";
        cin >> salle;

        cours[i] = Cours(nom, horaire, salle);
    }

    // Saisie des absences
    int nbAbsences;
    cout << "\nEntrez le nombre d'absences : ";
    cin >> nbAbsences;

    Absence absences[nbAbsences];
    for (int i = 0; i < nbAbsences; i++) {
        string date;
        int numEtudiant, numCours;

        cout << "\nAbsence #" << i + 1 << "\n";
        cout << "Date (format YYYY-MM-DD) : ";
        cin >> date;
        cout << "Numero etudiant : ";
        cin >> numEtudiant;
        cout << "Numero cours : ";
        cin >> numCours;

        Etudiant* etudiant = nullptr;
        Cours* cours = nullptr;

        // Recherche de l'étudiant correspondant au numéro d'étudiant saisi
        for (int j = 0; j < nbEtudiants; j++) {
            if (etudiants[j].getNumEtudiant() == numEtudiant) {
                etudiant = &etudiants[j];
                break;
            }
        }

        // Recherche du cours correspondant au numéro de cours saisi
        for (int j = 0; j < nbCours; j++) {
            if (cours[j].getNumCours() == numCours) {
                cours = &cours[j];
                break;
            }
        }

        if (etudiant != nullptr && cours != nullptr) {
            absences[i] = Absence(date, *etudiant, *cours);
        }
    }

    // Gestion des absences
    GestionAbsence gestionAbsence(etudiants, nbEtudiants, cours, nbCours, absences, nbAbsences);
    gestionAbsence.afficherStatistiques();

    return 0;
}
