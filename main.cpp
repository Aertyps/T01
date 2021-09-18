#include "circuito.h"
#include <iostream>
using namespace std;

int main() {
	bool op = true;

	cout << "T01 - Circuitos elétricos\n\n";
	float R1, R2, F;
  
	while (op) {
		cout << "Informe o valor da resistencia R1\n";
		cin >> R1;
		cout << "Informe o valor da resistencia R2\n";
		cin >> R2;
		cout << "Informe o valor da Fonte de tensão\n";
		cin >> F;

		Circuito circuito(R1, R2, F);
  }

		cout << "Valor total da resistencia em serie: "
			 << circuito.resistenciaSerie() << "\n";
    cout << "Valor total da corrente em serie: "
			 << circuito.correnteTotalSerie() << "\n";
    cout << "Valor total da corrente em serie: "
			 << circuito.correnteTotalSerie() << "\n";
		cout << "Valor total da resistencia em paralelo: "
			 << circuito.resistenciaParalelo()<< "\n";
		
	
}