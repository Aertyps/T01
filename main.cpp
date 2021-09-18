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
		cout << "\nCircuito " << (op + 1) <<      "\n";
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
		}
	}

  

	cout << "Valor total da resistencia em serie: "
		 << circuito1.resistenciaSerie() << "\n";
	cout << "Valor total da corrente em serie: "
		 << circuito1.correnteTotalSerie() << "\n";
	cout << "Valor total da corrente em serie: "
		 << circuito1.correnteTotalSerie() << "\n";
	cout << "Valor total da resistencia em paralelo: "
		 << circuito1.resistenciaParalelo() << "\n";
}