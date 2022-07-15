#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <locale>
#include <string>
#include <iostream>
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
	private: System::Windows::Forms::RadioButton^ shortWhistle;
	private: System::Windows::Forms::RadioButton^ longWhistle;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ RootLength;

	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::RadioButton^ pazClear;
	private: System::Windows::Forms::RadioButton^ pazFull;
	private: System::Windows::Forms::TextBox^ EdgeBold;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::CheckBox^ FlatType;

	private: int MillD; //диаметр фрезы
	private: int BSpeed;	//черновые обороты
	private: int WSpeed;	//чистовые обороты
	private: int LineNum;	//счетчик строк для вывода G-кода
	private: int ClearSts;	//делитель чистоты (для чистовых проходов)
	private: float InD;	//внутренний диаметр (либо, расстояние от оси до плоскости, если долблёный плоский канал)
	private: float ExD;	//обточенный диаметр
	private: float OutD;	//внешний диаметр
	private: float ExtLen;	//обточенная длина
	private: float TotLen; //общая длина - не важна для длинной трубки
	private: float HoldedLen;	//длинна необрабатываемой части, зажатой в кулачках
	private: float PazStart;	//координата Y начала паза
	private: float PazEnd;	//координата Y конца паза
	private: float PazS;		//ширина паза
	private: float PazA;		//угол створа паза
	private: float PazAR;
	private: float PazLen;	//длина паза (общая, с проточенной частью)
	private: float EdgeA;	//угол лезвия
	private: float EdgeAR;
	private: float EdgeLen;	//длина лезвия
	private: float EdgeB;	//толщина лезвия
	private: float DeepSt;	//глубина съема за проход
	private: float SideSt;	//ширина съема за проход
	private: float BFeed;	//черновая подача
	private: float WFeed;	//чистовая подача
	private: float NextX;	//расчетная координата Х для следующего прохода
	private: float NextY;	//расчетная координата Y для следующего прохода
	private: float NextZ;	//расчетная координата Z для следующего прохода
	private: float HoldLenght;	//длина патрона (обычно, патрон 49 + линейка 1 = 50)
	private: float TopZ;		//безопасная высота
	private: bool PazType;	//тип задания паза - шириной или углом створа (по умолчанию, шириной)
	private: bool EdgeType;	//тип задания лезвия (по умолчанию, углом)
	private: bool PazForm;	//форма паза - параллельные стенки или сектор круга (по умолчанию, параллель)
	private: const float BaseA = -90;	//базовый наклон оси патрона
	private: const float BaseC = 0;		//базовый поворот патрона
	private: const float FastFallGap = 0.5;	//базовое расстояние от детали для быстрых ходов
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ FileMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ LoadFile;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveFileMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveFileAsMenu;
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
	private: System::Windows::Forms::TextBox^ ProjectFileName;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	private: System::Windows::Forms::RichTextBox^ ParamsBox;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
private: System::Windows::Forms::CheckBox^ LockedPaz;
private: System::Windows::Forms::CheckBox^ OnStik;
	private: System::ComponentModel::IContainer^ components;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->pazClear = (gcnew System::Windows::Forms::RadioButton());
			this->pazFull = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->EdgeBold = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->EdgeLenght = (gcnew System::Windows::Forms::TextBox());
			this->EdgeAngle = (gcnew System::Windows::Forms::TextBox());
			this->EdgeSelectorLenght = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->RootLength = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->ClearanceDivider = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->PazParallel = (gcnew System::Windows::Forms::RadioButton());
			this->PazAngular = (gcnew System::Windows::Forms::RadioButton());
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
			this->shortWhistle = (gcnew System::Windows::Forms::RadioButton());
			this->longWhistle = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->OnStik = (gcnew System::Windows::Forms::CheckBox());
			this->LockedPaz = (gcnew System::Windows::Forms::CheckBox());
			this->FlatType = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->FileMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LoadFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveFileMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveFileAsMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->ProjectFileName = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->ParamsBox = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// PazSelectorAngle
			// 
			this->PazSelectorAngle->AutoSize = true;
			this->PazSelectorAngle->Location = System::Drawing::Point(89, 19);
			this->PazSelectorAngle->Name = L"PazSelectorAngle";
			this->PazSelectorAngle->Size = System::Drawing::Size(50, 17);
			this->PazSelectorAngle->TabIndex = 12;
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
			this->PazSelectorSize->TabIndex = 11;
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
			this->toolTip1->SetToolTip(this->InternalDiam, L"Внутренний диаметр");
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
			this->ExtermalDiam->TabIndex = 5;
			this->ExtermalDiam->Text = L"23";
			this->toolTip1->SetToolTip(this->ExtermalDiam, L"Диаметр проточки под посадку колпачка на виндвей");
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
			this->OutsideDiam->TabIndex = 6;
			this->OutsideDiam->Text = L"25";
			this->toolTip1->SetToolTip(this->OutsideDiam, L"Внешний диаметр");
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
			this->ExternalLength->TabIndex = 8;
			this->ExternalLength->Text = L"60";
			this->toolTip1->SetToolTip(this->ExternalLength, L"Участок проточенный под колпачок на виндвее\r\n(помимо участка для зажима в кулачка"
				L"х и припуска)");
			this->ExternalLength->TextChanged += gcnew System::EventHandler(this, &MyForm::ExternalLength_TextChanged);
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
			this->TotalLength->TabIndex = 9;
			this->TotalLength->Text = L"90";
			this->toolTip1->SetToolTip(this->TotalLength, L"Общая длинна всей заготовки\r\nвключая все возможные припуски");
			this->TotalLength->TextChanged += gcnew System::EventHandler(this, &MyForm::TotalLength_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(77, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Дина паза";
			// 
			// PazLenght
			// 
			this->PazLenght->Location = System::Drawing::Point(109, 36);
			this->PazLenght->Name = L"PazLenght";
			this->PazLenght->Size = System::Drawing::Size(100, 20);
			this->PazLenght->TabIndex = 18;
			this->PazLenght->Text = L"5";
			this->PazLenght->TextChanged += gcnew System::EventHandler(this, &MyForm::PazLenght_TextChanged);
			// 
			// PazAngle
			// 
			this->PazAngle->Enabled = this->PazSelectorAngle->Checked;
			this->PazAngle->Location = System::Drawing::Point(89, 36);
			this->PazAngle->Name = L"PazAngle";
			this->PazAngle->Size = System::Drawing::Size(86, 20);
			this->PazAngle->TabIndex = 14;
			this->toolTip1->SetToolTip(this->PazAngle, L"Угол створа паза");
			this->PazAngle->TextChanged += gcnew System::EventHandler(this, &MyForm::PazAngle_TextChanged);
			// 
			// PazSize
			// 
			this->PazSize->Enabled = this->PazSelectorSize->Checked;
			this->PazSize->Location = System::Drawing::Point(6, 36);
			this->PazSize->Name = L"PazSize";
			this->PazSize->Size = System::Drawing::Size(77, 20);
			this->PazSize->TabIndex = 13;
			this->PazSize->Text = L"10";
			this->toolTip1->SetToolTip(this->PazSize, L"Ширина окна в мм,\r\nв случае углового паза, считается \r\nпо внутерннему или наружно"
				L"му диаметру");
			this->PazSize->TextChanged += gcnew System::EventHandler(this, &MyForm::PazSize_TextChanged);
			// 
			// EdgeSelectorAngle
			// 
			this->EdgeSelectorAngle->AutoSize = true;
			this->EdgeSelectorAngle->Checked = true;
			this->EdgeSelectorAngle->Location = System::Drawing::Point(17, 22);
			this->EdgeSelectorAngle->Name = L"EdgeSelectorAngle";
			this->EdgeSelectorAngle->Size = System::Drawing::Size(89, 17);
			this->EdgeSelectorAngle->TabIndex = 26;
			this->EdgeSelectorAngle->TabStop = true;
			this->EdgeSelectorAngle->Text = L"Угол лезвия";
			this->EdgeSelectorAngle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->EdgeSelectorAngle->UseVisualStyleBackColor = true;
			this->EdgeSelectorAngle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EdgeSelectorAngle_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->groupBox7);
			this->groupBox1->Controls->Add(this->PazSize);
			this->groupBox1->Controls->Add(this->PazSelectorSize);
			this->groupBox1->Controls->Add(this->PazSelectorAngle);
			this->groupBox1->Controls->Add(this->PazAngle);
			this->groupBox1->Location = System::Drawing::Point(29, 180);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(427, 78);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->pazClear);
			this->groupBox7->Controls->Add(this->pazFull);
			this->groupBox7->Controls->Add(this->PazLenght);
			this->groupBox7->Controls->Add(this->label7);
			this->groupBox7->Location = System::Drawing::Point(200, 0);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(227, 78);
			this->groupBox7->TabIndex = 15;
			this->groupBox7->TabStop = false;
			// 
			// pazClear
			// 
			this->pazClear->AutoSize = true;
			this->pazClear->Checked = true;
			this->pazClear->Location = System::Drawing::Point(14, 49);
			this->pazClear->Name = L"pazClear";
			this->pazClear->Size = System::Drawing::Size(59, 17);
			this->pazClear->TabIndex = 17;
			this->pazClear->TabStop = true;
			this->pazClear->Text = L"чистая";
			this->toolTip1->SetToolTip(this->pazClear, L"Только длина окна\r\n(расстояние от кромки лезвия до начала проточки под колпачок в"
				L"индвея)\r\n");
			this->pazClear->UseVisualStyleBackColor = true;
			// 
			// pazFull
			// 
			this->pazFull->AutoSize = true;
			this->pazFull->Location = System::Drawing::Point(14, 26);
			this->pazFull->Name = L"pazFull";
			this->pazFull->Size = System::Drawing::Size(58, 17);
			this->pazFull->TabIndex = 16;
			this->pazFull->Text = L"общая";
			this->toolTip1->SetToolTip(this->pazFull, L"Длина паза от кромки лезвия до торца виндвея");
			this->pazFull->UseVisualStyleBackColor = true;
			this->pazFull->CheckedChanged += gcnew System::EventHandler(this, &MyForm::pazFull_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->EdgeBold);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->EdgeLenght);
			this->groupBox2->Controls->Add(this->EdgeAngle);
			this->groupBox2->Controls->Add(this->EdgeSelectorLenght);
			this->groupBox2->Controls->Add(this->EdgeSelectorAngle);
			this->groupBox2->Location = System::Drawing::Point(29, 362);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(216, 116);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// EdgeBold
			// 
			this->EdgeBold->Location = System::Drawing::Point(6, 85);
			this->EdgeBold->Name = L"EdgeBold";
			this->EdgeBold->Size = System::Drawing::Size(100, 20);
			this->EdgeBold->TabIndex = 30;
			this->EdgeBold->Text = L"0.5";
			this->EdgeBold->TextChanged += gcnew System::EventHandler(this, &MyForm::EdgeBold_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 69);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(133, 13);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Толщина кромки лезвия";
			// 
			// EdgeLenght
			// 
			this->EdgeLenght->Enabled = false;
			this->EdgeLenght->Location = System::Drawing::Point(112, 44);
			this->EdgeLenght->Name = L"EdgeLenght";
			this->EdgeLenght->Size = System::Drawing::Size(97, 20);
			this->EdgeLenght->TabIndex = 29;
			this->EdgeLenght->Text = L"10";
			this->EdgeLenght->TextChanged += gcnew System::EventHandler(this, &MyForm::EdgeLenght_TextChanged);
			// 
			// EdgeAngle
			// 
			this->EdgeAngle->Location = System::Drawing::Point(6, 44);
			this->EdgeAngle->Name = L"EdgeAngle";
			this->EdgeAngle->Size = System::Drawing::Size(100, 20);
			this->EdgeAngle->TabIndex = 28;
			this->EdgeAngle->Text = L"15";
			this->EdgeAngle->TextChanged += gcnew System::EventHandler(this, &MyForm::EdgeAngle_TextChanged);
			// 
			// EdgeSelectorLenght
			// 
			this->EdgeSelectorLenght->AutoSize = true;
			this->EdgeSelectorLenght->Location = System::Drawing::Point(112, 22);
			this->EdgeSelectorLenght->Name = L"EdgeSelectorLenght";
			this->EdgeSelectorLenght->Size = System::Drawing::Size(97, 17);
			this->EdgeSelectorLenght->TabIndex = 27;
			this->EdgeSelectorLenght->Text = L"Длина лезвия";
			this->EdgeSelectorLenght->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->EdgeSelectorLenght->UseVisualStyleBackColor = true;
			this->EdgeSelectorLenght->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EdgeSelectorAngle_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->RootLength);
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
			this->groupBox3->Location = System::Drawing::Point(29, 75);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(427, 105);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(196, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(105, 26);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Припуск на зажим,\r\nдо начала паза";
			// 
			// RootLength
			// 
			this->RootLength->Location = System::Drawing::Point(309, 19);
			this->RootLength->Name = L"RootLength";
			this->RootLength->Size = System::Drawing::Size(100, 20);
			this->RootLength->TabIndex = 7;
			this->RootLength->Text = L"7";
			this->toolTip1->SetToolTip(this->RootLength, resources->GetString(L"RootLength.ToolTip"));
			this->RootLength->TextChanged += gcnew System::EventHandler(this, &MyForm::RootLength_TextChanged);
			this->RootLength->Leave += gcnew System::EventHandler(this, &MyForm::Leave_RootLenght);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->ClearanceDivider);
			this->groupBox4->Controls->Add(this->label11);
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
			this->groupBox4->Location = System::Drawing::Point(484, 79);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(243, 290);
			this->groupBox4->TabIndex = 31;
			this->groupBox4->TabStop = false;
			// 
			// ClearanceDivider
			// 
			this->ClearanceDivider->Location = System::Drawing::Point(115, 30);
			this->ClearanceDivider->Name = L"ClearanceDivider";
			this->ClearanceDivider->Size = System::Drawing::Size(100, 20);
			this->ClearanceDivider->TabIndex = 33;
			this->ClearanceDivider->Text = L"3";
			this->toolTip1->SetToolTip(this->ClearanceDivider, resources->GetString(L"ClearanceDivider.ToolTip"));
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
			// SafeZ
			// 
			this->SafeZ->Enabled = false;
			this->SafeZ->Location = System::Drawing::Point(132, 238);
			this->SafeZ->Name = L"SafeZ";
			this->SafeZ->Size = System::Drawing::Size(100, 20);
			this->SafeZ->TabIndex = 49;
			this->SafeZ->Text = L"100";
			this->SafeZ->TextChanged += gcnew System::EventHandler(this, &MyForm::SafeZ_TextChanged);
			// 
			// SafeZBox
			// 
			this->SafeZBox->AutoSize = true;
			this->SafeZBox->Location = System::Drawing::Point(6, 240);
			this->SafeZBox->Name = L"SafeZBox";
			this->SafeZBox->Size = System::Drawing::Size(127, 17);
			this->SafeZBox->TabIndex = 48;
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
			this->HolderLenght->TabIndex = 47;
			this->HolderLenght->Text = L"50";
			this->toolTip1->SetToolTip(this->HolderLenght, L"для варианта \"короткий свисток\":\r\nдлина патрона 49 + толщина подкладки 1 мм = 50 "
				L"мм\r\nдля варианта \"цельная дудка\":\r\n49мм патрон + 20мм кулачки = 69 мм");
			this->HolderLenght->TextChanged += gcnew System::EventHandler(this, &MyForm::HolderLenght_TextChanged);
			// 
			// HolderLenghtBox
			// 
			this->HolderLenghtBox->AutoSize = true;
			this->HolderLenghtBox->Location = System::Drawing::Point(6, 214);
			this->HolderLenghtBox->Name = L"HolderLenghtBox";
			this->HolderLenghtBox->Size = System::Drawing::Size(103, 17);
			this->HolderLenghtBox->TabIndex = 46;
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
			this->WhiteSpeed->TabIndex = 45;
			this->WhiteSpeed->Text = L"15000";
			// 
			// WhiteSpeedBox
			// 
			this->WhiteSpeedBox->AutoSize = true;
			this->WhiteSpeedBox->Location = System::Drawing::Point(6, 188);
			this->WhiteSpeedBox->Name = L"WhiteSpeedBox";
			this->WhiteSpeedBox->Size = System::Drawing::Size(123, 17);
			this->WhiteSpeedBox->TabIndex = 44;
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
			this->WhiteFeed->TabIndex = 43;
			this->WhiteFeed->Text = L"700";
			this->WhiteFeed->TextChanged += gcnew System::EventHandler(this, &MyForm::WhiteFeed_TextChanged);
			// 
			// WhiteFeedBox
			// 
			this->WhiteFeedBox->AutoSize = true;
			this->WhiteFeedBox->Location = System::Drawing::Point(6, 162);
			this->WhiteFeedBox->Name = L"WhiteFeedBox";
			this->WhiteFeedBox->Size = System::Drawing::Size(113, 17);
			this->WhiteFeedBox->TabIndex = 42;
			this->WhiteFeedBox->Text = L"Чистовая подача";
			this->WhiteFeedBox->UseVisualStyleBackColor = true;
			this->WhiteFeedBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WhiteFeedBox_CheckedChanged);
			// 
			// Mill
			// 
			this->Mill->Location = System::Drawing::Point(7, 30);
			this->Mill->Name = L"Mill";
			this->Mill->Size = System::Drawing::Size(100, 20);
			this->Mill->TabIndex = 32;
			this->Mill->Text = L"4";
			// 
			// BlackSpeed
			// 
			this->BlackSpeed->Enabled = false;
			this->BlackSpeed->Location = System::Drawing::Point(132, 134);
			this->BlackSpeed->Name = L"BlackSpeed";
			this->BlackSpeed->Size = System::Drawing::Size(100, 20);
			this->BlackSpeed->TabIndex = 41;
			this->BlackSpeed->Text = L"10000";
			// 
			// BlackSpeedBox
			// 
			this->BlackSpeedBox->AutoSize = true;
			this->BlackSpeedBox->Location = System::Drawing::Point(6, 136);
			this->BlackSpeedBox->Name = L"BlackSpeedBox";
			this->BlackSpeedBox->Size = System::Drawing::Size(124, 17);
			this->BlackSpeedBox->TabIndex = 40;
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
			this->BlackFeed->TabIndex = 39;
			this->BlackFeed->Text = L"1000";
			this->BlackFeed->TextChanged += gcnew System::EventHandler(this, &MyForm::BlackFeed_TextChanged);
			// 
			// BlackFeedBox
			// 
			this->BlackFeedBox->AutoSize = true;
			this->BlackFeedBox->Location = System::Drawing::Point(6, 110);
			this->BlackFeedBox->Name = L"BlackFeedBox";
			this->BlackFeedBox->Size = System::Drawing::Size(114, 17);
			this->BlackFeedBox->TabIndex = 38;
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
			this->SideStep->TabIndex = 37;
			this->SideStep->Text = L"1.3";
			this->SideStep->TextChanged += gcnew System::EventHandler(this, &MyForm::SideStep_TextChanged);
			// 
			// SideStepBox
			// 
			this->SideStepBox->AutoSize = true;
			this->SideStepBox->Location = System::Drawing::Point(6, 84);
			this->SideStepBox->Name = L"SideStepBox";
			this->SideStepBox->Size = System::Drawing::Size(109, 17);
			this->SideStepBox->TabIndex = 36;
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
			this->DeepStep->TabIndex = 35;
			this->DeepStep->Text = L"0.5";
			this->DeepStep->TextChanged += gcnew System::EventHandler(this, &MyForm::DeepStep_TextChanged);
			// 
			// DeepStepBox
			// 
			this->DeepStepBox->AutoSize = true;
			this->DeepStepBox->Location = System::Drawing::Point(6, 58);
			this->DeepStepBox->Name = L"DeepStepBox";
			this->DeepStepBox->Size = System::Drawing::Size(111, 17);
			this->DeepStepBox->TabIndex = 34;
			this->DeepStepBox->Text = L"Глубина прохода";
			this->DeepStepBox->UseVisualStyleBackColor = true;
			this->DeepStepBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DeepStepBox_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Паз";
			// 
			// PazParallel
			// 
			this->PazParallel->AutoSize = true;
			this->PazParallel->Checked = true;
			this->PazParallel->Location = System::Drawing::Point(42, 14);
			this->PazParallel->Name = L"PazParallel";
			this->PazParallel->Size = System::Drawing::Size(65, 17);
			this->PazParallel->TabIndex = 23;
			this->PazParallel->TabStop = true;
			this->PazParallel->Text = L"Прямой";
			this->toolTip1->SetToolTip(this->PazParallel, L"Паз прямой, с параллельными вертикальными стенками");
			this->PazParallel->UseVisualStyleBackColor = true;
			// 
			// PazAngular
			// 
			this->PazAngular->AutoSize = true;
			this->PazAngular->Location = System::Drawing::Point(116, 12);
			this->PazAngular->Name = L"PazAngular";
			this->PazAngular->Size = System::Drawing::Size(68, 17);
			this->PazAngular->TabIndex = 24;
			this->PazAngular->Text = L"Угловой";
			this->toolTip1->SetToolTip(this->PazAngular, L"Стенки виндвея под углом,\r\nобразуют сектор круга");
			this->PazAngular->UseVisualStyleBackColor = true;
			// 
			// Calc
			// 
			this->Calc->Location = System::Drawing::Point(29, 494);
			this->Calc->Name = L"Calc";
			this->Calc->Size = System::Drawing::Size(216, 24);
			this->Calc->TabIndex = 50;
			this->Calc->Text = L"Рассчитать";
			this->Calc->UseVisualStyleBackColor = true;
			this->Calc->Click += gcnew System::EventHandler(this, &MyForm::Calc_Click);
			// 
			// CodeBox
			// 
			this->CodeBox->Location = System::Drawing::Point(257, 264);
			this->CodeBox->Name = L"CodeBox";
			this->CodeBox->Size = System::Drawing::Size(221, 203);
			this->CodeBox->TabIndex = 51;
			this->CodeBox->Text = L"";
			// 
			// FileName
			// 
			this->FileName->Location = System::Drawing::Point(484, 393);
			this->FileName->Name = L"FileName";
			this->FileName->Size = System::Drawing::Size(252, 20);
			this->FileName->TabIndex = 52;
			// 
			// Save
			// 
			this->Save->Location = System::Drawing::Point(650, 419);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(86, 23);
			this->Save->TabIndex = 54;
			this->Save->Text = L"Переписать";
			this->Save->UseVisualStyleBackColor = true;
			this->Save->Click += gcnew System::EventHandler(this, &MyForm::Save_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(484, 377);
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
			this->groupBox5->Location = System::Drawing::Point(29, 259);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(216, 52);
			this->groupBox5->TabIndex = 19;
			this->groupBox5->TabStop = false;
			// 
			// CalcSelectrorBottom
			// 
			this->CalcSelectrorBottom->AutoSize = true;
			this->CalcSelectrorBottom->Location = System::Drawing::Point(116, 29);
			this->CalcSelectrorBottom->Name = L"CalcSelectrorBottom";
			this->CalcSelectrorBottom->Size = System::Drawing::Size(65, 17);
			this->CalcSelectrorBottom->TabIndex = 21;
			this->CalcSelectrorBottom->TabStop = true;
			this->CalcSelectrorBottom->Text = L"Нижней";
			this->toolTip1->SetToolTip(this->CalcSelectrorBottom, L"расчет угла створа по внутреннему диаметру (если задана ширина)\r\nили обратно, есл"
				L"и задан угол, но ширина не известна\r\nрасчет ширины паза в зависимости от угла по"
				L" внутреннему диаметру\r\n");
			this->CalcSelectrorBottom->UseVisualStyleBackColor = true;
			this->CalcSelectrorBottom->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// CalcSelectrorTop
			// 
			this->CalcSelectrorTop->AutoSize = true;
			this->CalcSelectrorTop->Checked = true;
			this->CalcSelectrorTop->Location = System::Drawing::Point(43, 29);
			this->CalcSelectrorTop->Name = L"CalcSelectrorTop";
			this->CalcSelectrorTop->Size = System::Drawing::Size(67, 17);
			this->CalcSelectrorTop->TabIndex = 20;
			this->CalcSelectrorTop->TabStop = true;
			this->CalcSelectrorTop->Text = L"Верхней";
			this->toolTip1->SetToolTip(this->CalcSelectrorTop, L"расчет угла створа по верхнему диаметру\r\nили обратно, если задан угол\r\nрасчет шир"
				L"ины паза в зависимости от угла по верхнему диаметру");
			this->CalcSelectrorTop->UseVisualStyleBackColor = true;
			this->CalcSelectrorTop->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(163, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Расчет угла створа от кромки:";
			// 
			// Save_New
			// 
			this->Save_New->Location = System::Drawing::Point(558, 420);
			this->Save_New->Name = L"Save_New";
			this->Save_New->Size = System::Drawing::Size(86, 23);
			this->Save_New->TabIndex = 53;
			this->Save_New->Text = L"Сохранить";
			this->Save_New->UseVisualStyleBackColor = true;
			this->Save_New->Click += gcnew System::EventHandler(this, &MyForm::Save_New_Click);
			// 
			// shortWhistle
			// 
			this->shortWhistle->AutoSize = true;
			this->shortWhistle->Checked = true;
			this->shortWhistle->Location = System::Drawing::Point(12, 18);
			this->shortWhistle->Name = L"shortWhistle";
			this->shortWhistle->Size = System::Drawing::Size(117, 17);
			this->shortWhistle->TabIndex = 1;
			this->shortWhistle->TabStop = true;
			this->shortWhistle->Text = L"Короткий свисток";
			this->toolTip1->SetToolTip(this->shortWhistle, L"Отдельный свисток, зажатый за место соединения с основным телом.\r\n");
			this->shortWhistle->UseVisualStyleBackColor = true;
			this->shortWhistle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::shortWhistle_CheckedChanged);
			// 
			// longWhistle
			// 
			this->longWhistle->AutoSize = true;
			this->longWhistle->Location = System::Drawing::Point(222, 17);
			this->longWhistle->Name = L"longWhistle";
			this->longWhistle->Size = System::Drawing::Size(101, 17);
			this->longWhistle->TabIndex = 2;
			this->longWhistle->Text = L"Цельная дудка";
			this->toolTip1->SetToolTip(this->longWhistle, L"Цельная дудка, либо свисток, но зажатый в патроне за вдувную часть со стороны вин"
				L"двея\r\n(с припуском на зажим)");
			this->longWhistle->UseVisualStyleBackColor = true;
			this->longWhistle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::longWhistle_CheckedChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->OnStik);
			this->groupBox6->Controls->Add(this->LockedPaz);
			this->groupBox6->Controls->Add(this->FlatType);
			this->groupBox6->Controls->Add(this->shortWhistle);
			this->groupBox6->Controls->Add(this->longWhistle);
			this->groupBox6->Location = System::Drawing::Point(29, 20);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(526, 49);
			this->groupBox6->TabIndex = 0;
			this->groupBox6->TabStop = false;
			// 
			// OnStik
			// 
			this->OnStik->AutoSize = true;
			this->OnStik->Checked = true;
			this->OnStik->CheckState = System::Windows::Forms::CheckState::Checked;
			this->OnStik->Location = System::Drawing::Point(131, 17);
			this->OnStik->Name = L"OnStik";
			this->OnStik->Size = System::Drawing::Size(85, 17);
			this->OnStik->TabIndex = 5;
			this->OnStik->Text = L"На оправке";
			this->toolTip1->SetToolTip(this->OnStik, L"Для свирелей и сопилок");
			this->OnStik->UseVisualStyleBackColor = true;
			// 
			// LockedPaz
			// 
			this->LockedPaz->AutoSize = true;
			this->LockedPaz->Checked = true;
			this->LockedPaz->CheckState = System::Windows::Forms::CheckState::Checked;
			this->LockedPaz->Location = System::Drawing::Point(425, 19);
			this->LockedPaz->Name = L"LockedPaz";
			this->LockedPaz->Size = System::Drawing::Size(99, 17);
			this->LockedPaz->TabIndex = 4;
			this->LockedPaz->Text = L"Закрытый паз";
			this->toolTip1->SetToolTip(this->LockedPaz, L"Для свирелей и сопилок");
			this->LockedPaz->UseVisualStyleBackColor = true;
			this->LockedPaz->CheckedChanged += gcnew System::EventHandler(this, &MyForm::LockedPaz_CheckedChanged_1);
			// 
			// FlatType
			// 
			this->FlatType->AutoSize = true;
			this->FlatType->Enabled = false;
			this->FlatType->Location = System::Drawing::Point(329, 19);
			this->FlatType->Name = L"FlatType";
			this->FlatType->Size = System::Drawing::Size(90, 17);
			this->FlatType->TabIndex = 3;
			this->FlatType->Text = L"Плоский зуб";
			this->toolTip1->SetToolTip(this->FlatType, L"Для свирелей и сопилок");
			this->FlatType->UseVisualStyleBackColor = true;
			this->FlatType->Visible = false;
			this->FlatType->CheckedChanged += gcnew System::EventHandler(this, &MyForm::FlatType_CheckedChanged);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->PazParallel);
			this->groupBox8->Controls->Add(this->PazAngular);
			this->groupBox8->Location = System::Drawing::Point(29, 317);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(216, 43);
			this->groupBox8->TabIndex = 22;
			this->groupBox8->TabStop = false;
			// 
			// toolTip1
			// 
			this->toolTip1->IsBalloon = true;
			this->toolTip1->ShowAlways = true;
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Подсказка";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->FileMenu });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(759, 24);
			this->menuStrip1->TabIndex = 55;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FileMenu
			// 
			this->FileMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->LoadFile, this->SaveFileMenu,
					this->SaveFileAsMenu
			});
			this->FileMenu->Name = L"FileMenu";
			this->FileMenu->Size = System::Drawing::Size(48, 20);
			this->FileMenu->Text = L"Файл";
			// 
			// LoadFile
			// 
			this->LoadFile->Name = L"LoadFile";
			this->LoadFile->Size = System::Drawing::Size(166, 22);
			this->LoadFile->Text = L"Загрузить";
			this->LoadFile->Click += gcnew System::EventHandler(this, &MyForm::LoadFile_Click);
			// 
			// SaveFileMenu
			// 
			this->SaveFileMenu->Enabled = false;
			this->SaveFileMenu->Name = L"SaveFileMenu";
			this->SaveFileMenu->Size = System::Drawing::Size(166, 22);
			this->SaveFileMenu->Text = L"Сохранить";
			this->SaveFileMenu->Click += gcnew System::EventHandler(this, &MyForm::SaveFileMenu_Click);
			// 
			// SaveFileAsMenu
			// 
			this->SaveFileAsMenu->Name = L"SaveFileAsMenu";
			this->SaveFileAsMenu->Size = System::Drawing::Size(166, 22);
			this->SaveFileAsMenu->Text = L"Сохранить как ...";
			this->SaveFileAsMenu->Click += gcnew System::EventHandler(this, &MyForm::SaveFileAsMenu_Click);
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(759, 0);
			this->toolStripContainer1->Location = System::Drawing::Point(-2, 1);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(759, 22);
			this->toolStripContainer1->TabIndex = 56;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			// 
			// ProjectFileName
			// 
			this->ProjectFileName->Enabled = false;
			this->ProjectFileName->Location = System::Drawing::Point(274, 272);
			this->ProjectFileName->Name = L"ProjectFileName";
			this->ProjectFileName->Size = System::Drawing::Size(111, 20);
			this->ProjectFileName->TabIndex = 57;
			this->ProjectFileName->Visible = false;
			this->ProjectFileName->TextChanged += gcnew System::EventHandler(this, &MyForm::ProjectFileName_TextChanged);
			// 
			// ParamsBox
			// 
			this->ParamsBox->Enabled = false;
			this->ParamsBox->Location = System::Drawing::Point(274, 288);
			this->ParamsBox->Name = L"ParamsBox";
			this->ParamsBox->Size = System::Drawing::Size(150, 133);
			this->ParamsBox->TabIndex = 58;
			this->ParamsBox->Text = L"";
			this->ParamsBox->Visible = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 527);
			this->Controls->Add(this->toolStripContainer1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox6);
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
			this->Controls->Add(this->ParamsBox);
			this->Controls->Add(this->ProjectFileName);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Параметрический 5-осевой программатор пазов свистков special for Alexander Karava"
				L"ev workshop";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Parse(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			InD = System::Convert::ToDouble("0" + this->InternalDiam->Text);
			ExD = System::Convert::ToDouble("0" + this->ExtermalDiam->Text);
			OutD = System::Convert::ToDouble("0" + this->OutsideDiam->Text);
			HoldedLen = System::Convert::ToDouble("0" + this->RootLength->Text);
			ExtLen = System::Convert::ToDouble("0" + this->ExternalLength->Text);
			TotLen = System::Convert::ToDouble("0" + this->TotalLength->Text);
			PazS = System::Convert::ToDouble("0" + this->PazSize->Text);
			PazA = System::Convert::ToDouble("0" + this->PazAngle->Text);
			PazLen = System::Convert::ToDouble("0" + this->PazLenght->Text);
			EdgeA = System::Convert::ToDouble("0" + this->EdgeAngle->Text);
			EdgeLen = System::Convert::ToDouble("0" + this->EdgeLenght->Text);
			EdgeB = System::Convert::ToDouble("0" + this->EdgeBold->Text);
			MillD = System::Convert::ToInt16("0" + this->Mill->Text);
			ClearSts = System::Convert::ToInt16("0" + this->ClearanceDivider->Text);
			DeepSt = System::Convert::ToDouble("0" + this->DeepStep->Text);
			SideSt = System::Convert::ToDouble("0" + this->SideStep->Text);
			BFeed = System::Convert::ToDouble("0" + this->BlackFeed->Text);
			BSpeed = System::Convert::ToInt32("0" + this->BlackSpeed->Text);
			WFeed = System::Convert::ToDouble("0" + this->WhiteFeed->Text);
			WSpeed = System::Convert::ToInt32("0" + this->WhiteSpeed->Text);
			HoldLenght = System::Convert::ToDouble("0" + this->HolderLenght->Text);
			TopZ = System::Convert::ToDouble("0" + this->SafeZ->Text);
			//bools, 5 items
			PazForm = PazParallel->Checked;
			EdgeType = EdgeSelectorAngle->Checked;
		}
		catch (...)
		{

		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->InternalDiam->Text = this->InternalDiam->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->ExtermalDiam->Text = this->ExtermalDiam->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->OutsideDiam->Text = this->OutsideDiam->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->RootLength->Text = this->RootLength->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->ExternalLength->Text = this->ExternalLength->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->TotalLength->Text = this->TotalLength->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->PazSize->Text = this->PazSize->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->PazAngle->Text = this->PazAngle->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->PazLenght->Text = this->PazLenght->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->EdgeAngle->Text = this->EdgeAngle->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->EdgeLenght->Text= this->EdgeLenght->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->EdgeBold->Text = this->EdgeBold->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->DeepStep->Text = this->DeepStep->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->SideStep->Text = this->SideStep->Text->Replace('.', decPoint)->Replace(',', decPoint);

		this->PazAngle->Text = (this->CalcSelectrorBottom->Checked)?
			(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->InternalDiam->Text))).ToString("F")
			:
			(180 * 2 / M_PI * asin(System::Convert::ToDouble("0" + this->PazSize->Text) / System::Convert::ToDouble("0" + this->OutsideDiam->Text))).ToString("F")
			;
		this->EdgeLenght->Text = (1 / tan(System::Convert::ToDouble("0" + this->EdgeAngle->Text) * M_PI / 180) * (System::Convert::ToDouble("0" + this->OutsideDiam->Text) - 2 * System::Convert::ToDouble("0" + this->EdgeBold->Text) - System::Convert::ToDouble("0" + this->InternalDiam->Text))/2).ToString("F");
		MyForm_Parse(sender, e);
	}

	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void HeaderBlock();
	private: System::Void FooterBlock();
	private: System::Void VerticalRectangle(float StartZ, float TargetZ, float HalfWide, float StartPoint, float Edge1, float Edge2);
	private: System::Void AngularRectangle(float StartZ, float TargetZ, float HalfAngle, float StartPoint, float Edge1, float Edge2);
	private: System::Void ClearAngularRectangle(float StartZ, float TargetZ, float Rad, float HalfAngle, float StartPoint, float Edge1, float Edge2);
	private: System::Void Calc_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Calc_Long(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Calc_Short(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Save_New_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LoadFile_Click(System::Object^ sender, System::EventArgs^ e); 
	private: System::Void SaveFileAsMenu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SaveFileMenu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SaveParams(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LoadParams(System::Object^ sender, System::EventArgs^ e);
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
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->PazSize->Text = this->PazSize->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e);
		if (this->PazAngle->Enabled == false)
			this->PazAngle->Text = (this->CalcSelectrorBottom->Checked) ?
			(180 * 2 / M_PI * asin(PazS / InD)).ToString("F")
			:
			(180 * 2 / M_PI * asin(PazS / OutD)).ToString("F")
			;
		MyForm_Parse(sender, e);
		this->PazSize->SelectionStart = this->PazSize->Text->Length;
	}

	private: System::Void PazAngle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->PazAngle->Text = this->PazAngle->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e);
		if (this->PazSize->Enabled == false)
			this->PazSize->Text = (this->CalcSelectrorTop->Checked) ?
			(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->OutsideDiam->Text)).ToString("F")
			:
			(sin(System::Convert::ToDouble("0" + this->PazAngle->Text) * M_PI / 180 / 2) * System::Convert::ToDouble("0" + this->InternalDiam->Text)).ToString("F")
			;
		MyForm_Parse(sender, e);
		this->PazAngle->SelectionStart = this->PazAngle->Text->Length;
	}
	private: System::Void EdgeAngle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->EdgeAngle->Text = this->EdgeAngle->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e); 
		if (this->EdgeLenght->Enabled == false)
			this->EdgeLenght->Text = (1 / tan(EdgeA * M_PI / 180) * (OutD - 2 * EdgeB - InD) / 2).ToString("F");
		MyForm_Parse(sender, e);
		this->EdgeAngle->SelectionStart = this->EdgeAngle->Text->Length;
	}
	private: System::Void EdgeLenght_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->EdgeLenght->Text = this->EdgeLenght->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e);
		if (this->EdgeAngle->Enabled == false)
			this->EdgeAngle->Text = (180 / M_PI * atan(1 / EdgeLen / 2 * (OutD - 2 * EdgeB - InD))).ToString("F");
		MyForm_Parse(sender, e);
		this->EdgeLenght->SelectionStart = this->EdgeLenght->Text->Length;
	}
	private: System::Void InternalDiam_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->InternalDiam->Text = this->InternalDiam->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e);
		if (this->PazAngle->Enabled == false)
			this->PazAngle->Text = (this->CalcSelectrorBottom->Checked) ?
			(180 * 2 / M_PI * asin(PazS / InD)).ToString("F")
			:
			(180 * 2 / M_PI * asin(PazS / OutD)).ToString("F")
			;
		if (this->PazSize->Enabled == false)
			this->PazSize->Text = (this->CalcSelectrorTop->Checked) ?
			(sin(PazA * M_PI / 180 / 2) * OutD).ToString("F")
			:
			(sin(PazA * M_PI / 180 / 2) * InD).ToString("F")
			;
		if (this->EdgeAngle->Enabled == false)
			this->EdgeAngle->Text = (180 / M_PI * atan(1 / EdgeLen / 2 * (OutD - 2 * EdgeB - InD))).ToString("F");
		if (this->EdgeLenght->Enabled == false)
			this->EdgeLenght->Text = (1 / tan(EdgeA * M_PI / 180) * (OutD - 2 * EdgeB - InD) / 2).ToString("F");
		MyForm_Parse(sender, e);
		this->InternalDiam->SelectionStart = this->InternalDiam->Text->Length;
	}
	private: System::Void OutsideDiam_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->OutsideDiam->Text = this->OutsideDiam->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e);
		if (this->PazAngle->Enabled == false)
			this->PazAngle->Text = (this->CalcSelectrorBottom->Checked) ?
			(180 * 2 / M_PI * asin(PazS / InD)).ToString("F")
			:
			(180 * 2 / M_PI * asin(PazS / OutD)).ToString("F")
			;
		if (this->PazSize->Enabled == false)
			this->PazSize->Text = (this->CalcSelectrorTop->Checked) ?
			(sin(PazA * M_PI / 180 / 2) * OutD).ToString("F")
			:
			(sin(PazA * M_PI / 180 / 2) * InD).ToString("F")
			;
		if (this->EdgeAngle->Enabled == false)
			this->EdgeAngle->Text = (180 / M_PI * atan(1 / EdgeLen * (OutD - 2 * EdgeB - InD))).ToString("F");
		if (this->EdgeLenght->Enabled == false)
			this->EdgeLenght->Text = (1 / tan(EdgeA * M_PI / 180) * (OutD - 2 * EdgeB - InD) / 2).ToString("F");
		MyForm_Parse(sender, e); 
		this->OutsideDiam->SelectionStart = this->OutsideDiam->Text->Length;
	}
	private: System::Void DeepStepBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->DeepStep->Enabled = this->DeepStepBox->Checked;
		if (!this->DeepStepBox->Checked) this->DeepStep->Text = (((float)MillD / 10)).ToString("F");
		MyForm_Parse(sender, e);
	}
	private: System::Void SideStepBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->SideStep->Enabled = this->SideStepBox->Checked;
		if (!this->SideStepBox->Checked) this->SideStep->Text = (MillD * 0.35).ToString("F");
		MyForm_Parse(sender, e);
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->BlackFeed->Enabled = this->BlackFeedBox->Checked;
		if (!this->BlackFeedBox->Checked) this->BlackFeed->Text = "500";
		MyForm_Parse(sender, e);
	}
	private: System::Void BlackSpeedBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->BlackSpeed->Enabled = this->BlackSpeedBox->Checked;
		if (!this->BlackSpeedBox->Checked) this->BlackSpeed->Text = "10000";
		MyForm_Parse(sender, e);
	}
	private: System::Void WhiteFeedBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->WhiteFeed->Enabled = this->WhiteFeedBox->Checked;
		if (!this->WhiteFeedBox->Checked) this->WhiteFeed->Text = "500";
		MyForm_Parse(sender, e);
	}
	private: System::Void WhiteSpeedBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->WhiteSpeed->Enabled = this->WhiteSpeedBox->Checked;
		if (!this->WhiteSpeedBox->Checked) this->WhiteSpeed->Text = "10000";
		MyForm_Parse(sender, e);
	}
	private: System::Void HolderLenghtBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->HolderLenght->Enabled = this->HolderLenghtBox->Checked;
		if (!this->HolderLenghtBox->Checked) this->HolderLenght->Text = "50";
		MyForm_Parse(sender, e);
	}
	private: System::Void SafeZBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->SafeZ->Enabled = this->SafeZBox->Checked;
		if (!this->SafeZBox->Checked) this->SafeZ->Text = "100";
		MyForm_Parse(sender, e);
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->PazAngle->Enabled == false)
		this->PazAngle->Text = (this->CalcSelectrorBottom->Checked) ?
			(180 * 2 / M_PI * asin(PazS / InD)).ToString("F")
		:
			(180 * 2 / M_PI * asin(PazS / OutD)).ToString("F")
		;
		if (this->PazSize->Enabled == false)
			this->PazSize->Text = (this->CalcSelectrorTop->Checked) ?
			(sin(PazA * M_PI / 180 / 2) * OutD).ToString("F")
			:
			(sin(PazA * M_PI / 180 / 2) * InD).ToString("F")
			;
		MyForm_Parse(sender, e);
	}
	private: System::Void ExtermalDiam_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	std::cout.imbue(std::locale(""));
	char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
	this->ExtermalDiam->Text = this->ExtermalDiam->Text->Replace('.', decPoint)->Replace(',', decPoint); 
	MyForm_Parse(sender, e);
	this->ExtermalDiam->SelectionStart = this->ExtermalDiam->Text->Length;
}
	private: System::Void longWhistle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->longWhistle->Checked) {
		this->label12->Visible = true;
		this->RootLength->Visible = true;
		this->RootLength->Enabled = true;
		this->label6->Visible = false;
		this->TotalLength->Visible = false;
		this->TotalLength->Enabled = false;
		this->HolderLenght->Text = System::Convert::ToString(69);
		this->FlatType->Visible = true;
		this->FlatType->Enabled = true;
		this->LockedPaz->Visible = false;
		this->LockedPaz->Enabled = false;
		this->OnStik->Visible = false;
		this->OnStik->Enabled = false;
	}
	else {
		if (this->LockedPaz->Checked) {
			this->label12->Visible = true;
			this->RootLength->Visible = true;
			this->RootLength->Enabled = true;
		}
		else {
			this->label12->Visible = false;
			this->RootLength->Visible = false;
			this->RootLength->Enabled = false;
		}
		this->OnStik->Visible = true;
		this->OnStik->Enabled = true;
		this->label6->Visible = true;
		this->TotalLength->Visible = true;
		this->TotalLength->Enabled = true;
		this->HolderLenght->Text = System::Convert::ToString(50);
		if (this->OnStik->Checked)
		{ this->HolderLenght->Text = System::Convert::ToString(69); }
		this->FlatType->Visible = false;
		this->FlatType->Enabled = false;
		this->LockedPaz->Visible = true;
		this->LockedPaz->Enabled = true;
	}

}
	private: System::Void pazFull_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->pazFull->Checked) {
		this->PazLenght->Text = System::Convert::ToString(PazLen + ExtLen);
	}
	else {
		this->PazLenght->Text = System::Convert::ToString(PazLen - ExtLen);
	}
	MyForm_Parse(sender, e);
}
	private: System::Void RootLength_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->RootLength->Text = this->RootLength->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e); 
		this->RootLength->SelectionStart = this->RootLength->Text->Length;
	}
	private: System::Void Leave_RootLenght(System::Object^ sender, System::EventArgs^ e) {
		MyForm_Parse(sender, e);
		if (HoldedLen < 7) {
			HoldedLen = 7;
			RootLength->Text = (7).ToString();
		}
	}
	private: System::Void ExternalLength_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	std::cout.imbue(std::locale(""));
	char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
	this->ExternalLength->Text = this->ExternalLength->Text->Replace('.', decPoint)->Replace(',', decPoint);
	MyForm_Parse(sender, e);
	this->ExternalLength->SelectionStart = this->ExternalLength->Text->Length;
}
	private: System::Void TotalLength_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	std::cout.imbue(std::locale(""));
	char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
	this->TotalLength->Text = this->TotalLength->Text->Replace('.', decPoint)->Replace(',', decPoint);
	MyForm_Parse(sender, e); 
	this->TotalLength->SelectionStart = this->TotalLength->Text->Length;
}
	private: System::Void PazLenght_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	std::cout.imbue(std::locale(""));
	char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
	this->PazLenght->Text = this->PazLenght->Text->Replace('.', decPoint)->Replace(',', decPoint);
	MyForm_Parse(sender, e); 
	this->PazLenght->SelectionStart = this->PazLenght->Text->Length;
}
	private: System::Void EdgeBold_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->EdgeBold->Text = this->EdgeBold->Text->Replace('.', decPoint)->Replace(',', decPoint);
		this->EdgeBold->SelectionStart = this->EdgeBold->Text->Length;
		if (this->EdgeAngle->Enabled) {
			this->EdgeAngle_TextChanged(sender, e);
		}
		else {
			this->EdgeLenght_TextChanged(sender, e);
		}
	}
	private: System::Void DeepStep_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->DeepStep->Text = this->DeepStep->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e);
		this->DeepStep->SelectionStart = this->DeepStep->Text->Length;
	}
	private: System::Void SideStep_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->SideStep->Text = this->SideStep->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e); 
		this->SideStep->SelectionStart = this->SideStep->Text->Length;
	}
	private: System::Void BlackFeed_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->BlackFeed->Text = this->BlackFeed->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e); 
		this->BlackFeed->SelectionStart = this->BlackFeed->Text->Length;
	}
	private: System::Void WhiteFeed_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->WhiteFeed->Text = this->WhiteFeed->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e); 
		this->WhiteFeed->SelectionStart = this->WhiteFeed->Text->Length;
	}
	private: System::Void HolderLenght_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->HolderLenght->Text = this->HolderLenght->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e); 
		this->HolderLenght->SelectionStart = this->HolderLenght->Text->Length;
	}
	private: System::Void SafeZ_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::cout.imbue(std::locale(""));
		char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
		this->SafeZ->Text = this->SafeZ->Text->Replace('.', decPoint)->Replace(',', decPoint);
		MyForm_Parse(sender, e); 
		this->SafeZ->SelectionStart = this->SafeZ->Text->Length;
	}

private: System::Void ProjectFileName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->ProjectFileName->Text != "") {
		this->SaveFileMenu->Enabled = true;
	}
	else {
		this->SaveFileMenu->Enabled = false;
	}

}
private: System::Void FlatType_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (FlatType->Checked) {
		PazSelectorAngle->Visible = false;
		PazSelectorAngle->Enabled = false;
		PazAngle->Visible = false;
		PazAngle->Enabled = false;
		groupBox5->Visible = false;
		groupBox5->Enabled = false;
		PazAngular->Enabled = false;
		PazAngular->Visible = false;
		PazParallel->Checked = true;
	}
	else {

		PazSelectorAngle->Visible = true;
		PazSelectorAngle->Enabled = true;
		PazAngle->Visible = true;
		PazAngle->Enabled = true;
		groupBox5->Visible = true;
		groupBox5->Enabled = true;
		PazAngular->Enabled = true;
		PazAngular->Visible = true;
	}
}
private: System::Void LockedPaz_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->LockedPaz->Checked) {
		this->RootLength->Visible = true;
		this->RootLength->Enabled = true;
		this->label12->Visible = true;
		this->label12->Enabled = true;
	}
	else {
		this->RootLength->Visible = false;
		this->RootLength->Enabled = false;
		this->label12->Visible = false;
		this->label12->Enabled = false;
	}
}
private: System::Void LockedPaz_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->LockedPaz->Checked) {
		this->RootLength->Visible = true;
		this->RootLength->Enabled = true;
		this->label12->Visible = true;
		this->label12->Enabled = true;
	}
	else {
		this->RootLength->Visible = false;
		this->RootLength->Enabled = false;
		this->label12->Visible = false;
		this->label12->Enabled = false;
	}
}
private: System::Void shortWhistle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OnStik_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->OnStik->Checked) { 
		this->HolderLenght->Text = System::Convert::ToString(69);
} else { this->HolderLenght->Text = System::Convert::ToString(50); }
}
};
}