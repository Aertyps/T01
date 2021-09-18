#ifndef __Circuito_H
#define __Circuito_H

class Circuito{
  private:
    float resistencia1;
    float resistencia2;
    float fonte;

  public:
    Circuito(float r1,float r2,float f);
    Circuito(float r1,float r2);

    void setR1(float r1);
    float getR1();
    void setR2(float r2);
    float getR2();
    void setF1(float r1);
    float getF1();

    float resistenciaSerie();
    float resistenciaParalelo();
    float correnteTotalSerie();
    float correnteTotalParalelo();
    float potenciaFonteSerie();
    float potenciaFonteParalelo();
};
#endif