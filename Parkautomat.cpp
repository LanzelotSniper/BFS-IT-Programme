 /*
Aufgabe -Parkscheinautomat
Erstellen Sie ein Programm für einen Parkscheinautomaten!
Das Tagesticket kostet 5 Euro.
Der Benutzer kann 10 Cent, 20 Cent, 50 Cent, 1 Euro oder 2 Euro einwerfen.
Nach jedem Einwurf erscheint die Anzeige des Restbetrages bzw. des Rückgabebetrages.

Beispiel:
Das Tagesticket kostet 5 Euro.
Bitte Geld einwerfen: 1 
Restbetrag: 4 Euro
Bitte Geld einwerfen: 2
Restbetrag: 2 Euro
Bitte Geld einwerfen: 0.5
Restbetrag: 1.50 Euro
Bitte Geld einwerfen: 2
Ticket wird gedruckt. Sie erhalten 0.50 Euro zurück.
Wollen Sie ein weiteres Ticket? j = ja - n = nein: j

Das Tagesticket kostet 5 Euro.
Bitte Geld einwerfen: 2 
Restbetrag: 3 Euro
Bitte Geld einwerfen: 2
Restbetrag: 1 Euro
Bitte Geld einwerfen: 1
Ticket wird gedruckt. 
Wollen Sie ein weiteres Ticket? j = ja - n = nein: n
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Variablendeklaration
	int Tagesticket;
	double Restbetrag, Uebrig, Einwurf;
	char Nochmal;
	
	//Variableninitialisierung
	Tagesticket = 5;
	Restbetrag = 0;
	Uebrig = 0;
	
	cout<< noshowpoint;
	cout<<"Das Tagesticket kostet "<< Tagesticket <<" Euro."<<endl;
	while(Uebrig < Tagesticket)
	{
		cout << "Bitte Geld einwerfen: ";
		cin >> Einwurf;
		if(Einwurf == 0.1 || Einwurf == 0.2 || Einwurf == 0.5 || Einwurf == 1 || Einwurf == 2)
		{
		Restbetrag = Restbetrag + Einwurf;
		Uebrig = Tagesticket - Restbetrag;
		if(Uebrig <= 0)
		{
			Uebrig = Tagesticket + 1;	
		}
		else
		{
			cout << "Restbetrag: "<< Uebrig << endl;		
		}
		}	
	}
	cout <<"Ticket wird gedruckt." << endl;
	Restbetrag = Restbetrag - 5;
	if(Restbetrag > 0)
	{
	cout << "Sie erhalten " << Restbetrag << " Euro zurueck." << endl;		
	}
	cout << "Wollen Sie ein weiteres Ticket? j = ja - n = nein:";
	cin >> Nochmal;
	
	if(Nochmal == 'n')
	{
	
	}
	else
	{
		main();
	}
}
