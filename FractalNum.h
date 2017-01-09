//Класс фрактального числа
public  class CFractalNum : public CComplexNum
{
public:
	// Методы класса
	CFractalNum();
	CFractalNum(const CFractalNum& rhs) = default;
	CFractalNum& operator= (const CFractalNum& rhs) = default;

	void SetFractalNum(double re,double im,int n);
};

