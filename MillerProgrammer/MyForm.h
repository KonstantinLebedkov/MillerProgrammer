#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
namespace MillerProgrammer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ PazSelectorAngle;
	protected:

	private: System::Windows::Forms::RadioButton^ PazSelectorSize;


	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ InternalDiam;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ ExtermalDiam;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ OutsideDiam;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ ExternalLength;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TotalLength;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ PazLenght;

	private: System::Windows::Forms::TextBox^ PazAngle;

	private: System::Windows::Forms::TextBox^ PazSize;
	private: System::Windows::Forms::RadioButton^ EdgeSelectorAngle;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ EdgeSelectorLenght;
	private: System::Windows::Forms::TextBox^ EdgeLenght;
	private: System::Windows::Forms::TextBox^ EdgeAngle;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::CheckBox^ BlackFeedBox;


	private: System::Windows::Forms::TextBox^ SideStep;
	private: System::Windows::Forms::CheckBox^ SideStepBox;
	private: System::Windows::Forms::TextBox^ DeepStep;
	private: System::Windows::Forms::CheckBox^ DeepStepBox;
	private: System::Windows::Forms::CheckBox^ BlackSpeedBox;

	private: System::Windows::Forms::TextBox^ BlackFeed;
	private: System::Windows::Forms::TextBox^ BlackSpeed;
	private: System::Windows::Forms::Button^ Calc;
	private: System::Windows::Forms::RichTextBox^ CodeBox;


	private: System::Windows::Forms::TextBox^ Mill;
	private: System::Windows::Forms::TextBox^ FileName;
	private: System::Windows::Forms::Button^ Save;
	private: System::Windows::Forms::TextBox^ WhiteSpeed;
	private: System::Windows::Forms::CheckBox^ WhiteSpeedBox;
	private: System::Windows::Forms::TextBox^ WhiteFeed;
	private: System::Windows::Forms::CheckBox^ WhiteFeedBox;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ HolderLenght;
	private: System::Windows::Forms::CheckBox^ HolderLenghtBox;
	private: System::Windows::Forms::TextBox^ SafeZ;
	private: System::Windows::Forms::CheckBox^ SafeZBox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RadioButton^ PazParallel;
	private: System::Windows::Forms::RadioButton^ PazAngular;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::RadioButton^ CalcSelectrorBottom;

	private: System::Windows::Forms::RadioButton^ CalcSelectrorTop;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ ClearanceDivider;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ Save_New;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PazSelectorAngle = (gcnew System::Windows::Forms::RadioButton());
			this->PazSelectorSize = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->InternalDiam = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ExtermalDiam = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->OutsideDiam = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ExternalLength = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TotalLength = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->PazLenght = (gcnew System::Windows::Forms::TextBox());
			this->PazAngle = (gcnew System::Windows::Forms::TextBox());
			this->PazSize = (gcnew System::Windows::Forms::TextBox());
			this->EdgeSelectorAngle = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->EdgeLenght = (gcnew System::Windows::Forms::TextBox());
			this->EdgeAngle = (gcnew System::Windows::Forms::TextBox());
			this->EdgeSelectorLenght = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->ClearanceDivider = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->PazParallel = (gcnew System::Windows::Forms::RadioButton());
			this->PazAngular = (gcnew System::Windows::Forms::RadioButton());
			this->SafeZ = (gcnew System::Windows::Forms::TextBox());
			this->SafeZBox = (gcnew System::Windows::Forms::CheckBox());
			this->HolderLenght = (gcnew System::Windows::Forms::TextBox());
			this->HolderLenghtBox = (gcnew System::Windows::Forms::CheckBox());
			this->WhiteSpeed = (gcnew System::Windows::Forms::TextBox());
			this->WhiteSpeedBox = (gcnew System::Windows::Forms::CheckBox());
			this->WhiteFeed = (gcnew System::Windows::Forms::TextBox());
			this->WhiteFeedBox = (gcnew System::Windows::Forms::CheckBox());
			this->Mill = (gcnew System::Windows::Forms::TextBox());
			this->BlackSpeed = (gcnew System::Windows::Forms::TextBox());
			this->BlackSpeedBox = (gcnew System::Windows::Forms::CheckBox());
			this->BlackFeed = (gcnew System::Windows::Forms::TextBox());
			this->BlackFeedBox = (gcnew System::Windows::Forms::CheckBox());
			this->SideStep = (gcnew System::Windows::Forms::TextBox());
			this->SideStepBox = (gcnew System::Windows::Forms::CheckBox());
			this->DeepStep = (gcnew System::Windows::Forms::TextBox());
			this->DeepStepBox = (gcnew System::Windows::Forms::CheckBox());
			this->Calc = (gcnew System::Windows::Forms::Button());
			this->CodeBox = (gcnew System::Windows::Forms::RichTextBox());
			this->FileName = (gcnew System::Windows::Forms::TextBox());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->CalcSelectrorBottom = (gcnew System::Windows::Forms::RadioButton());
			this->CalcSelectrorTop = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->Save_New = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// PazSelectorAngle
			// 
			this->PazSelectorAngle->AutoSize = true;
			this->PazSelectorAngle->Location = System::Drawing::Point(89, 19);
			this->PazSelectorAngle->Name = L"PazSelectorAngle";
			this->PazSelectorAngle->Size = System::Drawing::Size(50, 17);
			this->PazSelectorAngle->TabIndex = 0;
			this->PazSelectorAngle->Text = L"Угол";
			this->PazSelectorAngle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->PazSelectorAngle->UseVisualStyleBackColor = true;
			this->PazSelectorAngle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::PazSelectorSize_CheckedChanged);
			// 
			// PazSelectorSize
			// 
			this->PazSelectorSize->AutoSize = true;
			this->PazSelectorSize->Checked = true;
			this->PazSelectorSize->Location = System::Drawing::Point(6, 19);
			this->PazSelectorSize->Name = L"PazSelectorSize";
			this->PazSelectorSize->Size = System::Drawing::Size(64, 17);
			this->PazSelectorSize->TabIndex = 1;
			this->PazSelectorSize->TabStop = true;
			this->PazSelectorSize->Text = L"Ширина";
			this->PazSelectorSize->UseVisualStyleBackColor = true;
			this->PazSelectorSize->CheckedChanged += gcnew System::EventHandler(this, &MyForm::PazSelectorSize_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Фреза";
			// 
			// InternalDiam
			// 
			this->InternalDiam->Location = System::Drawing::Point(81, 15);
			this->InternalDiam->Name = L"InternalDiam";
			this->InternalDiam->Size = System::Drawing::Size(100, 20);
			this->InternalDiam->TabIndex = 4;
			this->InternalDiam->Text = L"21";
			this->InternalDiam->TextChanged += gcnew System::EventHandler(this, &MyForm::InternalDiam_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Внутренний";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Наружный";
			// 
			// ExtermalDiam
			// 
			this->ExtermalDiam->Location = System::Drawing::Point(81, 41);
			this->ExtermalDiam->Name = L"ExtermalDiam";
			this->ExtermalDiam->Size = System::Drawing::Size(100, 20);
			this->ExtermalDiam->TabIndex = 6;
			this->ExtermalDiam->Text = L"23";
			this->ExtermalDiam->TextChanged += gcnew System::EventHandler(this, &MyForm::ExtermalDiam_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Внешний";
			// 
			// OutsideDiam
			// 
			this->OutsideDiam->Location = System::Drawing::Point(81, 67);
			this->OutsideDiam->Name = L"OutsideDiam";
			this->OutsideDiam->Size = System::Drawing::Size(100, 20);
			this->OutsideDiam->TabIndex = 8;
			this->OutsideDiam->Text = L"25";
			this->OutsideDiam->TextChanged += gcnew System::EventHandler(this, &MyForm::OutsideDiam_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(197, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Проточенная длина";
			// 
			// ExternalLength
			// 
			this->ExternalLength->Location = System::Drawing::Point(309, 44);
			this->ExternalLength->Name = L"ExternalLength";
			this->ExternalLength->Size = System::Drawing::Size(100, 20);
			this->ExternalLength->TabIndex = 10;
			this->ExternalLength->Text = L"60";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(197, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Общая длина";
			// 
			// TotalLength
			// 
			this->TotalLength->Location = System::Drawing::Point(309, 70);
			this->TotalLength->Name = L"TotalLength";
			this->TotalLength->Size = System::Drawing::Size(100, 20);
			this->TotalLength->TabIndex = 12;
			this->TotalLength->Text = L"120";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(190, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Дина паза";
			// 
			// PazLenght
			// 
			this->PazLenght->Location = System::Drawing::Point(193, 36);
			this->PazLenght->Name = L"PazLenght";
			this->PazLenght->Size = System::Drawing::Size(100, 20);
			this->PazLenght->TabIndex = 16;
			this->PazLenght->Text = L"70";
			// 
			// PazAngle
			// 
			this->PazAngle->Enabled = this->PazSelectorAngle->Checked;
			this->PazAngle->Location = System::Drawing::Point(89, 36);
			this->PazAngle->Name = L"PazAngle";
			this->PazAngle->Size = System::Drawing::Size(86, 20);
			this->PazAngle->TabIndex = 14;
			this->PazAngle->TextChanged += gcnew System::EventHandler(this, &MyForm::PazAngle_TextChanged);
			// 
			// PazSize
			// 
			this->PazSize->Enabled = this->PazSelectorSize->Checked;
			this->PazSize->Location = System::Drawing::Point(6, 36);
			this->PazSize->Name = L"PazSize";
			this->PazSize->Size = System::Drawing::Size(77, 20);
			this->PazSize->TabIndex = 19;
			this->PazSize->Text = L"10";
			this->PazSize->TextChanged += gcnew System::EventHandler(this, &MyForm::PazSize_TextChanged);
			// 
			// EdgeSelectorAngle
			// 
			this->EdgeSelectorAngle->AutoSize = true;
			this->EdgeSelectorAngle->Checked = true;
			this->EdgeSelectorAngle->Location = System::Drawing::Point(6, 22);
			this->EdgeSelectorAngle->Name = L"EdgeSelectorAngle";
			this->EdgeSelectorAngle->Size = System::Drawing::Size(89, 17);
			this->EdgeSelectorAngle->TabIndex = 20;
			this->EdgeSelectorAngle->TabStop = true;
			this->EdgeSelectorAngle->Text = L"Угол лезвия";
			this->EdgeSelectorAngle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->EdgeSelectorAngle->UseVisualStyleBackColor = true;
			this->EdgeSelectorAngle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EdgeSelectorAngle_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->PazLenght);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->PazSize);
			this->groupBox1->Controls->Add(this->PazSelectorSize);
			this->groupBox1->Controls->Add(this->PazSelectorAngle);
			this->groupBox1->Controls->Add(this->PazAngle);
			this->groupBox1->Location = System::Drawing::Point(30, 111);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(307, 72);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->EdgeLenght);
			this->groupBox2->Controls->Add(this->EdgeAngle);
			this->groupBox2->Controls->Add(this->EdgeSelectorLenght);
			this->groupBox2->Controls->Add(this->EdgeSelectorAngle);
			this->groupBox2->Location = System::Drawing::Point(30, 264);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(216, 80);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// EdgeLenght
			// 
			this->EdgeLenght->Enabled = false;
			this->EdgeLenght->Location = System::Drawing::Point(112, 44);
			this->EdgeLenght->Name = L"EdgeLenght";
			this->EdgeLenght->Size = System::Drawing::Size(97, 20);
			this->EdgeLenght->TabIndex = 22;
			this->EdgeLenght->Text = L"10";
			this->EdgeLenght->TextChanged += gcnew System::EventHandler(this, &MyForm::EdgeLenght_TextChanged);
			// 
			// EdgeAngle
			// 
			this->EdgeAngle->Location = System::Drawing::Point(6, 44);
			this->EdgeAngle->Name = L"EdgeAngle";
			this->EdgeAngle->Size = System::Drawing::Size(100, 20);
			this->EdgeAngle->TabIndex = 20;
			this->EdgeAngle->Text = L"15";
			this->EdgeAngle->TextChanged += gcnew System::EventHandler(this, &MyForm::EdgeAngle_TextChanged);
			// 
			// EdgeSelectorLenght
			// 
			this->EdgeSelectorLenght->AutoSize = true;
			this->EdgeSelectorLenght->Location = System::Drawing::Point(112, 22);
			this->EdgeSelectorLenght->Name = L"EdgeSelectorLenght";
			this->EdgeSelectorLenght->Size = System::Drawing::Size(97, 17);
			this->EdgeSelectorLenght->TabIndex = 21;
			this->EdgeSelectorLenght->Text = L"Длина лезвия";
			this->EdgeSelectorLenght->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->EdgeSelectorLenght->UseVisualStyleBackColor = true;
			this->EdgeSelectorLenght->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EdgeSelectorAngle_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->TotalLength);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->ExternalLength);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->OutsideDiam);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->ExtermalDiam);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->InternalDiam);
			this->groupBox3->Location = System::Drawing::Point(30, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(427, 105);
			this->groupBox3->TabIndex = 23;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->ClearanceDivider);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->PazParallel);
			this->groupBox4->Controls->Add(this->PazAngular);
			this->groupBox4->Controls->Add(this->SafeZ);
			this->groupBox4->Controls->Add(this->SafeZBox);
			this->groupBox4->Controls->Add(this->HolderLenght);
			this->groupBox4->Controls->Add(this->HolderLenghtBox);
			this->groupBox4->Controls->Add(this->WhiteSpeed);
			this->groupBox4->Controls->Add(this->WhiteSpeedBox);
			this->groupBox4->Controls->Add(this->WhiteFeed);
			this->groupBox4->Controls->Add(this->WhiteFeedBox);
			this->groupBox4->Controls->Add(this->Mill);
			this->groupBox4->Controls->Add(this->BlackSpeed);
			this->groupBox4->Controls->Add(this->BlackSpeedBox);
			this->groupBox4->Controls->Add(this->BlackFeed);
			this->groupBox4->Controls->Add(this->BlackFeedBox);
			this->groupBox4->Controls->Add(this->SideStep);
			this->groupBox4->Controls->Add(this->SideStepBox);
			this->groupBox4->Controls->Add(this->DeepStep);
			this->groupBox4->Controls->Add(this->DeepStepBox);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Location = System::Drawing::Point(485, 10);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(243, 290);
			this->groupBox4->TabIndex = 24;
			this->groupBox4->TabStop = false;
			// 
			// ClearanceDivider
			// 
			this->ClearanceDivider->Location = System::Drawing::Point(115, 30);
			this->ClearanceDivider->Name = L"ClearanceDivider";
			this->ClearanceDivider->Size = System::Drawing::Size(100, 20);
			this->ClearanceDivider->TabIndex = 25;
			this->ClearanceDivider->Text = L"3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(114, 13);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Делитель чистоты";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(43, 266);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Паз";
			// 
			// PazParallel
			// 
			this->PazParallel->AutoSize = true;
			this->PazParallel->Checked = true;
			this->PazParallel->Location = System::Drawing::Point(76, 264);
			this->PazParallel->Name = L"PazParallel";
			this->PazParallel->Size = System::Drawing::Size(65, 17);
			this->PazParallel->TabIndex = 22;
			this->PazParallel->TabStop = true;
			this->PazParallel->Text = L"Прямой";
			this->PazParallel->UseVisualStyleBackColor = true;
			// 
			// PazAngular
			// 
			this->PazAngular->AutoSize = true;
			this->PazAngular->Location = System::Drawing::Point(147, 264);
			this->PazAngular->Name = L"PazAngular";
			this->PazAngular->Size = System::Drawing::Size(68, 17);
			this->PazAngular->TabIndex = 21;
			this->PazAngular->Text = L"Угловой";
			this->PazAngular->UseVisualStyleBackColor = true;
			// 
			// SafeZ
			// 
			this->SafeZ->Enabled = false;
			this->SafeZ->Location = System::Drawing::Point(132, 238);
			this->SafeZ->Name = L"SafeZ";
			this->SafeZ->Size = System::Drawing::Size(100, 20);
			this->SafeZ->TabIndex = 20;
			this->SafeZ->Text = L"100";
			// 
			// SafeZBox
			// 
			this->SafeZBox->AutoSize = true;
			this->SafeZBox->Location = System::Drawing::Point(6, 240);
			this->SafeZBox->Name = L"SafeZBox";
			this->SafeZBox->Size = System::Drawing::Size(127, 17);
			this->SafeZBox->TabIndex = 19;
			this->SafeZBox->Text = L"Безопасная высота";
			this->SafeZBox->UseVisualStyleBackColor = true;
			this->SafeZBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SafeZBox_CheckedChanged);
			// 
			// HolderLenght
			// 
			this->HolderLenght->Enabled = false;
			this->HolderLenght->Location = System::Drawing::Point(132, 212);
			this->HolderLenght->Name = L"HolderLenght";
			this->HolderLenght->Size = System::Drawing::Size(100, 20);
			this->HolderLenght->TabIndex = 18;
			this->HolderLenght->Text = L"50";
			// 
			// HolderLenghtBox
			// 
			this->HolderLenghtBox->AutoSize = true;
			this->HolderLenghtBox->Location = System::Drawing::Point(6, 214);
			this->HolderLenghtBox->Name = L"HolderLenghtBox";
			this->HolderLenghtBox->Size = System::Drawing::Size(103, 17);
			this->HolderLenghtBox->TabIndex = 17;
			this->HolderLenghtBox->Text = L"Длина патрона";
			this->HolderLenghtBox->UseVisualStyleBackColor = true;
			this->HolderLenghtBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::HolderLenghtBox_CheckedChanged);
			// 
			// WhiteSpeed
			// 
			this->WhiteSpeed->Enabled = false;
			this->WhiteSpeed->Location = System::Drawing::Point(132, 186);
			this->WhiteSpeed->Name = L"WhiteSpeed";
			this->WhiteSpeed->Size = System::Drawing::Size(100, 20);
			this->WhiteSpeed->TabIndex = 16;
			this->WhiteSpeed->Text = L"10000";
			// 
			// WhiteSpeedBox
			// 
			this->WhiteSpeedBox->AutoSize = true;
			this->WhiteSpeedBox->Location = System::Drawing::Point(6, 188);
			this->WhiteSpeedBox->Name = L"WhiteSpeedBox";
			this->WhiteSpeedBox->Size = System::Drawing::Size(123, 17);
			this->WhiteSpeedBox->TabIndex = 15;
			this->WhiteSpeedBox->Text = L"Чистовые обороты";
			this->WhiteSpeedBox->UseVisualStyleBackColor = true;
			this->WhiteSpeedBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WhiteSpeedBox_CheckedChanged);
			// 
			// WhiteFeed
			// 
			this->WhiteFeed->Enabled = false;
			this->WhiteFeed->Location = System::Drawing::Point(132, 160);
			this->WhiteFeed->Name = L"WhiteFeed";
			this->WhiteFeed->Size = System::Drawing::Size(100, 20);
			this->WhiteFeed->TabIndex = 14;
			this->WhiteFeed->Text = L"500";
			// 
			// WhiteFeedBox
			// 
			this->WhiteFeedBox->AutoSize = true;
			this->WhiteFeedBox->Location = System::Drawing::Point(6, 162);
			this->WhiteFeedBox->Name = L"WhiteFeedBox";
			this->WhiteFeedBox->Size = System::Drawing::Size(113, 17);
			this->WhiteFeedBox->TabIndex = 13;
			this->WhiteFeedBox->Text = L"Чистовая подача";
			this->WhiteFeedBox->UseVisualStyleBackColor = true;
			this->WhiteFeedBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WhiteFeedBox_CheckedChanged);
			// 
			// Mill
			// 
			this->Mill->Location = System::Drawing::Point(7, 30);
			this->Mill->Name = L"Mill";
			this->Mill->Size = System::Drawing::Size(100, 20);
			this->Mill->TabIndex = 12;
			this->Mill->Text = L"2";
			// 
			// BlackSpeed
			// 
			this->BlackSpeed->Enabled = false;
			this->BlackSpeed->Location = System::Drawing::Point(132, 134);
			this->BlackSpeed->Name = L"BlackSpeed";
			this->BlackSpeed->Size = System::Drawing::Size(100, 20);
			this->BlackSpeed->TabIndex = 11;
			this->BlackSpeed->Text = L"5000";
			// 
			// BlackSpeedBox
			// 
			this->BlackSpeedBox->AutoSize = true;
			this->BlackSpeedBox->Location = System::Drawing::Point(6, 136);
			this->BlackSpeedBox->Name = L"BlackSpeedBox";
			this->BlackSpeedBox->Size = System::Drawing::Size(124, 17);
			this->BlackSpeedBox->TabIndex = 10;
			this->BlackSpeedBox->Text = L"Черновые обороты";
			this->BlackSpeedBox->UseVisualStyleBackColor = true;
			this->BlackSpeedBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BlackSpeedBox_CheckedChanged);
			// 
			// BlackFeed
			// 
			this->BlackFeed->Enabled = false;
			this->BlackFeed->Location = System::Drawing::Point(132, 108);
			this->BlackFeed->Name = L"BlackFeed";
			this->BlackFeed->Size = System::Drawing::Size(100, 20);
			this->BlackFeed->TabIndex = 9;
			this->BlackFeed->Text = L"300";
			// 
			// BlackFeedBox
			// 
			this->BlackFeedBox->AutoSize = true;
			this->BlackFeedBox->Location = System::Drawing::Point(6, 110);
			this->BlackFeedBox->Name = L"BlackFeedBox";
			this->BlackFeedBox->Size = System::Drawing::Size(114, 17);
			this->BlackFeedBox->TabIndex = 8;
			this->BlackFeedBox->Text = L"Черновая подача";
			this->BlackFeedBox->UseVisualStyleBackColor = true;
			this->BlackFeedBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// SideStep
			// 
			this->SideStep->Enabled = false;
			this->SideStep->Location = System::Drawing::Point(132, 82);
			this->SideStep->Name = L"SideStep";
			this->SideStep->Size = System::Drawing::Size(100, 20);
			this->SideStep->TabIndex = 7;
			this->SideStep->Text = L"0.7";
			// 
			// SideStepBox
			// 
			this->SideStepBox->AutoSize = true;
			this->SideStepBox->Location = System::Drawing::Point(6, 84);
			this->SideStepBox->Name = L"SideStepBox";
			this->SideStepBox->Size = System::Drawing::Size(109, 17);
			this->SideStepBox->TabIndex = 6;
			this->SideStepBox->Text = L"Ширина прохода";
			this->SideStepBox->UseVisualStyleBackColor = true;
			this->SideStepBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SideStepBox_CheckedChanged);
			// 
			// DeepStep
			// 
			this->DeepStep->Enabled = false;
			this->DeepStep->Location = System::Drawing::Point(132, 56);
			this->DeepStep->Name = L"DeepStep";
			this->DeepStep->Size = System::Drawing::Size(100, 20);
			this->DeepStep->TabIndex = 5;
			this->DeepStep->Text = L"0.2";
			// 
			// DeepStepBox
			// 
			this->DeepStepBox->AutoSize = true;
			this->DeepStepBox->Location = System::Drawing::Point(6, 58);
			this->DeepStepBox->Name = L"DeepStepBox";
			this->DeepStepBox->Size = System::Drawing::Size(111, 17);
			this->DeepStepBox->TabIndex = 4;
			this->DeepStepBox->Text = L"Глубина прохода";
			this->DeepStepBox->UseVisualStyleBackColor = true;
			this->DeepStepBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DeepStepBox_CheckedChanged);
			// 
			// Calc
			// 
			this->Calc->Location = System::Drawing::Point(30, 350);
			this->Calc->Name = L"Calc";
			this->Calc->Size = System::Drawing::Size(216, 24);
			this->Calc->TabIndex = 25;
			this->Calc->Text = L"Рассчитать";
			this->Calc->UseVisualStyleBackColor = true;
			this->Calc->Click += gcnew System::EventHandler(this, &MyForm::Calc_Click);
			// 
			// CodeBox
			// 
			this->CodeBox->Location = System::Drawing::Point(258, 214);
			this->CodeBox->Name = L"CodeBox";
			this->CodeBox->Size = System::Drawing::Size(221, 165);
			this->CodeBox->TabIndex = 26;
			this->CodeBox->Text = L"";
			// 
			// FileName
			// 
			this->FileName->Location = System::Drawing::Point(485, 324);
			this->FileName->Name = L"FileName";
			this->FileName->Size = System::Drawing::Size(252, 20);
			this->FileName->TabIndex = 27;
			// 
			// Save
			// 
			this->Save->Location = System::Drawing::Point(651, 350);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(86, 23);
			this->Save->TabIndex = 28;
			this->Save->Text = L"Переписать";
			this->Save->UseVisualStyleBackColor = true;
			this->Save->Click += gcnew System::EventHandler(this, &MyForm::Save_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(485, 308);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 13);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Имя файла *.tap";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->CalcSelectrorBottom);
			this->groupBox5->Controls->Add(this->CalcSelectrorTop);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Location = System::Drawing::Point(30, 189);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(216, 52);
			this->groupBox5->TabIndex = 30;
			this->groupBox5->TabStop = false;
			// 
			// CalcSelectrorBottom
			// 
			this->CalcSelectrorBottom->AutoSize = true;
			this->CalcSelectrorBottom->Location = System::Drawing::Point(89, 29);
			this->CalcSelectrorBottom->Name = L"CalcSelectrorBottom";
			this->CalcSelectrorBottom->Size = System::Drawing::Size(65, 17);
			this->CalcSelectrorBottom->TabIndex = 2;
			this->CalcSelectrorBottom->TabStop = true;
			this->CalcSelectrorBottom->Text = L"Нижней";
			this->CalcSelectrorBottom->UseVisualStyleBackColor = true;
			this->CalcSelectrorBottom->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// CalcSelectrorTop
			// 
			this->CalcSelectrorTop->AutoSize = true;
			this->CalcSelectrorTop->Checked = true;
			this->CalcSelectrorTop->Location = System::Drawing::Point(6, 29);
			this->CalcSelectrorTop->Name = L"CalcSelectrorTop";
			this->CalcSelectrorTop->Size = System::Drawing::Size(67, 17);
			this->CalcSelectrorTop->TabIndex = 1;
			this->CalcSelectrorTop->TabStop = true;
			this->CalcSelectrorTop->Text = L"Верхней";
			this->CalcSelectrorTop->UseVisualStyleBackColor = true;
			this->CalcSelectrorTop->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(160, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Расчет угла створаот кромки:";
			// 
			// Save_New
			// 
			this->Save_New->Location = System::Drawing::Point(559, 351);
			this->Save_New->Name = L"Save_New";
			this->Save_New->Size = System::Drawing::Size(86, 23);
			this->Save_New->TabIndex = 31;
			this->Save_New->Text = L"Сохранить";
			this->Save_New->UseVisualStyleBackColor = true;
			this->Save_New->Click += gcnew System::EventHandler(this, &MyForm::Save_New_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(749, 386);
			this->Controls->Add(this->Save_New);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Save);
			this->Controls->Add(this->FileName);
			this->Controls->Add(this->CodeBox);
			this->Controls->Add(this->Calc);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox4);
			this->Name = L"MyForm";
			this->Text = L"Параметрический 5-осевой программатор пазов свистков";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		this->PazAngle->Text = (this->CalcSelectrorBottom->Checked)?
			(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->InternalDiam->Text))).ToString("F")
			:
			(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->OutsideDiam->Text))).ToString("F")
			;
		this->EdgeLenght->Text = (1 / tan(System::Convert::ToDouble("0" + this->EdgeAngle->Text) * M_PI / 180) * (System::Convert::ToDouble("0" + this->OutsideDiam->Text) - System::Convert::ToDouble("0" + this->InternalDiam->Text))/2).ToString("F");
	}

	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Calc_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Save_New_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddLine(int LN, System::String^ GCode);
	private: System::Void AddLine(int LN, Char Coord1, float Coord1V);
	private: System::Void AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V);
	private: System::Void AddLine(int LN, Char Coord1, float Coord1V, Char Coord2, float Coord2V);
	private: System::Void AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V, Char Coord2, float Coord2V);
	private: System::Void AddLine(int LN, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V);
	private: System::Void AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V);
	private: System::Void AddLine(int LN, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V, Char Coord4, float Coord4V);
	private: System::Void AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V, Char Coord4, float Coord4V);
	private: System::Void AddLine(int LN, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V, Char Coord4, float Coord4V, Char Coord5, float Coord5V);
	private: System::Void AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V, Char Coord4, float Coord4V, Char Coord5, float Coord5V);



	private: System::Void PazSelectorSize_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->PazSize->Enabled = this->PazSelectorSize->Checked;
		this->PazAngle->Enabled = this->PazSelectorAngle->Checked;
	}
	private: System::Void EdgeSelectorAngle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->EdgeAngle->Enabled = this->EdgeSelectorAngle->Checked;
		this->EdgeLenght->Enabled = this->EdgeSelectorLenght->Checked;
	}
	private: System::Void PazSize_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->PazSize->Text = this->PazSize->Text->Replace('.', ',');
		try {
			if (this->PazAngle->Enabled == false)
				this->PazAngle->Text = (this->CalcSelectrorBottom->Checked) ?
				(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->InternalDiam->Text))).ToString("F")
				:
				(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->OutsideDiam->Text))).ToString("F")
				;
		}
		catch(...){}
	}

	private: System::Void PazAngle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->PazAngle->Text = this->PazAngle->Text->Replace('.', ',');
		try {
			if (this->PazSize->Enabled == false)
				this->PazSize->Text = (this->CalcSelectrorTop->Checked) ?
				(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->OutsideDiam->Text)).ToString("F")
				:
				(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->InternalDiam->Text)).ToString("F")
				;
		}
		catch (...) {}
	}
	private: System::Void EdgeAngle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->EdgeAngle->Text = this->EdgeAngle->Text->Replace('.', ',');
		try {
			if (this->EdgeLenght->Enabled == false)
				this->EdgeLenght->Text = (1 / tan(System::Convert::ToDouble("0" + this->EdgeAngle->Text) * M_PI / 180) * (System::Convert::ToDouble("0" + this->OutsideDiam->Text) - System::Convert::ToDouble("0" + this->InternalDiam->Text)) / 2).ToString("F");
		}
		catch (...) {}
	}
	private: System::Void EdgeLenght_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->EdgeLenght->Text = this->EdgeLenght->Text->Replace('.', ',');
		try {
			if (this->EdgeAngle->Enabled == false)
				this->EdgeAngle->Text = (180 / M_PI * atan(1 / System::Convert::ToDouble("0" + this->EdgeLenght->Text) / 2 * (System::Convert::ToDouble("0" + this->OutsideDiam->Text) - System::Convert::ToDouble("0" + this->InternalDiam->Text)))).ToString("F");
		}
		catch (...) {}
	}
	private: System::Void InternalDiam_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->InternalDiam->Text = this->InternalDiam->Text->Replace('.', ',');
		try {
			if (this->PazAngle->Enabled == false)
				this->PazAngle->Text = (this->CalcSelectrorBottom->Checked) ?
				(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->InternalDiam->Text))).ToString("F")
				:
				(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->OutsideDiam->Text))).ToString("F")
				;
			if (this->PazSize->Enabled == false)
				this->PazSize->Text = (this->CalcSelectrorTop->Checked) ?
				(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->OutsideDiam->Text)).ToString("F")
				:
				(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->InternalDiam->Text)).ToString("F")
				;
			if (this->EdgeAngle->Enabled == false)
				this->EdgeAngle->Text = (180 / M_PI * atan(1 / System::Convert::ToDouble("0" + this->EdgeLenght->Text) / 2 * (System::Convert::ToDouble("0" + this->OutsideDiam->Text) - System::Convert::ToDouble("0" + this->InternalDiam->Text)))).ToString("F");
			if (this->EdgeLenght->Enabled == false)
				this->EdgeLenght->Text = (1 / tan(System::Convert::ToDouble("0" + this->EdgeAngle->Text) * M_PI / 180) * (System::Convert::ToDouble("0" + this->OutsideDiam->Text) - System::Convert::ToDouble("0" + this->InternalDiam->Text)) / 2).ToString("F");
		}
		catch (...) {}
	}
	private: System::Void OutsideDiam_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->OutsideDiam->Text = this->OutsideDiam->Text->Replace('.', ',');
		try
		{
			if (this->PazAngle->Enabled == false)
				this->PazAngle->Text = (this->CalcSelectrorBottom->Checked) ?
				(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->InternalDiam->Text))).ToString("F")
				:
				(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->OutsideDiam->Text))).ToString("F")
				;
			if (this->PazSize->Enabled == false)
				this->PazSize->Text = (this->CalcSelectrorTop->Checked) ?
				(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->OutsideDiam->Text)).ToString("F")
				:
				(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->InternalDiam->Text)).ToString("F")
				;
			if (this->EdgeAngle->Enabled == false)
				this->EdgeAngle->Text = (180 / M_PI * atan(1 / System::Convert::ToDouble("0" + this->EdgeLenght->Text) * (System::Convert::ToDouble("0" + this->OutsideDiam->Text) - System::Convert::ToDouble("0" + this->InternalDiam->Text)))).ToString("F");
			if (this->EdgeLenght->Enabled == false)
				this->EdgeLenght->Text = (1 / tan(System::Convert::ToDouble("0" + this->EdgeAngle->Text) * M_PI / 180) * (System::Convert::ToDouble("0" + this->OutsideDiam->Text) - System::Convert::ToDouble("0" + this->InternalDiam->Text)) / 2).ToString("F");
		}
		catch (...) {}
	}
	private: System::Void DeepStepBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->DeepStep->Enabled = this->DeepStepBox->Checked;
			if (!this->DeepStepBox->Checked) this->DeepStep->Text = (System::Convert::ToDouble("0" + this->Mill->Text) / 10).ToString("F");
		}
		catch (...) {}
	}
	private: System::Void SideStepBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->SideStep->Enabled = this->SideStepBox->Checked;
			if (!this->SideStepBox->Checked) this->SideStep->Text = (System::Convert::ToDouble("0" + this->Mill->Text) * 0.35).ToString("F");
		}
		catch (...) {}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->BlackFeed->Enabled = this->BlackFeedBox->Checked;
			if (!this->BlackFeedBox->Checked) this->BlackFeed->Text = "300";
		}
		catch (...) {}
	}
	private: System::Void BlackSpeedBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->BlackSpeed->Enabled = this->BlackSpeedBox->Checked;
			if (!this->BlackSpeedBox->Checked) this->BlackSpeed->Text = "5000";
		}
		catch (...) {}
	}
	private: System::Void WhiteFeedBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->WhiteFeed->Enabled = this->WhiteFeedBox->Checked;
			if (!this->WhiteFeedBox->Checked) this->WhiteFeed->Text = "500";
		}
		catch (...) {}
	}
	private: System::Void WhiteSpeedBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->WhiteSpeed->Enabled = this->WhiteSpeedBox->Checked;
			if (!this->WhiteSpeedBox->Checked) this->WhiteSpeed->Text = "10000";
		}
		catch (...) {}
	}
	private: System::Void HolderLenghtBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->HolderLenght->Enabled = this->HolderLenghtBox->Checked;
			if (!this->HolderLenghtBox->Checked) this->HolderLenght->Text = "50";
		}
		catch (...) {}
	}
	private: System::Void SafeZBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->SafeZ->Enabled = this->SafeZBox->Checked;
			if (!this->SafeZBox->Checked) this->SafeZ->Text = "100";
		}
		catch (...) {}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (this->PazAngle->Enabled == false)
				this->PazAngle->Text = (this->CalcSelectrorBottom->Checked) ?
				(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->InternalDiam->Text))).ToString("F")
				:
				(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->OutsideDiam->Text))).ToString("F")
				;
			if (this->PazSize->Enabled == false)
				this->PazSize->Text = (this->CalcSelectrorTop->Checked) ?
				(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->OutsideDiam->Text)).ToString("F")
				:
				(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->InternalDiam->Text)).ToString("F")
				;
		}
		catch (...) {}
	}
private: System::Void ExtermalDiam_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->ExtermalDiam->Text = this->ExtermalDiam->Text->Replace('.', ',');
}
};
}