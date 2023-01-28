//Netto zu Brutto Rechner
#include <iostream>
using namespace std;
//Hauptfunktion
int main()
{
	//Variablendeklaration
	int preis;
	int stueckzahl;
	int nettopreis;
	int mehrwertsteuer;
	int bruttopreis;
//IO-Sequenz und Berechnungen
cout<<"Bitte geben Sie den Preis des Produkts ein."<<endl;
cin>>preis;
cout<<"Bitte geben Sie die Stueckzahl des Produkts ein."<<endl;
cin>>stueckzahl;
nettopreis=preis*stueckzahl;
cout<<"Der Nettopreis betraegt: "<<nettopreis<<endl;
mehrwertsteuer=0.19*c;
cout<<"Die Mehrwertsteuer betraegt: "<<mehrwertsteuer<<endl;
cout<<"----------------------------"<<endl;
bruttopreis=mehrwertsteuer+c;
cout<<"Der Bruttopreis beraegt: "<<bruttopreis<<endl;
//Standard Return
return(0);
}
