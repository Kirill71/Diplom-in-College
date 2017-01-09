
const unsigned GAMMA_SIZE = 1024;
// ����� ������-��������
public class   CCoDec
{
public:
	// ��������� ����������� �����
	CFractalNum FN ;
	// ���������� ���� � �����
	unsigned char Key[16],Gamma[1024];
	// ���������� �������� �����, �������� �����
	unsigned char OText[1024], CText[1024];
	//�������� ����� ����������� �������� ����
	unsigned char OText1[1024], CText1[1024];
	// ��������� ����� ������
	int TextLength;
public:
	// ������ ������
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
