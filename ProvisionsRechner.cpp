//Programm zur Provisionsberechnung eines Verkäufers
#include <iostream>
using namespace std;
//Hauptfunktion
int main()
{
	//Variablen Deklaration
	int 	a;
	float 	b;
	int		c;
//IO
cout<<"Bitte geben sie den Umsatz des Verkaeufers an."<<endl;
cin>>a;
//Bedingungsprüfung, Berechnung der Provision und schlussendliche Ausgabe der Zahl
if (a>100000)
{
	b=0.075;
    c=b*a;
    cout<<c<<endl;
}
else
{
	b=0.05;
	c=b*a;
	cout<<c<<endl;
}
//Standard Return
return(0);
}
