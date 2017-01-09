// Класс комплексного числа
#include<complex>
public  class CComplexNum
{ 
protected:
	std::complex<double> cnumber;
public:
	// Методы класса
	CComplexNum(); 
	CComplexNum(const CComplexNum& rhs) = default;
	CComplexNum & operator= (const CComplexNum& rhs) = default;

	void SetComplexNum(double re,double im);
	void GetComplexNum(double &re,double &im);
	void AddComplexNum(double re,double im);
	void MulComplexNum(double re,double im);
	void ComplexNumToCode(unsigned char *Code);
};
