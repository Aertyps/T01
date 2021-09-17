#include "circuito.h"

Circuito::Circuito(int r1, int r2, int f) {
	resistencia1 = r1;
	resistencia2 = r2;
	fonte = f;
}

Circuito::Circuito() {
}

void Circuito::setR1(int r1) {
	resistencia1 = r1;
}

int Circuito::getR1() {
	return resistencia1;
}

void Circuito::setR2(int r2) {
	resistencia2 = r2;
}

int Circuito::getR2() {
	return resistencia2;
}

void Circuito::setF1(int f) {
	fonte = f;
}

int Circuito::getF1() {
	return fonte;
}

int Circuito::resistenciaSerie() {
	if ((resistencia1 >= 0) && (resistencia2 >= 0)) {
		return (resistencia1 + resistencia2);
	} else {
		return -1;
	}
}

int Circuito::resistenciaParalelo() {

  if ((resistencia1 >= 0) && (resistencia2 >= 0)) {
		return ((resistencia1*resistencia2)/(resistencia1+resistencia2));
	} else {
		return -1;
	}
}
int Circuito::correnteTotalSerie() {
   return 0;
}
int Circuito::correnteTotalParalelo() {
   return 0;
}
int Circuito::potenciaFonteSerie() {
   return 0;
}
int Circuito::potenciaFonteParalelo() {
   return 0;
}