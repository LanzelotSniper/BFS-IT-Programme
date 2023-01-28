#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Variablendeklaration
	float 	rabatt_prozent;
	float 	warenwert;
	float	preis;
    float   rabatt_euro;
    float   nettobetrag;
    float   umsatzsteuer;
    float   bruttobetrag;
	int 	anzahl;
    int     kategorie;
    //Eingaben
cout<<"Bitte geben Sie die Anzahl der Produkte an."<<endl;
cin>>anzahl;
cout<<"Bitte geben Sie den Preis an."<<endl;
cin>>preis;
cout<<"Bitte geben Sie Ihre Kundenkategorie an."<<endl;
cin>>kategorie;
switch(kategorie)
{
    case 1:rabatt_prozent=10;
    break;
    case 2:rabatt_prozent=12;
    break;
    case 3:rabatt_prozent=15;
    break;
    case 4:rabatt_prozent=20;
    break;
    case 5:rabatt_prozent=30;
    break;
    default: rabatt_prozent=0;
    break;
}

//Berechnungen
warenwert=preis*anzahl;
rabatt_euro=warenwert/100*rabatt_prozent;
nettobetrag=warenwert-rabatt_euro;
umsatzsteuer=nettobetrag/100*19;
bruttobetrag=nettobetrag+umsatzsteuer;
//Ausgabenformat festlegung
cout<<setprecision(2)<<fixed;
//Ausgabe
cout<<"Warenwert                        :"<<warenwert<<"Euro"<<endl;
cout<<"Rabatt("<<rabatt_prozent<<"%)                    :"<<rabatt_euro<<"Euro"<<endl;
cout<<"----------------------------------------------------------------"<<endl;
cout<<"Nettobetrag                      :"<<nettobetrag<<"Euro"<<endl;
cout<<"Umsatzsteuer                     :"<<umsatzsteuer<<"Euro"<<endl;
cout<<"----------------------------------------------------------------"<<endl;
cout<<"Bruttobetrag                     :"<<bruttobetrag<<"Euro"<<endl;

return(0);
}

