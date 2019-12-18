#include <iostream>
#include <conio.h>

using namespace std;

double Volume_Balok_Contoh1(double, double, double);
double Volume_Balok_Contoh2(double P, double L, double T);
double Volume_Balok_Contoh3(double P, double L, double T = 2);
double Volume_Balok_Contoh4(double P, double L = 3, double T = 2);
double Volume_Balok_Contoh5(double P = 4, double L = 3, double T = 2);
void CetakGaris();

int main()
{
	CetakGaris(); cout << "Contoh Hasil dari Default Argument Pada Fungsi\n(Urutan Output lihat sesuai source Code)" << endl; CetakGaris();

	cout << "Volume Balok (Contoh 1)  = " << Volume_Balok_Contoh1(4, 3, 2) << endl;
	cout << "Volume Balok (Contoh 2)  = " << Volume_Balok_Contoh2(4, 3, 2) << endl;
	cout << "Volume Balok (Contoh 3)  = " << Volume_Balok_Contoh3(4, 3) << endl;
	cout << "Volume Balok (Contoh 4)  = " << Volume_Balok_Contoh4(4) << endl;
	cout << "Volume Balok (Contoh 5)  = " << Volume_Balok_Contoh5() << endl;
	
	_getch();
	return 0;
}

double Volume_Balok_Contoh1(double P, double L, double T) { return P * L * T; }
double Volume_Balok_Contoh2(double P, double L, double T) { return P * L * T; }
double Volume_Balok_Contoh3(double P, double L, double T) { return P * L * T; }
double Volume_Balok_Contoh4(double P, double L, double T) {return P * L * T; }
double Volume_Balok_Contoh5(double P, double L, double T) { return P * L * T; }

void CetakGaris()  //Abaikan Fungsi ini
{
	for (size_t i = 0; i <= 46; i++)
	{
		cout << "-";
	}
	cout << endl;
}