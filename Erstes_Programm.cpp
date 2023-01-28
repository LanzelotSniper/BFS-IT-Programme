//Simples erstes IO-Programm für den Einstieg in C++
#include <iostream>
using namespace std;
//Hauptfunktion
int main()
{
	//Variablendeklaration
	int a;
	int b;
	int c;
	//Input-Output
cout<<"Bitte geben sie den Preis des Produkts ein."<<endl;
cin>>a;
cout<<"Bitte geben sie die Stueckzahl des Produkts ein."<<endl;
cin>>b;
//Einfache Berechnung und Wertzuweisung auf Basis dieser
c=a*b;
cout<<"Der Gesammtpreis beraegt: "<<c<<endl;
//Standard Return
return(0);
}
