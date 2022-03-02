#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    /* cout << "--- EXERCICE 2.2 ---" << endl;
    for (int i = 0; i<100; i++)
        cout << i << " ";     */


    /* cout << "--- EXERCICE 2.3 ---" << endl;
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
    cout <<  "le nombre le plus petit que tu as entré est " << min({v1, v2, v3, v4, v5}) << "." << endl; */


    /* cout << "--- EXERCICE 2.4 ---" << endl;
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
    } */


    /* cout << "--- EXERCICE 2.5 ---" << endl;

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
    }*/
/*
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
    */
    /*cout << "--- EXERCICE 3.1 --- TABLEAUX" << endl;

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
     } */

    /*int tableau[10];

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
    } */
    /*
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
        } */

    /* --- VECTORS --- */
    cout << "--- EXERCICE 4.1 ---" << endl;

    vector<int> v1;

    return 0;






}









