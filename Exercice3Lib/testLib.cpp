#include <Config.h>
#include <Logger.h>
#include <iostream>

using namespace std;

int main() {

    // Utilisation de Logger
    Logger::getInstance().log("Programme demarre");

    // Utilisation de Config
    Config config;

    string valeur = config.lireCle("nom");

    cout << "Nom : " << valeur << endl;

    return 0;
}
