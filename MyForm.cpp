#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
// ����� �������� ����� 
void Main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Diplom::MyForm form1;
	Application::Run(%form1);

};