/*
Aufgabenblatt zu Schleifen

Zahlenraten
Erstellen Sie den Programmcode zum Programm Zahlenraten.
Deklarieren Sie eine Variable geheimzahl und geben Sie der Variablen einen Zufallswert
Der Anwender soll dann mit wenigen Versuchen die Geheimzahl erraten. Ist die Eingabe des Anwenders zu hoch oder zu niedrig, soll eine entsprechende Meldung erscheinen!

Beispiel 1:
Geben Sie die Geheimzahl ein: 50
Die eingegebene Geheimzahl ist zu hoch.
Geben Sie die Geheimzahl ein: 40
Die eingegebene Geheimzahl ist zu hoch.
Geben Sie die Geheimzahl ein: 30
Die eingegebene Geheimzahl ist zu niedrig.
Geben Sie die Geheimzahl ein: 35
Die eingegebene Geheimzahl ist zu hoch.
Geben Sie die Geheimzahl ein: 33
Hurra! Sie haben die Zahl erraten!

Beispiel 1:
Geben Sie die Geheimzahl ein: 25
Die eingegebene Geheimzahl ist zu niedrig.
Geben Sie die Geheimzahl ein: 30
Die eingegebene Geheimzahl ist zu niedrig.
Geben Sie die Geheimzahl ein: 32
Die eingegebene Geheimzahl ist zu niedrig.
Geben Sie die Geheimzahl ein: 36
Hurra! Sie haben die Zahl erraten!

*/


#include <iostream>
#include <time.h>
using namespace std;
//Hauptfunktion
int main()
{
	//Variablendeklaration
	int limit;
    int eingabe;
    int geheimzahl;
    srand(time(NULL));
    cout<<"Legen Sie das Limit der Geheimzahl fest: ";
    cin>>limit;
    geheimzahl = rand() % limit;
    cout<<"geben Sie die Geheimzahl ein: ";
    cin>>eingabe;
    while(eingabe!=geheimzahl)
    {
        if(eingabe>geheimzahl)
        {
            cout<<"Die eingegebene Geheimzahl ist zu hoch."<<endl;
            cout<<"geben sie die Geheimzahl ein: ";
            cin>>eingabe;
        }
        else
        {
            cout<<"Die eingegebene Geheimzahl ist zu niedrig."<<endl;
            cout<<"geben sie die Geheimzahl ein: ";
            cin>>eingabe;
        }
    }
    cout<<"Hurra! Sie haben die Zahl erraten!";
}
