/**********************************************************
*Teht�v�: Harjoitus23
*Tekij�: Olli Kauppinen
*PVM: 26.11.2013
*Kuvaus:
*Jaa aiemmin esitetty henkil�rekisteri-ohjelma omiin "osa-projekteihin" ja
*otsikkotiedostoihin. Laita p��ohjelma omaan tiedostoon (paa.cpp),
*aliohjelmat omaan tiedostoon (ali.cpp) ja
*m��ritelm�t omaan otsikkotiedostoon (maarittely.h).
*
*Projekti tulee koostaa toimivaksi Visual Studio-
*ymp�rist�sss�.
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