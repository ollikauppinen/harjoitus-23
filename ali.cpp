#include "maarittely.h"

int Valikko(void)
{
	int valinta;

	cout << "\nVALIKKO\n\n0 Lopeta\n1 Lisaa henkilo\n2 Tulosta hlo\n3 Tulosta kaikki\n" << endl;
	cin >> valinta;

	return valinta;
}

void TulostaKaikkiTIEDOT(TIEDOT hlo[],int lkm)
{
	cout << "Listaus:" << endl;
	for (int ind = 0; (ind < lkm); ind++)
	{
		cout << "Nimi: " << hlo[ind].nimi << ", koulumatka: " << hlo[ind].kmatka << " km, hatun koko: " << hlo[ind].hat << endl;
	}
}

void LisaaHenkilo(TIEDOT p_hlo[], int *hlo_lkm)
{
	cout << "\nEtunimi?\n";
	cin >> p_hlo[*hlo_lkm].nimi;
	cout << "\nKoulumatka?\n";
	cin >> p_hlo[*hlo_lkm].kmatka;
	cout << "\nHatun koko?\n";
	cin >> p_hlo[*hlo_lkm].hat;

	(*hlo_lkm)++;
}

void TulostaHenkilo(TIEDOT p_hlo[])
{
	int nro;
	cout << "Henkilo nro? " << endl;
	cin >> nro;
	if (nro > 10)
	{
		cout << "Valinta ei mahdollinen, max maara 10" << endl;

	}
	else
	{
	 cout << "Nimi: " << p_hlo[nro-1].nimi << ", koulumatka: " << p_hlo[nro-1].kmatka << " km, hatun koko: " << p_hlo[nro-1].hat << endl;
	}
}
