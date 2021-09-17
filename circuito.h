#ifndef __Circuito_H
#define __Circuito_H

class Circuito{
  private:
    int resistencia1;
    int resistencia2;
    int fonte;

  public:
    Circuito(int r1,int r2,int f);
    Circuito();

    void setR1(int r1);
    int getR1();
    void setR2(int r2);
    int getR2();
    void setF1(int r1);
    int getF1();


};
#endif