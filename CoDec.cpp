#include<stdlib.h>
#include<time.h>
#include "ComplexNum.h"
#include "FractalNum.h"
#include "CoDec.h"


// ����������� ������-��������
CCoDec::CCoDec(): FN()
{
	for(int i = 0; i < GAMMA_SIZE; ++i)
	{
		OText[i] = 0x20;
		CText[i] = 0x2d;
	}
}

// ����� ��������� �����
void CCoDec::GammaGen()
{
	srand((unsigned int)time(NULL));
	for(int i = 0; i < GAMMA_SIZE; ++i)
		Gamma[i] = rand() % 256;
}

// ����� ��������� ����� �� �����
void  CCoDec::GammaEncodeText()
{
	for(int i = 0; i < TextLength; ++i)
		CText[i] += Gamma[i];
}

// ����� ������ ����� � ������
void CCoDec::GammaDecodeText()
{
	for (int i = 0; i < TextLength; ++i)
		OText[i] -= Gamma[i];
}

// ����� ��������� ����� �� �����
void CCoDec::KeyEncodeText()
{
	for (int i = 0; i < TextLength; ++i)
		CText[i] ^= Key[i % 16];
}
// ����� c����� ����� � ������
void CCoDec::KeyDecodeText()
{
	for (int i = 0; i < TextLength; ++i)
		OText[i] ^= Key[i % 16];
}

// ����� ����������� ������
void CCoDec::EncodeText()
{
	for(int i = 0; i < TextLength; ++i)
		CText[i] = OText[i];
	GammaEncodeText();
	KeyEncodeText();
}

// ����� ������������� ������
void CCoDec::DecodeText()
{
	for (int i = 0; i < TextLength; ++i)
		OText[i] = CText[i];
	KeyDecodeText();
	GammaDecodeText();
}
