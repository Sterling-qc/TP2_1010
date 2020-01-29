#ifndef AUTEUR_H
#define AUTEUR_H

#include <string>
#include <fstream>

class Auteur
{
public:
    Auteur() = default;
    Auteur(const std::string& nom, unsigned int anneeDeNaissance);

    const std::string& getNom() const;
    unsigned int getAnneeDeNaissance() const;
    unsigned int getNbFilms() const;

    void setNbFilms(unsigned int nbFilms);

	friend std::ostream& operator<<(std::ostream& o, const Auteur& auteur);
	bool operator==(const std::string& nom) const;

private:
    std::string nom_;
    unsigned int anneeDeNaissance_;
    unsigned int nbFilms_;
};

#endif // AUTEUR_H