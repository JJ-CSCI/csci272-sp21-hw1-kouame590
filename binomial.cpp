
#include "binomial.h"
Binomial:: Binomial (double c1, int p1,double c2, int  p2)

{
  coefft1 = c1; coefft2 = c2;
  if (p1 < 1) p1 = 1;
  if (p2 < 1) p2 = 1;
  power1 = p1; power2 = p2;
}
double Binomial::GetCoefficient (int idx) const {
  if (idx == 1) return coefft1;
  else if (idx == 2) return coefft2;
  else return -1;
}
int Binomial::Add (const Binomial other) {
  if ((other.GetPower (1) == power1) && (other.GetPower(2) == power2)) {
    coefft1 += other.GetCoefficient (1);
    coefft2 += other.GetCoefficient (2);
    return 0;
  }

  else if ((other.GetPower (2) == power1) &&
  (other.GetPower(1) == power2)) {
     coefft1 += other.GetCoefficient (2);
     coefft2 += other.GetCoefficient (1);
      return 0;
  }
  else
  return -1;
}
void Binomial :: Multiply(double f) {
  coefft1 *= f;
  coefft2 *= f

}

void Binomial::Multiply (double coefft, int pwr) {
coefft1 *= coefft;
coefft2 *= coefft;
power1 += pwr;
power2 += pwr;

}
 
}
