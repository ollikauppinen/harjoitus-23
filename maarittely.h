/**********************************************************
*Tehtävä: Harjoitus23
*Tekijä: Olli Kauppinen
*PVM: 26.11.2013
*Kuvaus:
*Jaa aiemmin esitetty henkilörekisteri-ohjelma omiin "osa-projekteihin" ja
*otsikkotiedostoihin. Laita pääohjelma omaan tiedostoon (paa.cpp),
*aliohjelmat omaan tiedostoon (ali.cpp) ja
*määritelmät omaan otsikkotiedostoon (maarittely.h).
*
*Projekti tulee koostaa toimivaksi Visual Studio-
*ympäristösssä.
*
* Versio 1.0 H4718 26.11.2013
***********************************************************/

#include <iostream>
using namespace std;



struct TIEDOT
{
	char nimi[20];
	float kmatka;
	int hat;
};

const int MAX_TAULU = 10;

int Valikko(void);
void TulostaKaikkiTIEDOT(TIEDOT hlo[], int lkm);
void LisaaHenkilo(TIEDOT [], int *lkm);
void TulostaHenkilo(TIEDOT hlo[]);