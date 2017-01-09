#include<stdlib.h>
#include<time.h>
#include "ComplexNum.h"
#include "FractalNum.h"
#include "CoDec.h"


// Конструктор кодера-декодера
CCoDec::CCoDec(): FN()
{
	for(int i = 0; i < GAMMA_SIZE; ++i)
	{
		OText[i] = 0x20;
		CText[i] = 0x2d;
	}
}

// Метод генерации гаммы
void CCoDec::GammaGen()
{
	srand((unsigned int)time(NULL));
	for(int i = 0; i < GAMMA_SIZE; ++i)
		Gamma[i] = rand() % 256;
}

// Метод наложения гаммы на текст
void  CCoDec::GammaEncodeText()
{
	for(int i = 0; i < TextLength; ++i)
		CText[i] += Gamma[i];
}

// Метод снятия гаммы с текста
void CCoDec::GammaDecodeText()
{
	for (int i = 0; i < TextLength; ++i)
		OText[i] -= Gamma[i];
}

// Метод наложения ключа на текст
void CCoDec::KeyEncodeText()
{
	for (int i = 0; i < TextLength; ++i)
		CText[i] ^= Key[i % 16];
}
// Метод cнятия ключа с текста
void CCoDec::KeyDecodeText()
{
	for (int i = 0; i < TextLength; ++i)
		OText[i] ^= Key[i % 16];
}

// Метод кодирования текста
void CCoDec::EncodeText()
{
	for(int i = 0; i < TextLength; ++i)
		CText[i] = OText[i];
	GammaEncodeText();
	KeyEncodeText();
}

// Метод декодирования текста
void CCoDec::DecodeText()
{
	for (int i = 0; i < TextLength; ++i)
		OText[i] = CText[i];
	KeyDecodeText();
	GammaDecodeText();
}
