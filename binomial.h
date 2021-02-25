#ifdef BINOMIAL
#define BINOMIAL

class Binomial{
  double coeff1,coeff2;
  int power1, power2;
  public :
  Binomial(double c1=1.0, int p1=1,doublec2=1.0,int p2=1);
  double GetCoefficient (int idx )const;
  int GetPower(int idx )const;
  int SetPower(int idx, pwr);
  void Multiply(double f);
  void Multiply(double coefft, int pwr);

};

#endif