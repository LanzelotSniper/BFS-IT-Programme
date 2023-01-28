#include <iostream>
#include <iomanip>
using namespace std;
//Hauptfunktion
int main()
{
    //Variablendeklaration
	float 	Umsatzsteuer;
	float 	warenwert;
	float	preis;
	float	anzahl;
	float	lieferkosten;
    float   Bruttobetrag;
    //IO Sequenz
cout<<"Bitte geben Sie die Anzahl der Produkte an."<<endl;
cin>>anzahl;
cout<<"Bitte geben Sie den Preis an."<<endl;
cin>>preis;
//Lieferkostenfestlegung
if (anzahl<10)
{
    lieferkosten=10;
}
else
{
    lieferkosten=0;
}
//Berechnungen
warenwert=preis*anzahl;
Umsatzsteuer=(warenwert+lieferkosten)/100*19;
Bruttobetrag=warenwert+Umsatzsteuer+lieferkosten;
//Ausgabenformat festlegung
cout<<setprecision(2)<<fixed;
//Ausgabe
cout<<"Nettowarenwert       :"<<warenwert<<"Euro"<<endl;
cout<<"+Transportpauschale  :"<<lieferkosten<<"Euro"<<endl;
cout<<"+Umsatzsteuer        :"<<Umsatzsteuer<<"Euro"<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"=Bruttobetrag        :"<<Bruttobetrag<<"Euro"<<endl;
return(0);
}
