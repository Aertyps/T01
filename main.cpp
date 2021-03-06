#include "circuito.h"
#include <iostream>
using namespace std;

int main() {
	int op = 0;

	cout << "\n\nT01 - Circuitos elétricos\n";
	float R1 = 0, R2 = 0, F = 0;
	Circuito circuito1(R1, R2, F);
	Circuito circuito2(R1, R2, F);

	while (op <= 1) {
		cout << "\nCircuito " << (op + 1) << "\n";
		cout << "Informe o valor da resistencia R1 \n";
		cin >> R1;
		cout << "Informe o valor da resistencia R2 \n";
		cin >> R2;
		cout << "Informe o valor da Fonte de tensão\n";
		cin >> F;

		if ((R1 > 0) && (R2 > 0)) {
			if (op == 0) {
				circuito1.setR1(R1);
				circuito1.setR2(R2);
				circuito1.setF1(F);

			} else {
				circuito2.setR1(R1);
				circuito2.setR2(R2);
				circuito2.setF1(F);
			}

			op++;
		} else {
			cout << "Informe resistencias maiores que zero\n";
		}
	}

	cout << "\nCircuito 1\n";
	cout << "Valor total da resistencia em serie: "
		 << circuito1.resistenciaSerie() << "\n";
	cout << "Valor total da corrente em serie: "
		 << circuito1.correnteTotalSerie() << "\n";
	cout << "Valor total da Potencia com resistencias em Serie: "
		 << circuito1.potenciaFonteSerie() << "\n";
	cout << "Valor total da resistencia em paralelo: "
		 << circuito1.resistenciaParalelo() << "\n";
	cout << "Valor total da corrente em paralelo: "
		 << circuito1.correnteTotalParalelo() << "\n";
	cout << "Valor total da Potencia com resistencias em Paralelo: "
		 << circuito1.potenciaFonteParalelo() << "\n";

	cout << "\nCircuito 2\n";
	cout << "Valor total da resistencia em serie: "
		 << circuito2.resistenciaSerie() << "\n";
	cout << "Valor total da corrente em serie: "
		 << circuito2.correnteTotalSerie() << "\n";
	cout << "Valor total da Potencia com resistencias em Serie: "
		 << circuito2.potenciaFonteSerie() << "\n";
	cout << "Valor total da resistencia em paralelo: "
		 << circuito2.resistenciaParalelo() << "\n";
	cout << "Valor total da corrente em paralelo: "
		 << circuito2.correnteTotalParalelo() << "\n";
	cout << "Valor total da Potencia com resistencias em Paralelo: "
		 << circuito2.potenciaFonteParalelo() << "\n";

	cout << "\nComparação de potencias dos circuitos com resistencias em "
			"Serie\n";
	Circuito c1 = Circuito::potObjSerie(circuito1, circuito2);
	cout << "A menor potencia é " << c1.potenciaFonteSerie();

	cout << "\nComparação de potencias dos circuitos com resistencias em "
			"Paralelo\n";
	Circuito c2 = Circuito::potObjParalelo(circuito1, circuito2);
	cout << "A menor potencia é " << c2.potenciaFonteParalelo();
}