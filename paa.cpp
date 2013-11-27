#include "maarittely.h"

int main()
{
	int valinta = 0;
	int lkm = 0;
	bool jatka = true;
	TIEDOT hlo[MAX_TAULU];
	

	do
	{
		cout << "\nHenkiloita rekisterissa " << lkm << " kpl" << endl;
		cout << "Max. 10 kpl." << endl;
		valinta = Valikko();
		cout << endl;

		switch (valinta)
		{
			case 0:
			{
				cout << "\nGood bye.\n";
				jatka = false;
				break;
			}

			case 1:
			{
				if (lkm < 10)
				{
					LisaaHenkilo(hlo, &lkm);
				}
				
				else
				{
				cout << "Taulukko taysi!" << endl;
				}
				break;
			}

			case 2:
			{
				TulostaHenkilo(hlo);
				break;
			}

			case 3:
			{

				TulostaKaikkiTIEDOT(hlo, lkm);
			
				break;
			}

			default:
			{
				cout << "\nVaara valinta\n";
				break;
			}

		}
	}
	
	while (jatka == true);

}