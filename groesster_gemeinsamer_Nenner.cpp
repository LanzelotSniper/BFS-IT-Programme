#include <iostream>
using namespace std;
//Funktion zur Prüfung auf gültige Eingabe
int positivcheck(double x,double y)
{
	bool    groessernull;
    if(x >=0 && y >=0)
    {
        groessernull=1;
    }
    else
    {
        groessernull=0;
    }
    return(groessernull);
}
//Funktion zur Berechnung des groessten gemeinsamen Nenners mittels einer Rekursion
//unsigned int, da Eingaben ohnehin nur positiv sein koennen und es somit unnoetig waere negative Zahlen speichern zu koennen 
unsigned int ggT(unsigned int a,unsigned int b)
{
    unsigned endergebnis;
	if(b==0)
    {
        return (a);
    }
    else
    {
        return ggT(b,a % b);
    }
}
//Hauptfunktion
int main()
{
    //Variablendeklaration
    double x;
    double y;
    bool   groessernull;
    bool   wiederholer;
    double endergebnis;
    //Wiederholungs Schleife falls Eingabe ungueltig
    do
    {
    //IO Sequenz
    cout<<"Gib eine Zahl ein: ";
    cin>>x;
     cout<<"Gib eine Zahl ein: ";
    cin>>y;
    //Pruefen ob Eingaben > 0 sind
    groessernull=positivcheck(x,y);
    if(groessernull==1)
    {
    wiederholer=0;
    endergebnis = ggT(x,y);
    cout<<endergebnis<<endl;
    }
    else
    {
        cout<<"Ungueltige eingabe!"<<endl;
        wiederholer=1;
    }
    }
    while(wiederholer==1);
}

