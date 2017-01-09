
#include "ComplexNum.h"
#include "FractalNum.h"

// Конструктор фрактального числа
CFractalNum::CFractalNum(void):CComplexNum()
{}

// Метод установки фрактального числа
void CFractalNum::SetFractalNum(double re,double im,int n)
{
	unsigned i;
	cnumber.real(re);
	cnumber.imag(im);
	for (i = 0; i < n; ++i)
	{
		MulComplexNum(cnumber.real(),cnumber.imag());
		AddComplexNum(re,im);
	}
}

