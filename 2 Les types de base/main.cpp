#include <iostream>

using namespace std;

int main()
{
    int a;
    unsigned int d;
    float f,g;
    double h,i;
    bool j,k;
    char l; // d�claration de la cha�ne de caract�re
    int m; // d�claration du nombre

    // calcul avec un nombre entier

    cout << " valeur de l'entier: ";cin >> a;
    cout << "l'inverse de " << a << " = " << 1/a << endl;

    //Calcul avec un entier non sign�

    cout << " valeur de l'entier non signe : ";cin >> d;
    cout << "l'inverse de " << d << " = " << 1/d << endl;

    //calcul avec un nombre d�cimal de type float

    cout << " valeur du nombre decimal est "; cin >> f;
    g = 1/f;
    cout << "l'inverse de " << f << " est " << g << endl;

    // calcul avec un nombre d�cimal de type double

     cout << " valeur du nombre decimal est "; cin >> h;
    i = 1/h;
    cout << "l'inverse de " << h << " est " << i << endl;

    // Affichage de l'�tat du type bol�en

    cout << " valeur 0 ou 1 de la boleenne: ";cin >> j;
    cout << boolalpha << j << endl;                         // affiche true ou false
    cout << noboolalpha << j << endl;                       // affiche la valeur de cet �tat
    k =! j;
    cout << " valeur 0 ou 1 de l'etat contraire de la valeur boleenne precedente: \n";
    cout << boolalpha << k << endl;                         // affiche true ou false
    cout << noboolalpha << k << endl;                       // affiche la valeur de cet �tat

     // Affichage du code ASCII d'un caract�re et r�ciproquement

    cout << " un caractere : "; cin >> l;
    cout << " le code ASCII corespondant est : " << (int)l << endl;                //code ASCII
    cout << " un entier entre 0 et 127: ";cin>>m;                                  // donne code ASCII
    cout << " le caractere correspondant � ce nombre est : " << (char)m << endl;   // donne le charact�re


    return 0;
}
