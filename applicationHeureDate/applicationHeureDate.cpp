// applicationHeureDate.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Heure.h"
#include"DateH.h"
using namespace Horaire;
using namespace std;
int main()
{
    cout << "Hello World!\n\n";
  /* 
    
    Heure H1(12, 30, 0), H2(13, 0, 0);
    cout << "H1 = "; H1.printHeure();
    cout << "\nH2 = "; H2.printHeure();
    bool res = H1.operator>(H2);
    if (res == true)
        cout << "\nH1 est plus tardive que H2";
    else
        cout << "\nH2 est plus tardive que H1";
    cout << endl << endl;

  */

    DateH D1(21, 25, 31, 30, 04,2006),D2(20,25,30,24,06,2006);
    cout << "\nAffichage de D1 : \n"; D1.printDateH();
    cout << "\n\nAffichage de D2 : \n"; D2.printDateH();

    bool res = D1.operator>(D2);
    if (res == true)
        cout << "\nD1 est plus tardive que D2";
    else
        cout << "\nD2 est plus tardive que D1";
    cout << endl << endl;


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
