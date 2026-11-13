
#include "Config.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string Config::lireCle(const string& cle) {
	ifstream fichier("Exercice3Lib/config.json");
    if (!fichier) {
        cout << "Erreur : fichier introuvable !" << endl;
        return "";
    }

    string ligne;

    while (getline(fichier, ligne)) {
        size_t position = ligne.find("\"" + cle + "\"");

        if (position != string::npos) {
            position = ligne.find(":", position);

            if (position != string::npos) {
                size_t debut = ligne.find("\"", position);
                size_t fin = ligne.find("\"", debut + 1);

                if (debut != string::npos && fin != string::npos) {
                    return ligne.substr(debut + 1, fin - debut - 1);
                }
            }
        }
    }

    return "";
}
