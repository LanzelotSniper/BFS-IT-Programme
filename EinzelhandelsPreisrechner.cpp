//Programm zur Preisberechnung von Waren für Kunden im Einzelhandel
#include <iostream>
using namespace std;
//Hauptfunktion
int main()
{
	//Variablendeklaration
	float 	rabatt;
	float	steuersatz;
	float	steuerbetrag;
	float	brutto;
	float	reduktionswert;
	float 	warenwert;
	float	netto;
	float	preis;
	int		anzahl;
//Definition fester Werte
steuersatz=0.19;
//IO
cout<<"Bitte geben Sie die Anzahl der Produkte an."<<endl;
cin>>anzahl;
cout<<"Bitte geben Sie den Preis an."<<endl;
cin>>preis;
//Standard Wert Berechnung
warenwert=preis*anzahl;
//Fallabfrage zur bestimmung der Rabatt Definition
if (warenwert<100)
{
	rabatt=0.1;
	//Standard Gleichungen zur Werteermittlung und Anschließende Ausgabe
	reduktionswert=warenwert*rabatt;
    netto=warenwert-rabatt*warenwert;
	steuerbetrag=netto*steuersatz;
	brutto=netto+steuerbetrag;
	cout<<"Der Warenwert betraegt: "<<warenwert<<" Euro"<<endl;
	cout<<"Sie erhalten: "<<reduktionswert<<" Euro Rabatt"<<endl;
	cout<<"--------------"<<endl;
    cout<<"Netto: "<<netto<<" Euro"<<endl;
	cout<<"MwSt: "<<steuerbetrag<<" Euro"<<endl;
	cout<<"Brutto: "<<brutto<<" Euro"<<endl;
	cout<<"Sie muessen "<<brutto<<" Euro zahlen."<<endl;
}
else if(warenwert>200 && warenwert<500)
{
	rabatt=0.15;
	//Standard Gleichungen zur Werteermittlung und Anschließende Ausgabe
	reduktionswert=warenwert*rabatt;
    netto=warenwert-rabatt*warenwert;
	steuerbetrag=netto*steuersatz;
	brutto=netto+steuerbetrag;
	cout<<"Der Warenwert betraegt: "<<warenwert<<" Euro"<<endl;
	cout<<"Sie erhalten: "<<reduktionswert<<" Euro Rabatt"<<endl;
	cout<<"--------------"<<endl;
    cout<<"Netto: "<<netto<<" Euro"<<endl;
	cout<<"MwSt: "<<steuerbetrag<<" Euro"<<endl;
	cout<<"Brutto: "<<brutto<<" Euro"<<endl;
	cout<<"Sie muessen "<<brutto<<" Euro zahlen."<<endl;
}
else
{
	rabatt=0.2;
	//Standard Gleichungen zur Werteermittlung und Anschließende Ausgabe
	reduktionswert=warenwert*rabatt;
    netto=warenwert-rabatt*warenwert;
	steuerbetrag=netto*steuersatz;
	brutto=netto+steuerbetrag;
	cout<<"Der Warenwert betraegt: "<<warenwert<<" Euro"<<endl;
	cout<<"Sie erhalten: "<<reduktionswert<<" Euro Rabatt"<<endl;
	cout<<"--------------"<<endl;
    cout<<"Netto: "<<netto<<" Euro"<<endl;
	cout<<"MwSt: "<<steuerbetrag<<" Euro"<<endl;
	cout<<"Brutto: "<<brutto<<" Euro"<<endl;
	cout<<"Sie muessen "<<brutto<<" Euro zahlen."<<endl;
}
	
return(0);
}
