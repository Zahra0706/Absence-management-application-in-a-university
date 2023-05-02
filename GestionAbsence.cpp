#include <iostream>
#include <vector>
#include "Etudiant.h"
#include "Cours.h"
#include "Absence.h"

using namespace std;

// Fonction pour ajouter un nouvel étudiant
Etudiant* ajouterEtudiant() {
    string nom, prenom;
    int numEtudiant;

    cout << "Nom de l'etudiant : ";
    getline(cin, nom);
    cout << "Prenom de l'etudiant : ";
    getline(cin, prenom);
    cout << "Numero etudiant : ";
    cin >> numEtudiant;
    cin.ignore(); // Ignorer le caractère '\n' laissé par cin

    return new Etudiant(nom, prenom, numEtudiant);
}

// Fonction pour ajouter un nouveau cours
Cours* ajouterCours() {
    string nom, horaire, salle;

    cout << "Nom du cours : ";
    getline(cin, nom);
    cout << "Horaire du cours : ";
    getline(cin, horaire);
    cout << "Salle du cours : ";
    getline(cin, salle);

    return new Cours(nom, horaire, salle);
}

// Fonction pour ajouter une nouvelle absence
Absence* ajouterAbsence(vector<Etudiant*> etudiants, vector<Cours*> cours) {
    string date;
    Etudiant* etudiant;
    Cours* coursChoisi;

    cout << "Date de l'absence : ";
    getline(cin, date);

    // Sélectionner l'étudiant
    cout << "Etudiant absent : " << endl;
    for (unsigned int i = 0; i < etudiants.size(); i++) {
        cout << i+1 << ". " << etudiants[i]->getNom() << " " << etudiants[i]->getPrenom() << endl;
    }
    int choixEtudiant;
    cin >> choixEtudiant;
    etudiant = etudiants[choixEtudiant-1];
    cin.ignore(); // Ignorer le caractère '\n' laissé par cin

    // Sélectionner le cours
    cout << "Cours absent : " << endl;
    for (unsigned int i = 0; i < cours.size(); i++) {
        cout << i+1 << ". " << cours[i]->getNom() << " (" << cours[i]->getHoraire() << " en " << cours[i]->getSalle() << ")" << endl;
    }
    int choixCours;
    cin >> choixCours;
    coursChoisi = cours[choixCours-1];
    cin.ignore(); // Ignorer le caractère '\n' laissé par cin

    return new Absence(date, etudiant, coursChoisi);
}
