/*
Програмный продукт: "Fractal Shield"
Aвтор: Жаренков К.К.
Дата: 20.05.2015
*/
#pragma once

#include "ComplexNum.h"
#include "FractalNum.h"
#include"CoDec.h"
#include<stdio.h>
#include<string.h>


namespace Diplom 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	using System::Runtime::InteropServices::Marshal;
	using namespace std;
	CCoDec codec;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		// Описание элементов управелния использованнных в проекте
#pragma region
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button_GenerationKey_Decode;
	private: System::Windows::Forms::Label^  label_KeyDecode;



	private: System::Windows::Forms::TextBox^  textBox_decodeKey;

	private: System::Windows::Forms::Button^  button_a_Receiver;
	private: System::Windows::Forms::Label^  label_n2_Reciever;



	private: System::Windows::Forms::Label^  label_n1_Reciever;

	private: System::Windows::Forms::Label^  label_b_Reciever;

	private: System::Windows::Forms::Label^  label_a_Reciever;

	private: System::Windows::Forms::TextBox^  textBox_n1_Receiver;
	private: System::Windows::Forms::TextBox^  textBox_n2_Receiver;
	private: System::Windows::Forms::TextBox^  textBox_a_Receiver;

	private: System::Windows::Forms::TextBox^  textBox_b_Receiver;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button_GenerationKey_Code;
	private: System::Windows::Forms::Label^  label_KeyCode;



	private: System::Windows::Forms::TextBox^  textBox_codeKey;

	private: System::Windows::Forms::Button^  button_n2_sender;
	private: System::Windows::Forms::Label^  label_n2_Sender;

	private: System::Windows::Forms::Label^  label_n1_Sender;



	private: System::Windows::Forms::Label^  label_b_Sender;


	private: System::Windows::Forms::Label^  label_a_Sender;

	private: System::Windows::Forms::TextBox^  textBox_n2_Sender;

	private: System::Windows::Forms::TextBox^  textBox_n1_Sender;

	private: System::Windows::Forms::TextBox^  textBox_a_Sender;
	private: System::Windows::Forms::TextBox^  textBox_b_Sender;

	private: System::Windows::Forms::Label^  label_Gamma;

	private: System::Windows::Forms::RichTextBox^  richTextBox_Gamma;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button_Sender;

	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Button^  button_Decode_Text;

	private: System::Windows::Forms::Label^  label_Decode_2;

	private: System::Windows::Forms::TextBox^  textBox_Common_Key_Decode;

	private: System::Windows::Forms::RichTextBox^  richTextBox_Close_Reciever;

	private: System::Windows::Forms::RichTextBox^  richTextBox_Open_Reciever;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label_Code_2;
	private: System::Windows::Forms::Button^  button_Code_Text;


	private: System::Windows::Forms::TextBox^  textBox_Common_Key_Code;

	private: System::Windows::Forms::RichTextBox^  richTextBox_Close_Sender;

	private: System::Windows::Forms::RichTextBox^  richTextBox_Open_Sender;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label_n2;
	private: System::Windows::Forms::Label^  label_n1;
	private: System::Windows::Forms::Label^  label_b;
	private: System::Windows::Forms::Label^  label_a;
	private: System::Windows::Forms::Button^  button_DrowFractal;
	private: System::Windows::Forms::TextBox^  textBox_a;
	private: System::Windows::Forms::TextBox^  textBox_n2;
	private: System::Windows::Forms::TextBox^  textBox_b;
	private: System::Windows::Forms::TextBox^  textBox_n1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolTip^  toolTip1;

	private: System::ComponentModel::IContainer^  components;

#pragma endregion
	private:
#pragma region Установка свойст элементов управления
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label_Gamma = (gcnew System::Windows::Forms::Label());
			this->richTextBox_Gamma = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button_GenerationKey_Decode = (gcnew System::Windows::Forms::Button());
			this->label_KeyDecode = (gcnew System::Windows::Forms::Label());
			this->textBox_decodeKey = (gcnew System::Windows::Forms::TextBox());
			this->button_a_Receiver = (gcnew System::Windows::Forms::Button());
			this->label_n2_Reciever = (gcnew System::Windows::Forms::Label());
			this->label_n1_Reciever = (gcnew System::Windows::Forms::Label());
			this->label_b_Reciever = (gcnew System::Windows::Forms::Label());
			this->label_a_Reciever = (gcnew System::Windows::Forms::Label());
			this->textBox_n1_Receiver = (gcnew System::Windows::Forms::TextBox());
			this->textBox_n2_Receiver = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a_Receiver = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b_Receiver = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button_GenerationKey_Code = (gcnew System::Windows::Forms::Button());
			this->label_KeyCode = (gcnew System::Windows::Forms::Label());
			this->textBox_codeKey = (gcnew System::Windows::Forms::TextBox());
			this->button_n2_sender = (gcnew System::Windows::Forms::Button());
			this->label_n2_Sender = (gcnew System::Windows::Forms::Label());
			this->label_n1_Sender = (gcnew System::Windows::Forms::Label());
			this->label_b_Sender = (gcnew System::Windows::Forms::Label());
			this->label_a_Sender = (gcnew System::Windows::Forms::Label());
			this->textBox_n2_Sender = (gcnew System::Windows::Forms::TextBox());
			this->textBox_n1_Sender = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a_Sender = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b_Sender = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button_Sender = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button_Decode_Text = (gcnew System::Windows::Forms::Button());
			this->label_Decode_2 = (gcnew System::Windows::Forms::Label());
			this->textBox_Common_Key_Decode = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox_Close_Reciever = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox_Open_Reciever = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label_Code_2 = (gcnew System::Windows::Forms::Label());
			this->button_Code_Text = (gcnew System::Windows::Forms::Button());
			this->textBox_Common_Key_Code = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox_Close_Sender = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox_Open_Sender = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_n2 = (gcnew System::Windows::Forms::Label());
			this->label_n1 = (gcnew System::Windows::Forms::Label());
			this->label_b = (gcnew System::Windows::Forms::Label());
			this->label_a = (gcnew System::Windows::Forms::Label());
			this->button_DrowFractal = (gcnew System::Windows::Forms::Button());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_n2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_n1 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(710, 564);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Silver;
			this->tabPage1->Controls->Add(this->label_Gamma);
			this->tabPage1->Controls->Add(this->richTextBox_Gamma);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(702, 538);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Создание ключа";
			// 
			// label_Gamma
			// 
			this->label_Gamma->AutoSize = true;
			this->label_Gamma->Location = System::Drawing::Point(334, 269);
			this->label_Gamma->Name = L"label_Gamma";
			this->label_Gamma->Size = System::Drawing::Size(41, 13);
			this->label_Gamma->TabIndex = 15;
			this->label_Gamma->Text = L"Гамма";
			// 
			// richTextBox_Gamma
			// 
			this->richTextBox_Gamma->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox_Gamma->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), 
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->richTextBox_Gamma->Location = System::Drawing::Point(0, 285);
			this->richTextBox_Gamma->Name = L"richTextBox_Gamma";
			this->richTextBox_Gamma->ReadOnly = true;
			this->richTextBox_Gamma->Size = System::Drawing::Size(702, 253);
			this->richTextBox_Gamma->TabIndex = 14;
			this->richTextBox_Gamma->Text = L"";
			this->toolTip1->SetToolTip(this->richTextBox_Gamma, L"Окно генерации гаммы");
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->button_a_Receiver);
			this->groupBox2->Controls->Add(this->label_n2_Reciever);
			this->groupBox2->Controls->Add(this->label_n1_Reciever);
			this->groupBox2->Controls->Add(this->label_b_Reciever);
			this->groupBox2->Controls->Add(this->label_a_Reciever);
			this->groupBox2->Controls->Add(this->textBox_n1_Receiver);
			this->groupBox2->Controls->Add(this->textBox_n2_Receiver);
			this->groupBox2->Controls->Add(this->textBox_a_Receiver);
			this->groupBox2->Controls->Add(this->textBox_b_Receiver);
			this->groupBox2->Location = System::Drawing::Point(355, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(347, 248);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры ключа абонента-получателя";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button_GenerationKey_Decode);
			this->groupBox4->Controls->Add(this->label_KeyDecode);
			this->groupBox4->Controls->Add(this->textBox_decodeKey);
			this->groupBox4->Location = System::Drawing::Point(0, 131);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(347, 117);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Создание ключа декодирования";
			// 
			// button_GenerationKey_Decode
			// 
			this->button_GenerationKey_Decode->Enabled = false;
			this->button_GenerationKey_Decode->Location = System::Drawing::Point(30, 79);
			this->button_GenerationKey_Decode->Name = L"button_GenerationKey_Decode";
			this->button_GenerationKey_Decode->Size = System::Drawing::Size(274, 23);
			this->button_GenerationKey_Decode->TabIndex = 12;
			this->button_GenerationKey_Decode->Text = L"Генерация общего ключа для декодирования";
			this->toolTip1->SetToolTip(this->button_GenerationKey_Decode, L"Кнопка генерации ключа декодирования");
			this->button_GenerationKey_Decode->UseVisualStyleBackColor = true;
			this->button_GenerationKey_Decode->Click += gcnew System::EventHandler(this, &MyForm::button_GenerationKey_Decode_Click);
			// 
			// label_KeyDecode
			// 
			this->label_KeyDecode->AutoSize = true;
			this->label_KeyDecode->Location = System::Drawing::Point(44, 26);
			this->label_KeyDecode->Name = L"label_KeyDecode";
			this->label_KeyDecode->Size = System::Drawing::Size(230, 13);
			this->label_KeyDecode->TabIndex = 11;
			this->label_KeyDecode->Text = L"Общий секретный ключ для декодирования";
			// 
			// textBox_decodeKey
			// 
			this->textBox_decodeKey->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_decodeKey->Location = System::Drawing::Point(30, 42);
			this->textBox_decodeKey->Name = L"textBox_decodeKey";
			this->textBox_decodeKey->ReadOnly = true;
			this->textBox_decodeKey->Size = System::Drawing::Size(274, 20);
			this->textBox_decodeKey->TabIndex = 10;
			// 
			// button_a_Receiver
			// 
			this->button_a_Receiver->Enabled = false;
			this->button_a_Receiver->Location = System::Drawing::Point(91, 91);
			this->button_a_Receiver->Name = L"button_a_Receiver";
			this->button_a_Receiver->Size = System::Drawing::Size(166, 23);
			this->button_a_Receiver->TabIndex = 9;
			this->button_a_Receiver->Text = L"Передача a";
			this->toolTip1->SetToolTip(this->button_a_Receiver, L"Кнопка передачи параметра \"a\"");
			this->button_a_Receiver->UseVisualStyleBackColor = true;
			this->button_a_Receiver->Click += gcnew System::EventHandler(this, &MyForm::button_a_Receiver_Click);
			// 
			// label_n2_Reciever
			// 
			this->label_n2_Reciever->AutoSize = true;
			this->label_n2_Reciever->Location = System::Drawing::Point(300, 38);
			this->label_n2_Reciever->Name = L"label_n2_Reciever";
			this->label_n2_Reciever->Size = System::Drawing::Size(19, 13);
			this->label_n2_Reciever->TabIndex = 8;
			this->label_n2_Reciever->Text = L"n2";
			// 
			// label_n1_Reciever
			// 
			this->label_n1_Reciever->AutoSize = true;
			this->label_n1_Reciever->Location = System::Drawing::Point(212, 38);
			this->label_n1_Reciever->Name = L"label_n1_Reciever";
			this->label_n1_Reciever->Size = System::Drawing::Size(19, 13);
			this->label_n1_Reciever->TabIndex = 7;
			this->label_n1_Reciever->Text = L"n1";
			// 
			// label_b_Reciever
			// 
			this->label_b_Reciever->AutoSize = true;
			this->label_b_Reciever->Location = System::Drawing::Point(127, 38);
			this->label_b_Reciever->Name = L"label_b_Reciever";
			this->label_b_Reciever->Size = System::Drawing::Size(13, 13);
			this->label_b_Reciever->TabIndex = 6;
			this->label_b_Reciever->Text = L"b";
			// 
			// label_a_Reciever
			// 
			this->label_a_Reciever->AutoSize = true;
			this->label_a_Reciever->Location = System::Drawing::Point(44, 38);
			this->label_a_Reciever->Name = L"label_a_Reciever";
			this->label_a_Reciever->Size = System::Drawing::Size(13, 13);
			this->label_a_Reciever->TabIndex = 5;
			this->label_a_Reciever->Text = L"a";
			// 
			// textBox_n1_Receiver
			// 
			this->textBox_n1_Receiver->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_n1_Receiver->Location = System::Drawing::Point(177, 54);
			this->textBox_n1_Receiver->Name = L"textBox_n1_Receiver";
			this->textBox_n1_Receiver->ReadOnly = true;
			this->textBox_n1_Receiver->Size = System::Drawing::Size(80, 20);
			this->textBox_n1_Receiver->TabIndex = 3;
			this->textBox_n1_Receiver->Text = L"40";
			// 
			// textBox_n2_Receiver
			// 
			this->textBox_n2_Receiver->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_n2_Receiver->Location = System::Drawing::Point(263, 54);
			this->textBox_n2_Receiver->Name = L"textBox_n2_Receiver";
			this->textBox_n2_Receiver->ReadOnly = true;
			this->textBox_n2_Receiver->Size = System::Drawing::Size(78, 20);
			this->textBox_n2_Receiver->TabIndex = 4;
			// 
			// textBox_a_Receiver
			// 
			this->textBox_a_Receiver->Location = System::Drawing::Point(6, 54);
			this->textBox_a_Receiver->Name = L"textBox_a_Receiver";
			this->textBox_a_Receiver->Size = System::Drawing::Size(80, 20);
			this->textBox_a_Receiver->TabIndex = 1;
			this->toolTip1->SetToolTip(this->textBox_a_Receiver, L"Параметр а. Дробное положительное число  больше 0 и меньше или равно 0.4");
			this->textBox_a_Receiver->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_a_Receiver_TextChanged);
			// 
			// textBox_b_Receiver
			// 
			this->textBox_b_Receiver->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_b_Receiver->Location = System::Drawing::Point(92, 54);
			this->textBox_b_Receiver->Name = L"textBox_b_Receiver";
			this->textBox_b_Receiver->ReadOnly = true;
			this->textBox_b_Receiver->Size = System::Drawing::Size(80, 20);
			this->textBox_b_Receiver->TabIndex = 2;
			this->textBox_b_Receiver->Text = L"-0,3497";
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->button_n2_sender);
			this->groupBox1->Controls->Add(this->label_n2_Sender);
			this->groupBox1->Controls->Add(this->label_n1_Sender);
			this->groupBox1->Controls->Add(this->label_b_Sender);
			this->groupBox1->Controls->Add(this->label_a_Sender);
			this->groupBox1->Controls->Add(this->textBox_n2_Sender);
			this->groupBox1->Controls->Add(this->textBox_n1_Sender);
			this->groupBox1->Controls->Add(this->textBox_a_Sender);
			this->groupBox1->Controls->Add(this->textBox_b_Sender);
			this->groupBox1->Location = System::Drawing::Point(3, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(354, 248);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры ключа абонента-отправителя";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button_GenerationKey_Code);
			this->groupBox3->Controls->Add(this->label_KeyCode);
			this->groupBox3->Controls->Add(this->textBox_codeKey);
			this->groupBox3->Location = System::Drawing::Point(0, 131);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(357, 117);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Создание ключа кодирования";
			// 
			// button_GenerationKey_Code
			// 
			this->button_GenerationKey_Code->Enabled = false;
			this->button_GenerationKey_Code->Location = System::Drawing::Point(41, 79);
			this->button_GenerationKey_Code->Name = L"button_GenerationKey_Code";
			this->button_GenerationKey_Code->Size = System::Drawing::Size(274, 23);
			this->button_GenerationKey_Code->TabIndex = 12;
			this->button_GenerationKey_Code->Text = L"Генерация общего ключа для кодирования";
			this->toolTip1->SetToolTip(this->button_GenerationKey_Code, L"Кнопка генерации ключа кодирования");
			this->button_GenerationKey_Code->UseVisualStyleBackColor = true;
			this->button_GenerationKey_Code->Click += gcnew System::EventHandler(this, &MyForm::button_GenerationKey_Code_Click);
			// 
			// label_KeyCode
			// 
			this->label_KeyCode->AutoSize = true;
			this->label_KeyCode->Location = System::Drawing::Point(57, 26);
			this->label_KeyCode->Name = L"label_KeyCode";
			this->label_KeyCode->Size = System::Drawing::Size(218, 13);
			this->label_KeyCode->TabIndex = 11;
			this->label_KeyCode->Text = L"Общий секретный ключ для кодирования";
			// 
			// textBox_codeKey
			// 
			this->textBox_codeKey->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_codeKey->Location = System::Drawing::Point(41, 42);
			this->textBox_codeKey->Name = L"textBox_codeKey";
			this->textBox_codeKey->ReadOnly = true;
			this->textBox_codeKey->Size = System::Drawing::Size(274, 20);
			this->textBox_codeKey->TabIndex = 10;
			// 
			// button_n2_sender
			// 
			this->button_n2_sender->AutoSize = true;
			this->button_n2_sender->Enabled = false;
			this->button_n2_sender->Location = System::Drawing::Point(97, 91);
			this->button_n2_sender->Name = L"button_n2_sender";
			this->button_n2_sender->Size = System::Drawing::Size(166, 23);
			this->button_n2_sender->TabIndex = 9;
			this->button_n2_sender->Text = L"Передача n2";
			this->toolTip1->SetToolTip(this->button_n2_sender, L"Кнопка передачи параметра \"n2\"");
			this->button_n2_sender->UseVisualStyleBackColor = true;
			this->button_n2_sender->Click += gcnew System::EventHandler(this, &MyForm::button_n2_sender_Click);
			// 
			// label_n2_Sender
			// 
			this->label_n2_Sender->AutoSize = true;
			this->label_n2_Sender->Location = System::Drawing::Point(301, 38);
			this->label_n2_Sender->Name = L"label_n2_Sender";
			this->label_n2_Sender->Size = System::Drawing::Size(19, 13);
			this->label_n2_Sender->TabIndex = 8;
			this->label_n2_Sender->Text = L"n2";
			// 
			// label_n1_Sender
			// 
			this->label_n1_Sender->AutoSize = true;
			this->label_n1_Sender->Location = System::Drawing::Point(212, 38);
			this->label_n1_Sender->Name = L"label_n1_Sender";
			this->label_n1_Sender->Size = System::Drawing::Size(19, 13);
			this->label_n1_Sender->TabIndex = 7;
			this->label_n1_Sender->Text = L"n1";
			// 
			// label_b_Sender
			// 
			this->label_b_Sender->AutoSize = true;
			this->label_b_Sender->Location = System::Drawing::Point(132, 38);
			this->label_b_Sender->Name = L"label_b_Sender";
			this->label_b_Sender->Size = System::Drawing::Size(13, 13);
			this->label_b_Sender->TabIndex = 6;
			this->label_b_Sender->Text = L"b";
			// 
			// label_a_Sender
			// 
			this->label_a_Sender->AutoSize = true;
			this->label_a_Sender->Location = System::Drawing::Point(42, 38);
			this->label_a_Sender->Name = L"label_a_Sender";
			this->label_a_Sender->Size = System::Drawing::Size(13, 13);
			this->label_a_Sender->TabIndex = 5;
			this->label_a_Sender->Text = L"a";
			// 
			// textBox_n2_Sender
			// 
			this->textBox_n2_Sender->Location = System::Drawing::Point(269, 54);
			this->textBox_n2_Sender->Name = L"textBox_n2_Sender";
			this->textBox_n2_Sender->Size = System::Drawing::Size(80, 20);
			this->textBox_n2_Sender->TabIndex = 3;
			this->toolTip1->SetToolTip(this->textBox_n2_Sender, L"Параметр cтепени \"n2\"(сама степнь вычисляется по формуле \"n1\"+\"n2\").Любое положит" 
				L"ельное число.");
			this->textBox_n2_Sender->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_n2_Sender_TextChanged);
			// 
			// textBox_n1_Sender
			// 
			this->textBox_n1_Sender->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_n1_Sender->Location = System::Drawing::Point(183, 54);
			this->textBox_n1_Sender->Name = L"textBox_n1_Sender";
			this->textBox_n1_Sender->ReadOnly = true;
			this->textBox_n1_Sender->Size = System::Drawing::Size(80, 20);
			this->textBox_n1_Sender->TabIndex = 4;
			this->textBox_n1_Sender->Text = L"40";
			// 
			// textBox_a_Sender
			// 
			this->textBox_a_Sender->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_a_Sender->Location = System::Drawing::Point(11, 54);
			this->textBox_a_Sender->Name = L"textBox_a_Sender";
			this->textBox_a_Sender->ReadOnly = true;
			this->textBox_a_Sender->Size = System::Drawing::Size(80, 20);
			this->textBox_a_Sender->TabIndex = 1;
			// 
			// textBox_b_Sender
			// 
			this->textBox_b_Sender->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_b_Sender->Location = System::Drawing::Point(97, 54);
			this->textBox_b_Sender->Name = L"textBox_b_Sender";
			this->textBox_b_Sender->ReadOnly = true;
			this->textBox_b_Sender->Size = System::Drawing::Size(80, 20);
			this->textBox_b_Sender->TabIndex = 2;
			this->textBox_b_Sender->Text = L"-0,3497";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Silver;
			this->tabPage2->Controls->Add(this->button_Sender);
			this->tabPage2->Controls->Add(this->groupBox6);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(702, 538);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Шифрование";
			// 
			// button_Sender
			// 
			this->button_Sender->AutoSize = true;
			this->button_Sender->Enabled = false;
			this->button_Sender->Location = System::Drawing::Point(266, 497);
			this->button_Sender->Name = L"button_Sender";
			this->button_Sender->Size = System::Drawing::Size(166, 23);
			this->button_Sender->TabIndex = 15;
			this->button_Sender->Text = L"Передать";
			this->toolTip1->SetToolTip(this->button_Sender, L"Кнопка передачи  зашифрованных данных отправителем");
			this->button_Sender->UseVisualStyleBackColor = true;
			this->button_Sender->Click += gcnew System::EventHandler(this, &MyForm::button_Sender_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->groupBox8);
			this->groupBox6->Controls->Add(this->richTextBox_Open_Reciever);
			this->groupBox6->Location = System::Drawing::Point(345, 0);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(351, 482);
			this->groupBox6->TabIndex = 1;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Открытый текст получателя";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button_Decode_Text);
			this->groupBox8->Controls->Add(this->label_Decode_2);
			this->groupBox8->Controls->Add(this->textBox_Common_Key_Decode);
			this->groupBox8->Controls->Add(this->richTextBox_Close_Reciever);
			this->groupBox8->Location = System::Drawing::Point(0, 219);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(351, 263);
			this->groupBox8->TabIndex = 2;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Закрытый текст получателя";
			// 
			// button_Decode_Text
			// 
			this->button_Decode_Text->AutoSize = true;
			this->button_Decode_Text->Enabled = false;
			this->button_Decode_Text->Location = System::Drawing::Point(102, 228);
			this->button_Decode_Text->Name = L"button_Decode_Text";
			this->button_Decode_Text->Size = System::Drawing::Size(166, 23);
			this->button_Decode_Text->TabIndex = 14;
			this->button_Decode_Text->Text = L"Декодировать";
			this->toolTip1->SetToolTip(this->button_Decode_Text, L"Кнопка для декодирования сообщения получателем");
			this->button_Decode_Text->UseVisualStyleBackColor = true;
			this->button_Decode_Text->Click += gcnew System::EventHandler(this, &MyForm::button_Decode_Text_Click);
			// 
			// label_Decode_2
			// 
			this->label_Decode_2->AutoSize = true;
			this->label_Decode_2->Location = System::Drawing::Point(108, 186);
			this->label_Decode_2->Name = L"label_Decode_2";
			this->label_Decode_2->Size = System::Drawing::Size(172, 13);
			this->label_Decode_2->TabIndex = 14;
			this->label_Decode_2->Text = L"Общий ключ для декодирования";
			// 
			// textBox_Common_Key_Decode
			// 
			this->textBox_Common_Key_Decode->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Common_Key_Decode->Location = System::Drawing::Point(47, 202);
			this->textBox_Common_Key_Decode->Name = L"textBox_Common_Key_Decode";
			this->textBox_Common_Key_Decode->ReadOnly = true;
			this->textBox_Common_Key_Decode->Size = System::Drawing::Size(274, 20);
			this->textBox_Common_Key_Decode->TabIndex = 14;
			// 
			// richTextBox_Close_Reciever
			// 
			this->richTextBox_Close_Reciever->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox_Close_Reciever->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), 
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->richTextBox_Close_Reciever->ImeMode = System::Windows::Forms::ImeMode::On;
			this->richTextBox_Close_Reciever->Location = System::Drawing::Point(12, 19);
			this->richTextBox_Close_Reciever->Name = L"richTextBox_Close_Reciever";
			this->richTextBox_Close_Reciever->ReadOnly = true;
			this->richTextBox_Close_Reciever->Size = System::Drawing::Size(329, 164);
			this->richTextBox_Close_Reciever->TabIndex = 3;
			this->richTextBox_Close_Reciever->Text = L"";
			this->toolTip1->SetToolTip(this->richTextBox_Close_Reciever, L"Окно для принятия зашифрованного сообщения");
			// 
			// richTextBox_Open_Reciever
			// 
			this->richTextBox_Open_Reciever->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->richTextBox_Open_Reciever->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), 
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->richTextBox_Open_Reciever->ImeMode = System::Windows::Forms::ImeMode::On;
			this->richTextBox_Open_Reciever->Location = System::Drawing::Point(12, 19);
			this->richTextBox_Open_Reciever->Name = L"richTextBox_Open_Reciever";
			this->richTextBox_Open_Reciever->Size = System::Drawing::Size(329, 164);
			this->richTextBox_Open_Reciever->TabIndex = 1;
			this->richTextBox_Open_Reciever->Text = L"";
			this->toolTip1->SetToolTip(this->richTextBox_Open_Reciever, L"Окно для получения расшированного сообщения");
			this->richTextBox_Open_Reciever->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox_Open_Reciever_TextChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->richTextBox_Open_Sender);
			this->groupBox5->Location = System::Drawing::Point(3, 0);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(348, 482);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Открытый текст отправителя";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label_Code_2);
			this->groupBox7->Controls->Add(this->button_Code_Text);
			this->groupBox7->Controls->Add(this->textBox_Common_Key_Code);
			this->groupBox7->Controls->Add(this->richTextBox_Close_Sender);
			this->groupBox7->Location = System::Drawing::Point(-4, 219);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(353, 263);
			this->groupBox7->TabIndex = 1;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Закрытый текст отправителя";
			// 
			// label_Code_2
			// 
			this->label_Code_2->AutoSize = true;
			this->label_Code_2->Location = System::Drawing::Point(92, 186);
			this->label_Code_2->Name = L"label_Code_2";
			this->label_Code_2->Size = System::Drawing::Size(160, 13);
			this->label_Code_2->TabIndex = 13;
			this->label_Code_2->Text = L"Общий ключ для кодирования";
			// 
			// button_Code_Text
			// 
			this->button_Code_Text->AutoSize = true;
			this->button_Code_Text->Enabled = false;
			this->button_Code_Text->Location = System::Drawing::Point(86, 228);
			this->button_Code_Text->Name = L"button_Code_Text";
			this->button_Code_Text->Size = System::Drawing::Size(166, 23);
			this->button_Code_Text->TabIndex = 12;
			this->button_Code_Text->Text = L"Кодировать";
			this->toolTip1->SetToolTip(this->button_Code_Text, L"Кнопка для кодирования сообщения отправителем");
			this->button_Code_Text->UseVisualStyleBackColor = true;
			this->button_Code_Text->Click += gcnew System::EventHandler(this, &MyForm::button_Code_Text_Click);
			// 
			// textBox_Common_Key_Code
			// 
			this->textBox_Common_Key_Code->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Common_Key_Code->Location = System::Drawing::Point(34, 202);
			this->textBox_Common_Key_Code->Name = L"textBox_Common_Key_Code";
			this->textBox_Common_Key_Code->ReadOnly = true;
			this->textBox_Common_Key_Code->Size = System::Drawing::Size(274, 20);
			this->textBox_Common_Key_Code->TabIndex = 11;
			// 
			// richTextBox_Close_Sender
			// 
			this->richTextBox_Close_Sender->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox_Close_Sender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), 
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->richTextBox_Close_Sender->ImeMode = System::Windows::Forms::ImeMode::On;
			this->richTextBox_Close_Sender->Location = System::Drawing::Point(10, 19);
			this->richTextBox_Close_Sender->Name = L"richTextBox_Close_Sender";
			this->richTextBox_Close_Sender->ReadOnly = true;
			this->richTextBox_Close_Sender->Size = System::Drawing::Size(329, 164);
			this->richTextBox_Close_Sender->TabIndex = 2;
			this->richTextBox_Close_Sender->Text = L"";
			this->toolTip1->SetToolTip(this->richTextBox_Close_Sender, L"Окно для шифрования сообщения");
			// 
			// richTextBox_Open_Sender
			// 
			this->richTextBox_Open_Sender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), 
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->richTextBox_Open_Sender->ImeMode = System::Windows::Forms::ImeMode::On;
			this->richTextBox_Open_Sender->Location = System::Drawing::Point(12, 19);
			this->richTextBox_Open_Sender->Name = L"richTextBox_Open_Sender";
			this->richTextBox_Open_Sender->Size = System::Drawing::Size(323, 164);
			this->richTextBox_Open_Sender->TabIndex = 0;
			this->richTextBox_Open_Sender->Text = L"";
			this->toolTip1->SetToolTip(this->richTextBox_Open_Sender, L"Окно сообщения для отправки");
			this->richTextBox_Open_Sender->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox_Open_Sender_TextChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Silver;
			this->tabPage3->Controls->Add(this->pictureBox1);
			this->tabPage3->Controls->Add(this->label_n2);
			this->tabPage3->Controls->Add(this->label_n1);
			this->tabPage3->Controls->Add(this->label_b);
			this->tabPage3->Controls->Add(this->label_a);
			this->tabPage3->Controls->Add(this->button_DrowFractal);
			this->tabPage3->Controls->Add(this->textBox_a);
			this->tabPage3->Controls->Add(this->textBox_n2);
			this->tabPage3->Controls->Add(this->textBox_b);
			this->tabPage3->Controls->Add(this->textBox_n1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(702, 538);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Отображение фрактала";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(0, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(702, 493);
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox1, L"Место для отображения рисунка");
			// 
			// label_n2
			// 
			this->label_n2->AutoSize = true;
			this->label_n2->Location = System::Drawing::Point(394, 0);
			this->label_n2->Name = L"label_n2";
			this->label_n2->Size = System::Drawing::Size(19, 13);
			this->label_n2->TabIndex = 17;
			this->label_n2->Text = L"n2";
			// 
			// label_n1
			// 
			this->label_n1->AutoSize = true;
			this->label_n1->Location = System::Drawing::Point(280, 1);
			this->label_n1->Name = L"label_n1";
			this->label_n1->Size = System::Drawing::Size(19, 13);
			this->label_n1->TabIndex = 16;
			this->label_n1->Text = L"n1";
			// 
			// label_b
			// 
			this->label_b->AutoSize = true;
			this->label_b->Location = System::Drawing::Point(164, 0);
			this->label_b->Name = L"label_b";
			this->label_b->Size = System::Drawing::Size(13, 13);
			this->label_b->TabIndex = 15;
			this->label_b->Text = L"b";
			// 
			// label_a
			// 
			this->label_a->AutoSize = true;
			this->label_a->Location = System::Drawing::Point(46, 0);
			this->label_a->Name = L"label_a";
			this->label_a->Size = System::Drawing::Size(13, 13);
			this->label_a->TabIndex = 14;
			this->label_a->Text = L"a";
			// 
			// button_DrowFractal
			// 
			this->button_DrowFractal->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_DrowFractal->Location = System::Drawing::Point(508, 12);
			this->button_DrowFractal->Name = L"button_DrowFractal";
			this->button_DrowFractal->Size = System::Drawing::Size(187, 27);
			this->button_DrowFractal->TabIndex = 13;
			this->button_DrowFractal->Text = L"Рисовать";
			this->toolTip1->SetToolTip(this->button_DrowFractal, L"Кнопка для отбражения ключа в графическом виде");
			this->button_DrowFractal->UseVisualStyleBackColor = true;
			this->button_DrowFractal->Click += gcnew System::EventHandler(this, &MyForm::button_DrawFractal_Click);
			// 
			// textBox_a
			// 
			this->textBox_a->Location = System::Drawing::Point(12, 17);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(110, 20);
			this->textBox_a->TabIndex = 9;
			this->textBox_a->Text = L"0,357";
			this->toolTip1->SetToolTip(this->textBox_a, L"Коэффициент \"а\" - вещественная часть комплексного числа .Для хорошего ключа лучше" 
				L" использовать дробное положительное число большее 0 до 0.38");
			this->textBox_a->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_a_TextChanged);
			// 
			// textBox_n2
			// 
			this->textBox_n2->Location = System::Drawing::Point(364, 16);
			this->textBox_n2->Name = L"textBox_n2";
			this->textBox_n2->Size = System::Drawing::Size(110, 20);
			this->textBox_n2->TabIndex = 12;
			this->textBox_n2->Text = L"60";
			this->toolTip1->SetToolTip(this->textBox_n2, L"Степень комплексного полинома это n1+n2, где n1 и n2 коэффициенты степени - целые" 
				L" положительные числа ");
			this->textBox_n2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_n2_TextChanged);
			// 
			// textBox_b
			// 
			this->textBox_b->Location = System::Drawing::Point(128, 16);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(110, 20);
			this->textBox_b->TabIndex = 10;
			this->toolTip1->SetToolTip(this->textBox_b, L"Коэффициент \"b\" - мнимая часть комплексного числа .Для хорошего ключа лучше испол" 
				L"ьзовать дробное положительное число  большее 0 до 0.7");
			this->textBox_b->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_b_TextChanged);
			// 
			// textBox_n1
			// 
			this->textBox_n1->Location = System::Drawing::Point(248, 16);
			this->textBox_n1->Name = L"textBox_n1";
			this->textBox_n1->Size = System::Drawing::Size(110, 20);
			this->textBox_n1->TabIndex = 11;
			this->toolTip1->SetToolTip(this->textBox_n1, L"Степень комплексного полинома это n1+n2, где n1 и n2 коэффициенты степени - целые" 
				L" положительные числа ");
			this->textBox_n1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_n1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(716, 566);
			this->Controls->Add(this->tabControl1);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"FractalShield";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// Метод удаления знака - из числа
	private: String^ exp(String^ str)
			 {
					return (str[0] == '-') ? str = str->Remove(0, 1) : str;
			 }
			 //Метод отображения фрактала
	private: void Drawing(int width, int height, Bitmap^ pix)
			 {
				 int n1 = Convert::ToInt32(textBox_n1->Text);
				 int n2 = Convert::ToInt32(textBox_n2->Text);
				 const unsigned max = 16;
				 int iter=n1 + n2;
				 double zx, zy, tx,ty,cx,cy ;
				 int x, y,n, mx, my;
				 cx = Convert::ToDouble(textBox_a->Text);
				 cy = Convert::ToDouble(textBox_b->Text);
				 mx = width/2;
				 my = height/2;
				 for (y = -my; y <= my; ++y)
					 for( x = -mx; x <= mx; ++x)
					 {
						 n = 0;
						 zx = x * 0.005;
						 zy = y * 0.005;
						 while (((zx*zx + zy*zy) < max )&& (n < iter)) 
						 {
							 tx = zx;
							 ty=zy;
							 zx = tx*tx- ty*ty + cx;
							 zy = 2*tx*ty + cy;
							 n++;
						 }
						 if (n < iter )							   
							 pix->SetPixel(mx+x,my+y,Color::FromArgb(255, 255-n*16%255, 0,255-n*60%255));
						 pictureBox1->BackgroundImage=pix;
					 }
				 
				
			 }

	private: bool check_string_fields() 
	{
		return(textBox_b->Text != ""&&textBox_a->Text != ""&&textBox_n1->Text != ""&&textBox_n2->Text != "") ? true : false;
	}

	private: System::Void prepare_button(Button^ btn, TextBox^ sender, TextBox^ receiver) {
		btn->Enabled = true;
		if (sender->Text == "")
		{
			btn->Enabled = false;
			receiver->Clear();
			button_GenerationKey_Code->Enabled = false;
			button_GenerationKey_Decode->Enabled = false;
		}
	}

	private: System::Void dry_method( String^ parametr_name, TextBox^ text_box1,  String^ reg_exp,TextBox^ text_box2, TextBox^ text_box3, TextBox^ text_box4, TextBox^ text_box5, TextBox^ text_box6, TextBox^ text_box7)
	{
		text_box1->Text = exp(text_box1->Text);
		Match ^match = Regex::Match(text_box1->Text, reg_exp);
		if (match->Success)
		{
			text_box3->Text = text_box1->Text;
			text_box4->Text = text_box2->Text;
			text_box5->Text = text_box6->Text;
			if (text_box1->Text != "" & text_box7->Text != "")
			{
				button_GenerationKey_Code->Enabled = true;
				button_GenerationKey_Decode->Enabled = true;
			}
		}
		else
		{
			MessageBox::Show("Введенная информация не соответсвует формату ввода! В параметр '" + parametr_name + "' необходимо вводить целое положительное число.", "Внимание");
			text_box1->Clear();
			return;
		}
	}
			 //Метод загрузки формы
	private: System::Void dry_gen_co_dec_method(TextBox^ text_box1, TextBox^ text_box2, TextBox^ text_box3, TextBox^ text_box4, TextBox^ text_box5, TextBox^ text_box6) {
		text_box1->Clear();
		double re = Convert::ToDouble(text_box2->Text);
		double im = Convert::ToDouble(text_box3->Text);
		int n = Convert::ToInt32(text_box4->Text) + Convert::ToInt32(text_box5->Text);
		codec.FN.SetFractalNum(re,im ,n);
		codec.FN.ComplexNumToCode(codec.Key);
		String^  st1 = String::Empty;
		for (unsigned short i = 0; i < 16; ++i)
		{
			st1 = st1->Format("{0:X}", static_cast<unsigned char>(codec.Key[i]));
			text_box1->Text += st1;
		}
			text_box6->Text	= text_box1->Text;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 codec.GammaGen();
				 String^ st1 = String::Empty;
				 for(int i = 0; i < GAMMA_SIZE; ++i)
				 {
					 st1 = st1->Format("{0:X}", codec.Gamma[i]);
					 richTextBox_Gamma->Text += st1;
				 }
				 textBox_b->Text = textBox_b_Sender->Text;
				 textBox_n1->Text = textBox_n1_Sender->Text;
			 }

			 //Метод проверки на отстутвие текста поля textBox_n2_Sender
	private: System::Void textBox_n2_Sender_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				prepare_button(button_n2_sender, textBox_n2_Sender, textBox_n2_Receiver);
			 }
			 //Метод проверки на отстутвие текста поля textBox_a_Receiver
	private: System::Void textBox_a_Receiver_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				prepare_button(button_a_Receiver, textBox_a_Receiver, textBox_a_Sender);
			 }
			 //Метод обработки нажатия кнопки "Передача n2"
	private: System::Void button_n2_sender_Click(System::Object^  sender, System::EventArgs^  e)
			 {
					dry_method("n2", textBox_n2_Sender, "^([0-9]+)$", textBox_n2_Sender, textBox_n2_Receiver, textBox_n2, textBox_b, textBox_b_Sender, textBox_a_Receiver);
			 }
			 // Метод обработки нажатия кнопки "Передача а" 
	private: System::Void button_a_Receiver_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				dry_method("a", textBox_a_Receiver, "[0],[0-9]+", textBox_n1_Receiver, textBox_a_Sender, textBox_n1, textBox_a, textBox_a_Receiver, textBox_a_Receiver);
			 }

			 // Метод обработки нажатия кнопки "Генерация ключа кодирования" 
	private: System::Void button_GenerationKey_Code_Click(System::Object^  sender, System::EventArgs^  e) 
			 { 
				dry_gen_co_dec_method(textBox_codeKey, textBox_a_Sender, textBox_b_Sender, textBox_n1_Sender, textBox_n2_Sender, textBox_Common_Key_Code);
			 }

			 // Метод обработки нажатия кнопки "Генерация ключа декодирования" 
	private: System::Void button_GenerationKey_Decode_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				dry_gen_co_dec_method(textBox_decodeKey, textBox_a_Receiver, textBox_b_Receiver, textBox_n1_Receiver, textBox_n2_Receiver, textBox_Common_Key_Decode);
	
			 }
			 // Метод обработки нажатия кнопки "Кодировать" 
	private: System::Void button_Code_Text_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox_Close_Sender->Clear();
				 Byte b[1024];
				 codec.TextLength=richTextBox_Open_Sender->Text->Length;
				 char* chstr1 = (char*)(void*)Marshal::StringToHGlobalAnsi(richTextBox_Open_Sender->Text);                  
				 strcpy(( char*)b,chstr1);    
				 Marshal::FreeHGlobal((IntPtr)chstr1);
				 for(int i = 0; i < codec.TextLength; ++i)
					 codec.OText[i]=b[i];
				 codec.EncodeText();
				 String^ st1=String::Empty;
				 for(int i = 0;i < codec.TextLength; ++i)
				 {
					 st1=st1->Format("{0:X}",codec.CText[i]);
					 richTextBox_Close_Sender->Text+=st1;
				 }
				 button_Sender->Enabled = true;
			 }
			 // Метод обработки нажатия кнопки "Передать" 
	private: System::Void button_Sender_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox_Close_Reciever->Clear();
				 richTextBox_Close_Reciever->Text = richTextBox_Close_Sender->Text;
				 button_Decode_Text->Enabled = true;
			 }
			 // Метод обработки нажатия кнопки "Декодировать" 
	private: System::Void button_Decode_Text_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 char ch[2],temp[1024];
				 codec.DecodeText();
				 strcpy_s(temp, "");
				 for(int i=0;i<codec.TextLength;i++)
				 {
					 sprintf_s(ch,"%c", codec.OText[i]);
					 strcat_s(temp,ch);
				 }
				 String^ st=gcnew String(temp);
				 richTextBox_Open_Reciever->Text = st;
			 }
			 //Метод проверки на отстутвие текста поля richTextBox_Open_Sender
	private: System::Void richTextBox_Open_Sender_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(richTextBox_Open_Sender->Text != "")
					 button_Code_Text->Enabled = true;
				 else 
				 {
					 button_Code_Text->Enabled = false;
					 richTextBox_Close_Sender->Clear();
					 button_Sender->Enabled = false;
				 }
			 }
			 //Метод проверки на отстутвие текста поля richTextBox_Open_Reciever
	private: System::Void richTextBox_Open_Reciever_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(richTextBox_Open_Reciever->Text != "")
					 button_Decode_Text->Enabled = true;
				 else 
				 {
					 button_Decode_Text->Enabled = false;
					 richTextBox_Close_Reciever->Clear();
				 }
			 }
			 //Метод обработки нажатия кнопки "Рисовать"
	private: System::Void button_DrawFractal_Click(System::Object^  sender, System::EventArgs^  e) 
			 {		
				 Bitmap^ pix=gcnew  Bitmap(pictureBox1->Width,pictureBox1->Height);
				 textBox_a->Text = exp(textBox_a->Text);
				 textBox_n1->Text = exp(textBox_n1->Text);
				 textBox_n2->Text = exp(textBox_n2->Text);

				 bool first_half_match = Regex::Match(textBox_a->Text, "^([0],[0-9]+)$")->Success
					 && Regex::Match(textBox_b->Text, "^([-+]?[0],[0-9]+)$")->Success;

				 bool second_half_match = Regex::Match(textBox_n1->Text, "(^[0-9]+)$")->Success &&
					 Regex::Match(textBox_n2->Text, "(^[0-9]+)$")->Success;

				 if(first_half_match && second_half_match )
					 Drawing(pictureBox1->Width-1, pictureBox1->Height-1, pix);
				 else 
					 MessageBox::Show("Одно или несколько полей не соответвует формату ввода. Повторите ввод");
			 }
			 //Метод проверки на отстутвие текста поля textBox_a
	private: System::Void textBox_a_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 { 
				button_DrowFractal->Enabled = check_string_fields();
			 }
			 //Метод проверки на отстутвие текста поля textBox_b
	private: System::Void textBox_b_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				button_DrowFractal->Enabled = check_string_fields();
			 }
			 //Метод проверки на отстутвие текста поля  textBox_n1
	private: System::Void textBox_n1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				button_DrowFractal->Enabled = check_string_fields();
			 }
			 //Метод проверки на отстутвие текста поля   textBox_n2
	private: System::Void textBox_n2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				button_DrowFractal->Enabled = check_string_fields();
			 }
	};
}
