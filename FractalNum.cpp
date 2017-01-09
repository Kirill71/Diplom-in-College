
#include "ComplexNum.h"
#include "FractalNum.h"

// ����������� ������������ �����
CFractalNum::CFractalNum(void):CComplexNum()
{}

// ����� ��������� ������������ �����
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

