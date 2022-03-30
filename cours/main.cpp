#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;
// Toutes les fonctions :
/*
 * Fonction exo 5.4 (+ exemple qu'autre chose)
void Function (int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}


// Fonction exo 6.3:

    void reference (int& a, int& b) {
        int c = a;
        a = b;
        b = c;
    }

    void pointeurs (int* a, int* b) {
        int c = *a;
        *a = *b;
        *b = c;
    }
*/

//Class exo 7.1:
/*
class Rectangle {
private:
    int largeur;
    int hauteur;
public:

    int get_largeur() { return this -> largeur; };
    void set_largeur(int largeur) {this -> largeur = largeur; };

    int get_hauteur() { return this -> hauteur; };
    void set_hauteur(int hauteur) { this -> hauteur = hauteur; };

    void afficher() {
        cout << "Le rectangle à pour largeur " << this->largeur << " cm, et a pour hauteur " << this->hauteur << " cm."
             << endl;
    }



    //Rectangle(int largeur; int hauteur) {
//   int aire() {
//        int surface = hauteur*largeur;
//        cout << "Le rectangle à pour aire " << surface << " cm²" << endl    ;
//    }
//    int perimetre() {
//        int peri = this->hauteur*2 + this->largeur*2;
//    }
    };
*/
/*
//Class exo 7.5
class Piece {

protected:
    int x;
    int y;
    string nom;

public:
    Piece(string nom, int x, int y) {
        this->nom = nom;
        this->x = x;
        this->y = y;
    }

    void afficher() {
        cout << "Pièce(" << this->nom << ") en position x = " << this->x << "et y = " << this->y << endl;
    }

    virtual bool valide(int x, int y) {


        return true;
    }

    virtual void deplacer(int x, int y) {
        if (this->valide(x, y)) {
            this->y = y;
            this->x = x;
        }
    }

};

class Pion : public Piece {
public:
    Pion(int x, int y) : Piece("Pion", x, y) { } //Acolades pas inutiles !! juste vides

    virtual bool valide(int x, int y) {
        return ((this->x == x) && (this->y + 1 == y));
    }
};
class Fou : public Piece {
public:
    Fou(int x, int y): Piece("Fou", x, y) { } //Acolades pas inutiles !! juste vides
    virtual bool valide(int x, int y) {
        return this() &&( abs(this->y - y) == abs(this->y - y));
    }
};
*/

//Class exo 7.4:
class Noeud {
private:
    int donnee;
    Noeud* next;

public:
    Noeud(int donnee) {
        this->donnee = donnee;
        this->next = nullptr;
    }

    virtual void afficher() {
        cout << "Maillon: " << this->donnee << endl;
        if (this->next != nullptr) {
            this->next->afficher();
        }
    }

    virtual void add(int value) {
       if (this->next == nullptr) {
           this->next = new Noeud(value);
       } else {
           this->add(value);
       }
    }

};

int main(int argc, char **argv) {
    //Les exos
    /*cout << "--- EXERCICE 2.2 ---" << endl;
    for (int i = 0; i<100; i++)
        cout << i << " ";


    cout << "--- EXERCICE 2.3 ---" << endl;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    cout << "Entre 5 valeurs à la suite" << endl; cin >> v1;
    cout << "Encore" << endl; cin >> v2;
    cout << "à nouveau" << endl; cin >> v3;
    cout << "ça fait beaucoup là non ?" << endl; cin >> v4;
    cout << "la dernière" << endl; cin >> v5;
    cout <<  "le nombre le plus petit que tu as entré est " << min({v1, v2, v3, v4, v5}) << "." << endl;


    cout << "--- EXERCICE 2.4 ---" << endl;
    int number;
    int valeur;
    int chances = 10;
    valeur = 0;
    for (int i = 0; i < 10; i++) {
        valeur = rand()%100 +1;
    }
    cout << valeur << endl;
    while (chances > 0) {
        cout << "Try to find the number! it's between 0 and 100 :)" << endl; cin >> number;
        if (number == valeur) {
            cout << "Well played! You found the number, it was " << valeur << endl;
            chances = 0;
        } else {
            chances--;
            cout << "oopsy doopsy, you made a misty.. try again! Careful, still " << chances << "chance(s) left!" << endl;
        }
    }


    cout << "--- EXERCICE 2.5 ---" << endl;

    int var = 1;
    int sum = 0;
    int sumG;

    while (var != 0){
        while (var < 0) {
            cout << "Add a grade out of 20, careful, 0 will give you the average." << endl; cin >> var;
            sum += var;
        cout << "You are now out, the average is" << endl;
        }
    cout << "error. grade must be above 0!" << endl;
    }

    cout << "--- EXERCICE 2.6 ---" << endl;

    int userOP;
    int userOP2;
    int userS;
    int userChoice;


    while (userChoice != 0) {
        cout << "0- Sortie, 1- Addition, 2- Soustraction, 3- Multiplication" << endl;
        cin >> userChoice;
        if (userChoice == 1) {
            cout << "Select the 1st number" << endl;
            cin >> userOP;
            cout << "Select the 2nd number" << endl;
            cin >> userOP2;
            userS = userOP + userOP2;
            cout << "Here's the result : " << userS << endl;
        } else if (userChoice == 2) {
            cout << "Select the 1st number" << endl;
            cin >> userOP;
            cout << "Select the 2nd number" << endl;
            cin >> userOP2;
            userS = userOP - userOP2;
            cout << "Here's the result : " << userS << endl;
        } else if (userChoice == 3) {
            cout << "Select the 1st number" << endl;
            cin >> userOP;
            cout << "Select the 2nd number" << endl;
            cin >> userOP2;
            userS = userOP * userOP2;
            cout << "Here's the result : " << userS << endl;
        }

    }

    cout << "--- EXERCICE 3.1 --- TABLEAUX" << endl;

     int tab[10];
     int i;


     while (i < 10) {
         cout << "Choose a number, you need 10, you actually have " << i << endl;
         cin >> tab[i];
         cout << tab[i] << endl;
         i++;
     }
     i = 0;
     while (i < 10) {
        if (tab[i] > 10) {
            cout << tab[i] << endl;
            i++;
        }
     }

    int tableau[10];

    for (int i = 0; i < 10; i++) {
        cout << "saisissez un nombre: ";
        cin >> tableau[i];
    }
    for (int i = 0; i < 10; i++) {
        if (tableau[i] > 10) {
            cout << "la valeur dans la case " << i << " est superieur à 10 : " << tableau[i] << endl;
        } else {
            cout << "La valeur dans la case " << i << " est inferieur à 10" << endl;
        }
    }

    cout << "--- EXERCICE 3.2 ---" << endl;

    int tab[10] = {4, 85, 95, 4, 65, 25, 36, 7, 10, 81};
    int choice;
    int game = -1;
    int i;
    int chances = 10;

    cout << "0 : quit / 1 : play \n" << endl;
    cin >> game;

    if (game == 0) {
        cout << "ok" << endl;
    }
    else {
        while (chances != 0) {
            cout << "You have to find one of the 10 numbers in he hidden tab! Try ! :) good luck ! you have " << chances <<  " chances left \n";
            cin >> choice;
            if (choice == tab[i]) {
                cout << "well played :)" << endl;
                return 0;
            }
            else {
                chances --;
                cout << "oops, failed ):" << endl;
            }
        }

    // --- VECTORS ---


    cout << "--- EXERCICE 4.* ---" << endl;

    // Exo 4.1

    vector<int> v1;
    vector<int> v2(10, 0);
    vector<int> v3(v2);
    vector<int> v4(v3.begin(), v3.begin()+5);


    // Exo 4.2

    for (int i = 0; i < v4.size(); i++) {
        cout << "Element n " << v4[1] << endl;
    }

    for (int const &value : v4) {
        cout << "Element : " << value << endl;
    }


    // Exo 4.3

    vector<int> v1;
    vector<int> v2(10, 0);
    vector<int> v3(v2);
    vector<int> v4(v3.begin(), v3.begin()+5);

    v4.push_back(12);
    v4.insert(v4.begin(), 6);
    v4.insert(v4.begin()+2 , 3, 6);
    v4.insert(v4.begin()+3 , v3.begin() +2, v3.begin()+5);

    v4.pop_back();
    v4.erase(v4.begin());
    // v4.clear(); gros kill du tableau à la bien

    for (int const &value : v4) {
        cout << "Element : " << value << endl;
    }

    // cout << "--- EXERCICE 3.4 ---" << endl;
    // Mais avec des vectors au lieu des tableaux

    int condition = false;

    vector<int> v1(10, rand());

    while ( condition != true) {
        for (int i = 0; i < v1.size(); i++) {
            if (i < i++;) {
                cout << v1(i) << endl()
            }
        }
    }

    // Correction

    // Freestyle, si tu comprends pas c'est pas trop grave
    vector<vector<int>> v = {
            {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
            {9, 8, 7, 4, 6, 5, 4, 3, 2, 1},
            {6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
            {0, 1, 2, 3, 4, 5, 1, 7, 8, 9}
    };
    for (int i = 0; i < v.size(); i++) {
        cout << "tableau " << i << " : ";
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < v.size(); i++) {
        vector<int> mon_vector(v[i]);

        // Initialisation de la variable "croissant"
        bool croissant = true;
        bool decroissant = true;
        bool constant = true;


        for (int j = 1; j < mon_vector.size(); j++) {

            // Solution pas très belle
            // Tester si c'est croissant
            if (croissant && mon_vector[j-1] < mon_vector[j]) {
                croissant = true;
            } else {
                croissant = false;
            }
        // Solution plus simple à lire
        // Tester si c'est décroissant
        decroissant = (decroissant && mon_vector[j-1] > mon_vector[j]);
        // Tester si c'est égal
        constant = (constant && mon_vector[j-1] == mon_vector[j]);
        }
        if (croissant) {
            cout << "Croissant !";
        } else if (decroissant) {
            cout << "Decroissant !";
        } else if (constant) {
            cout << "Constant !";
        } else {
            cout << "Freestyle !";
        }
    }

    vector<int> v1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


    cout << "--- EXERCICE 5.0 ---" << endl;

    // Exemple de fonction :

    int uneFonctionExemple (int unParametre, string unAutreParametre) {
        cout << unParametre * 10 << : << unAutreParametre << endl;
        return 0 / resultat;
    }
    cout << "--- EXERCICE 6.1 ---" << endl;

    int variable; // je d"clare un entier
    string chaine;
    string* pointeur_vers_une_chaine;

    int* pointeur; // je déclare un pointeur
    pointeur = new int;

    *pointeur = 12;

    int** pointeru_vers_un_pointeur;

    delete pointeur;

    int* p1;
    p1 = new int;

    int** p2;
    p2 = new int*;

    *p1 = 12;
    *p2 = p1;

    delete p1;

    cout << "--- EXERCICE 6.3 ---" << endl;

    int var1;
    int var2;
    var1 = 9;
    var2 = 8;

    int* p1 = new int;
    int* p2 = new int;
    *p1 = var1;
    *p2 = var2;

    cout << *p1 << p1 << *p2 << p2 << endl;
    reference(var1, var2);
    pointeurs(p1, p2);
    cout << *p1 << p1 << *p2 << p2;
*/
    /*
    cout << "Exercice 7.1" << endl;

    Rectangle r1;
    r1.set_largeur(12);
    r1.set_hauteur(6);
    r1.afficher();

    Rectangle r2;
    r2.set_largeur(56);
    r2.set_hauteur(42);
    r2.afficher();

    //On crée un truc comme une variable
    Rectangle* p1;
    //J'instencie un nouveau rectangle, que j'appelle p1
    p1 = new Rectangle;

    //p1 = la valeur du pointeur
    // *p1 = la valeur qui est pointé par le pointeur | le rectangle est accessible avec le pointeur ici

    //On manipule differents types

    //On affiche le rectangle, mais on doit mettre les paenthèses sinon ça casse
    (*p1).afficher();

    //Là on a pas besoin des parenthèses
    p1->afficher();

    //Pour le reste de l'exo tu iras voir sur le github car tu dois écouter



    delete p1;



    cout << "Exercice 7.5" << endl;

    Piece *roi = new Piece("roi", 0, 0);
    Piece *dame = new Piece("dame", 12, 5);

    roi->afficher();
    dame->afficher();

    cout << "Deplacement.." << endl;

    roi->deplacer(4, 5);
    dame->deplacer(45, 8465);

    roi->afficher();
    dame->afficher();

    //On crée des pions avec notre nouvelle classe

    Pion *pion1 = new Pion(0, 0);
    Pion *pion2 = new Pion(1, 1);

    //On les fait se déplacer grace à la nv fonction
    //On affiche les nv résultats de co et on croise les doigts

    if (pion1->valide(0, 1)) { cout << "Pion1 : Déplacement 0x1 autorisé !" << endl; }
    if (pion1->valide(1, 1)) { cout << "Pion1 : Déplacement 1x1 pas autorisé !" << endl; }

    if (pion1->valide(0, 1)) { cout << "Pion2 : Déplacement 0x1  autorisé !" << endl; }
    if (pion1->valide(1, 1)) { cout << "Pion2 : Déplacement 1x1 pas autorisé !" << endl; }

    Fou* fou = new Fou(0,0);


    vector<Piece*> pieces;
    pieces.push_back(roi);
    pieces.push_back(dame);
    pieces.push_back(pion1);
    pieces.push_back(pion2);

    for (int i = 0; i < pieces.size(); i++ ) {
        pieces[i]->afficher();
    }


    delete pion1, pion2;
*/

    cout << "Exercice 7.4, on fait rien dans le bon ordre je trouve ça un peu marrant" << endl;

    Noeud* noeud = new Noeud(666);


    noeud->afficher();

    delete noeud;

    return 0;


}









