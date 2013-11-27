/**********************************************************
*Tehtävä: Harjoitus19
*Tekijä: Olli Kauppinen
*PVM: 16.11.2013
*Kuvaus:
*Kuten harjoitus 19, mutta toteuta kayttaen taulukkoa ja osoitinta
*tiedon käsittelyyn
*
* Versio 1.0 H4718 16.11.2013
***********************************************************/

#include<iostream>
using namespace std;

const int MAX_TAULU = 5;

int main()
{
	int nopeus[MAX_TAULU] = {0,0,0,0,0};
	int i = 0;
	int summa;
	int karvo;
	int input;
	int *nop;
	nop = &nopeus[i];

	cout << "\nNopeusmittari, syötä negatiivinen luku lopettaaksesi\n" << endl;

	do
	{
		
		cout << "Anna nopeus: ";
		cin >> nopeus[i];
		input = *nop;
		summa = nopeus[0]+nopeus[1]+nopeus[2]+nopeus[3]+nopeus[4];
		karvo = summa/MAX_TAULU;
		if (input >=0)
		{
		cout << " --> " << karvo <<" km/h" << endl;
		}

		i++;
		if (i>4)
		{
			i=0;
		}
		
	}
	while(input >= 0);
}