#include "circuito.h"

Circuito::Circuito(int r1, int r2, int f) {
	resistencia1 = r1;
	resistencia2 = r2;
	fonte = f;
}

Circuito::Circuito() {
}

void Circuito::setR1(int r1) {
}
int Circuito::getR1() {
}
void Circuito::setR2(int r2) {
}
int Circuito::getR2() {
}
void Circuito::setF1(int r1) {
}
int Circuito::getF1() {
}
int Circuito::resistenciaSerie() {
}
int Circuito::resistenciaParalelo() {
}
int Circuito::correnteTotalSerie() {
}
int Circuito::correnteTotalParalelo() {
}
int Circuito::potenciaFonteSerie() {
}
int Circuito::potenciaFonteParalelo() {
}