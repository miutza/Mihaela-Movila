//Program care calculeaza aria si perimetrul unui cerc
#include<iostream>
using namespace std;
int main()
{
                double raza; //variabila de tip real in virgula mobila
                const double PI = 3.14159; //constanta de tip real in virgula mobila
 
                cout << "Introduceti raza cercului: "; //Afiseaza mesajul alaturat
                cin >> raza; //Citeste valoarea variabilei raza
 
                cout << "Aria cercului este: " << PI*raza*raza << endl; //Afiseaza Aria
                cout << "Perimetrul cercului este: " << 2*PI*raza << endl; //Afiseaza perimetrul
 system("pause");
               
return 0;
}
