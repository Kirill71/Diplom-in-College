
#include "ComplexNum.h"

// ����������� ������������ �����
CComplexNum::CComplexNum():cnumber(0.0, 0.0){}

// ����� ��������� ������������ �����
void CComplexNum::SetComplexNum(double re,double im)
{
	cnumber.real(re);
	cnumber.imag(im);
}

// ����� ������ ������ ������������ �����
void CComplexNum::GetComplexNum(double &re,double &im)
{
	re = cnumber.real();
	im = cnumber.imag();
}

// ����� �������� ����������� �����
void CComplexNum::AddComplexNum(double re,double im)
{
	cnumber += std::complex<double>(re, im);
}

// ����� ��������� ����������� �����
 void CComplexNum::MulComplexNum(double re,double im)
{
	 cnumber *= std::complex<double>(re, im);
}

// ����� �������������� ������������ ����� � ����
void CComplexNum::ComplexNumToCode(unsigned char *Code)
{
 const unsigned SIZE = 8;
 unsigned i;
 unsigned char *p{ nullptr };
 double realpart{ cnumber.real() }, imagepart{ cnumber.imag() };

 p = reinterpret_cast<unsigned char *>(&realpart);
 
 for(i = 0; i < SIZE; ++i)
    Code[i] = p[i];

 p = reinterpret_cast<unsigned char *>(&imagepart);

 for(i = 0; i < SIZE; ++i)
    Code[i+8] = p[i];

}
  
 

 