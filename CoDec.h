
const unsigned GAMMA_SIZE = 1024;
// Класс кодера-декодера
public class   CCoDec
{
public:
	// Компонент фрактальное число
	CFractalNum FN ;
	// Компоненты ключ и гамма
	unsigned char Key[16],Gamma[1024];
	// Компоненты открытый текст, закрытый текст
	unsigned char OText[1024], CText[1024];
	//Резевные копии компонентов описаных выше
	unsigned char OText1[1024], CText1[1024];
	// Компонент длина текста
	int TextLength;
public:
	// Методы класса
	CCoDec();
	CCoDec(const CCoDec& rhs) = delete;
	CCoDec& operator= (const CCoDec& rhs) = delete;

	void GammaGen();
	void GammaEncodeText();
	void GammaDecodeText();
	void KeyEncodeText();
	void KeyDecodeText();
	void EncodeText();
	void DecodeText();
};
