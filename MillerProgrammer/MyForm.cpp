#define _USE_MATH_DEFINES

#include "MyForm.h"
#include <Windows.h>
#include <cmath>
#include <locale>
#include <string>
#include <iostream>

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace MillerProgrammer;
[System::STAThreadAttribute()]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
inline System::Void MillerProgrammer::MyForm::SaveParams(System::Object^ sender, System::EventArgs^ e) {
	this->ParamsBox->Clear();
	this->ParamsBox->Text = (this->shortWhistle->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->FlatType->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->InternalDiam->Text) + "\r\n";
	this->ParamsBox->Text += (this->ExtermalDiam->Text) + "\r\n";
	this->ParamsBox->Text += (this->OutsideDiam->Text) + "\r\n";
	this->ParamsBox->Text += (this->RootLength->Text) + "\r\n";
	this->ParamsBox->Text += (this->ExternalLength->Text) + "\r\n";
	this->ParamsBox->Text += (this->TotalLength->Text) + "\r\n";
	this->ParamsBox->Text += (this->TotalLength->Text) + "\r\n";
	this->ParamsBox->Text += (this->PazSelectorSize->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->PazSize->Text) + "\r\n";
	this->ParamsBox->Text += (this->PazAngle->Text) + "\r\n";
	this->ParamsBox->Text += (this->pazFull->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->PazLenght->Text) + "\r\n";
	this->ParamsBox->Text += (this->CalcSelectrorTop->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->PazParallel->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->EdgeSelectorAngle->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->EdgeAngle->Text) + "\r\n";
	this->ParamsBox->Text += (this->EdgeLenght->Text) + "\r\n";
	this->ParamsBox->Text += (this->EdgeBold->Text) + "\r\n";
	this->ParamsBox->Text += (this->Mill->Text) + "\r\n";
	this->ParamsBox->Text += (this->ClearanceDivider->Text) + "\r\n";
	this->ParamsBox->Text += (this->DeepStepBox->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->DeepStep->Text) + "\r\n";
	this->ParamsBox->Text += (this->SideStepBox->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->SideStep->Text) + "\r\n";
	this->ParamsBox->Text += (this->BlackFeedBox->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->BlackFeed->Text) + "\r\n";
	this->ParamsBox->Text += (this->BlackSpeedBox->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->BlackSpeed->Text) + "\r\n";
	this->ParamsBox->Text += (this->WhiteFeedBox->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->WhiteFeed->Text) + "\r\n";
	this->ParamsBox->Text += (this->WhiteSpeedBox->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->WhiteSpeed->Text) + "\r\n";
	this->ParamsBox->Text += (this->HolderLenghtBox->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->HolderLenght->Text) + "\r\n";
	this->ParamsBox->Text += (this->SafeZBox->Checked).ToString() + "\r\n";
	this->ParamsBox->Text += (this->SafeZ->Text) + "\r\n";
}
inline System::Void MillerProgrammer::MyForm::LoadParams(System::Object^ sender, System::EventArgs^ e) {
	this->shortWhistle->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[0]); 
	this->FlatType->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[1]);
	this->InternalDiam->Text = this->ParamsBox->Lines[2];
	this->ExtermalDiam->Text = this->ParamsBox->Lines[3];
	this->OutsideDiam->Text = this->ParamsBox->Lines[4];
	this->RootLength->Text = this->ParamsBox->Lines[5];
	this->ExternalLength->Text = this->ParamsBox->Lines[6];
	this->TotalLength->Text = this->ParamsBox->Lines[7];
	this->PazSelectorSize->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[8]);
	this->PazSize->Text = this->ParamsBox->Lines[9];
	this->PazAngle->Text = this->ParamsBox->Lines[10];
	this->pazFull->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[11]);
	this->PazLenght->Text = this->ParamsBox->Lines[12];
	this->CalcSelectrorTop->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[13]);
	this->PazParallel->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[14]);
	this->EdgeSelectorAngle->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[15]);
	this->EdgeAngle->Text = this->ParamsBox->Lines[16];
	this->EdgeLenght->Text = this->ParamsBox->Lines[17];
	this->EdgeBold->Text = this->ParamsBox->Lines[18];
	this->Mill->Text = this->ParamsBox->Lines[19];
	this->ClearanceDivider->Text = this->ParamsBox->Lines[20];
	this->DeepStepBox->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[21]);
	this->DeepStep->Text = this->ParamsBox->Lines[22];
	this->SideStepBox->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[23]);
	this->SideStep->Text = this->ParamsBox->Lines[24];
	this->BlackFeedBox->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[25]);
	this->BlackFeed->Text = this->ParamsBox->Lines[26];
	this->BlackSpeedBox->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[27]);
	this->BlackSpeed->Text = this->ParamsBox->Lines[28];
	this->WhiteFeedBox->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[29]);
	this->WhiteFeed->Text = this->ParamsBox->Lines[30];
	this->WhiteSpeedBox->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[31]);
	this->WhiteSpeed->Text = this->ParamsBox->Lines[32];
	this->HolderLenghtBox->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[33]);
	this->HolderLenght->Text = this->ParamsBox->Lines[34];
	this->SafeZBox->Checked = System::Convert::ToBoolean(this->ParamsBox->Lines[33]);
	this->SafeZ->Text = this->ParamsBox->Lines[34];
	this->MyForm_Parse(sender, e);
}
inline System::Void MillerProgrammer::MyForm::Save_New_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Program Files|*.tap";   // чтобы можно было сохранить только с разрешением txt (если не нужно - убери)
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //проверка, если закрыто по нажатию кнопки ОК
		this->FileName->Text = saveFileDialog1->FileName;
		StreamWriter^ sw = gcnew StreamWriter(this->FileName->Text);
		sw->Write(this->CodeBox->Text);
		sw->Close();
	}
}
inline System::Void MillerProgrammer::MyForm::LoadFile_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->Filter = "Project Files|*.wis";   // чтобы можно было сохранить только с разрешением txt (если не нужно - убери)
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //проверка, если закрыто по нажатию кнопки ОК
		this->ProjectFileName->Text = openFileDialog1->FileName;
		StreamReader^ sr = gcnew StreamReader(this->ProjectFileName->Text);
		ParamsBox->Text=sr->ReadToEnd();
		sr->Close();
		LoadParams(sender, e);
	}
}
inline System::Void MillerProgrammer::MyForm::SaveFileAsMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog2->Filter = "Project Files|*.wis";   // чтобы можно было сохранить только с разрешением txt (если не нужно - убери)
	saveFileDialog2->FilterIndex = 2;
	saveFileDialog2->RestoreDirectory = true;
	if (saveFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //проверка, если закрыто по нажатию кнопки ОК
		this->ProjectFileName->Text = saveFileDialog2->FileName;
		SaveParams(sender, e);
		StreamWriter^ sw = gcnew StreamWriter(this->ProjectFileName->Text);
		sw->Write(this->ParamsBox->Text);
		sw->Close();
	}
}
inline System::Void MillerProgrammer::MyForm::Save_Click(System::Object^ sender, System::EventArgs^ e) {
	
	StreamWriter^ sw = gcnew StreamWriter(this->FileName->Text + ".tap");
	
	sw->Write(this->CodeBox->Text);
	sw->Close();
}
inline System::Void MillerProgrammer::MyForm::SaveFileMenu_Click(System::Object^ sender, System::EventArgs^ e) {

	StreamWriter^ sw = gcnew StreamWriter(this->ProjectFileName->Text + ".tap");
	SaveParams(sender, e);
	sw->Write(this->ParamsBox->Text);
	sw->Close();
}
inline System::Void MillerProgrammer::MyForm::AddLine(int LN, System::String^ GCode)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN +" "+ GCode + "\r\n");
}
inline System::Void MillerProgrammer::MyForm::AddLine(int LN, Char Coord1, float Coord1V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN +" "+ Coord1.ToString() + Coord1V.ToString("F") + "\r\n");
}
inline System::Void MillerProgrammer::MyForm::AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN + " " +GCode +" "+ Coord1.ToString() + Coord1V.ToString("F") + "\r\n");
}

inline System::Void MillerProgrammer::MyForm::AddLine(int LN, Char Coord1, float Coord1V, Char Coord2, float Coord2V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN + " " + Coord1.ToString() + Coord1V.ToString("F") + " " + Coord2.ToString() + Coord2V.ToString("F") + "\r\n");
}
inline System::Void MillerProgrammer::MyForm::AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V, Char Coord2, float Coord2V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN + " " + GCode + " " + Coord1.ToString() + Coord1V.ToString("F") + " " + Coord2.ToString() + Coord2V.ToString("F") + "\r\n");
}

inline System::Void MillerProgrammer::MyForm::AddLine(int LN, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN + " " + Coord1.ToString() + Coord1V.ToString("F") + " " + Coord2.ToString() + Coord2V.ToString("F") + " " + Coord3.ToString() + Coord3V.ToString("F") + "\r\n");
}
inline System::Void MillerProgrammer::MyForm::AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN + " " + GCode + " " + Coord1.ToString() + Coord1V.ToString("F") + " " + Coord2.ToString() + Coord2V.ToString("F") + " " + Coord3.ToString() + Coord3V.ToString("F") + "\r\n");
}

inline System::Void MillerProgrammer::MyForm::AddLine(int LN, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V, Char Coord4, float Coord4V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN + " " + Coord1.ToString() + Coord1V.ToString("F") + " " + Coord2.ToString() + Coord2V.ToString("F") + " " + Coord3.ToString() + Coord3V.ToString("F") + " " + Coord4.ToString() + Coord4V.ToString("F") + "\r\n");
}

inline System::Void MillerProgrammer::MyForm::AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V, Char Coord4, float Coord4V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN + " " + GCode + " " + Coord1.ToString() + Coord1V.ToString("F") + " " + Coord2.ToString() + Coord2V.ToString("F") + " " + Coord3.ToString() + Coord3V.ToString("F") + " " + Coord4.ToString() + Coord4V.ToString("F") + "\r\n");
}

inline System::Void MillerProgrammer::MyForm::AddLine(int LN, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V, Char Coord4, float Coord4V, Char Coord5, float Coord5V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN + " " + Coord1.ToString() + Coord1V.ToString("F") + " " + Coord2.ToString() + Coord2V.ToString("F") + " " + Coord3.ToString() + Coord3V.ToString("F") + " " + Coord4.ToString() + Coord4V.ToString("F") + " " + Coord5.ToString() + Coord5V.ToString("F") + "\r\n");
}
inline System::Void MillerProgrammer::MyForm::AddLine(int LN, System::String^ GCode, Char Coord1, float Coord1V, Char Coord2, float Coord2V, Char Coord3, float Coord3V, Char Coord4, float Coord4V, Char Coord5, float Coord5V)
{
	this->CodeBox->Text = this->CodeBox->Text + System::Convert::ToString("N" + LN + " " + GCode + " " + Coord1.ToString() + Coord1V.ToString("F") + " " + Coord2.ToString() + Coord2V.ToString("F") + " " + Coord3.ToString() + Coord3V.ToString("F") + " " + Coord4.ToString() + Coord4V.ToString("F") + " " + Coord5.ToString() + Coord5V.ToString("F") + "\r\n");
}

inline System::Void MillerProgrammer::MyForm::Calc_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->shortWhistle->Checked) {
		Calc_Short(sender, e);
	}
	else {
		Calc_Long(sender, e);
	}
}
inline System::Void MillerProgrammer::MyForm::HeaderBlock() {
	this->CodeBox->Text = System::Convert::ToString("%\r\n");
	LineNum = 10;
	AddLine(LineNum, "G90 G17 G40 G80 G49"); LineNum += 10;
	AddLine(LineNum, "G21(Metric)"); LineNum += 10;
	//mill usage comment
	AddLine(LineNum, "(" + System::Convert::ToString(MillD) + "mm EndMill)"); LineNum += 10;
	//spindle start
	AddLine(LineNum, 'S', BSpeed); LineNum += 10;
	AddLine(LineNum, "M3"); LineNum += 10;
	//moving to start postition
		//moving up
	AddLine(LineNum, "G0 F" + ((int)(4 * BFeed)).ToString()); LineNum += 10;
	AddLine(LineNum, 'Z', TopZ, 'A', BaseA, 'C', BaseC); LineNum += 10;
}
inline System::Void MillerProgrammer::MyForm::FooterBlock() {

	AddLine(LineNum, "G0", 'X', 0, 'C', 0); LineNum += 10;
	// Отвод инструмента, возврат на базу
	AddLine(LineNum, 'Z', TopZ, 'A', BaseA); LineNum += 10;
	AddLine(LineNum, 'X', TopZ, 'Y', 0); LineNum += 10;
	AddLine(LineNum, "M5 M9"); LineNum += 10;
	AddLine(LineNum, "M30"); LineNum += 10;
	//Символ завершения программы
	this->CodeBox->Text += System::Convert::ToString("%");
}
inline System::Void MillerProgrammer::MyForm::VerticalRectangle(float StartZ, float TargetZ, float HalfWide, float StartPoint, float Edge1, float Edge2) {
	//Movimg to start edge
	float MD = MillD;
	float E1 = Edge1 + MD / 2;
	float E2 = Edge2 - MD / 2;
	float CST = SideSt / ClearSts;
	int SideStepsNum = static_cast<int>((HalfWide - MD / 2 - SideSt / ClearSts) / SideSt);
	float FieldWide = SideSt * SideStepsNum;
	if (SideStepsNum == 0) SideStepsNum++;
	if ((HalfWide - FieldWide - MD / 2) / SideSt > (1 / ClearSts)) SideStepsNum++;
	float ActSideStep = (HalfWide - MD / 2 - SideSt / ClearSts) / SideStepsNum;
	NextZ = StartZ - DeepSt;
	AddLine(LineNum, "G0", 'X', 0, 'Y', StartPoint); LineNum += 10;
	AddLine(LineNum, 'Z', StartZ+FastFallGap); LineNum += 10;
	AddLine(LineNum, "G1", 'Z', StartZ, 'F', BFeed / 10); LineNum += 10;
	//Bribe over top, preventing overload
	AddLine(LineNum, 'Y', E1, 'F', BFeed / 2); LineNum += 10;
	AddLine(LineNum, 'Y', E2); LineNum += 10;
	AddLine(LineNum, "G0",'Y', StartPoint); LineNum += 10;
	//Layer cycles
	AddLine(LineNum, "(Layers)"); LineNum += 10;
	while (NextZ >= (TargetZ))
	{
		//Cut down to one 
		AddLine(LineNum, "G1", 'Z', NextZ, 'F', BFeed / 10); LineNum += 10;
		//Cut Center on slow speed
		AddLine(LineNum, 'Y', E2-CST, 'F', BFeed / 2); LineNum += 10;
		AddLine(LineNum, 'Y', E1+CST); LineNum += 10;
		//Calc Rectangle steps
		float RectRightStep = ActSideStep;
		//do rectangle
		while (RectRightStep < (HalfWide-MD/2-CST/2)){
			AddLine(LineNum, 'X', -RectRightStep, 'F', BFeed/2);LineNum += 10;
			AddLine(LineNum, 'Y', E2-CST, 'F', BFeed); LineNum += 10;
			AddLine(LineNum, 'X', RectRightStep); LineNum += 10;
			AddLine(LineNum, 'Y', E1 + CST); LineNum += 10;
			RectRightStep += ActSideStep;
		}
		//White cut
		AddLine(LineNum, "(White cut)"); LineNum += 10;
		AddLine(LineNum, 'X', 0, 'F', WFeed); LineNum += 10;
		AddLine(LineNum, 'Y', E1); LineNum += 10;
		AddLine(LineNum, 'X', -HalfWide + MD / 2); LineNum += 10;
		AddLine(LineNum, 'Y', E2); LineNum += 10;
		AddLine(LineNum, 'X', HalfWide - MD / 2); LineNum += 10;
		AddLine(LineNum, 'Y', E1); LineNum += 10;
		AddLine(LineNum, 'X', 0); LineNum += 10;
		AddLine(LineNum, "G0", 'Y', StartPoint); LineNum += 10;
		//To next Level
		NextZ -= DeepSt;
	}
	AddLine(LineNum, 'Z', StartZ + FastFallGap); LineNum += 10;
}
inline System::Void MillerProgrammer::MyForm::AngularRectangle(float StartZ, float TargetZ, float HalfAngle, float StartPoint, float Edge1, float Edge2) {
	float EdgeHalfWide = StartZ * HalfAngle;
	float MD = MillD;
	//ширина черновой выборки на четверть шага меньше (эта четверть шага остается под чистовой срез)
	// таким образом, рассчитаем адаптированный шаг
	int EdgeSideSteps = static_cast<int>((EdgeHalfWide-MD/2 - SideSt/ClearSts) / SideSt);
	if (EdgeSideSteps == 0) EdgeSideSteps++;
	if (EdgeHalfWide - MD/2 - SideSt / ClearSts - EdgeSideSteps * SideSt > SideSt * 0.3) EdgeSideSteps++;
	float ActEdgeSideStep = (EdgeHalfWide - MD/2 - SideSt / ClearSts) / EdgeSideSteps;
	float CDelta = HalfAngle / EdgeSideSteps; //угловой шаг, в радианах.
	float XDelta = static_cast<float>(MD) / 2 / EdgeSideSteps;
	float E1 = Edge1 + MD / 2;
	float E2 = Edge2 - MD / 2;
	float CST = SideSt / ClearSts;
	NextZ = StartZ - DeepSt;
	//Movimg to start edge
	AddLine(LineNum, "G0", 'X', 0, 'Y', StartPoint); LineNum += 10;
	AddLine(LineNum, 'Z', StartZ + FastFallGap); LineNum += 10;
	AddLine(LineNum, "G1", 'Z', StartZ, 'F', BFeed / 10); LineNum += 10;
	AddLine(LineNum, 'Y', E1, 'F', BFeed / 2); LineNum += 10;
	AddLine(LineNum, 'Y', E2); LineNum += 10;
	AddLine(LineNum, "G0", 'Y', StartPoint, 'F', BFeed); LineNum += 10;
	//Layer cycles
	AddLine(LineNum, "(Layers)"); LineNum += 10;
	while (NextZ >= (TargetZ))
	{
		//Cut down to one step
		AddLine(LineNum, "G1", 'Z', NextZ, 'F', BFeed / 10); LineNum += 10;
		//Cut Center on slow speed
		AddLine(LineNum, 'Y', E2-CST, 'F', BFeed / 2); LineNum += 10;
		AddLine(LineNum, 'Y', E1+CST); LineNum += 10;
		//do rectangle
		float XPlace = XDelta, CPlace = CDelta;
		while (CPlace < HalfAngle)
		{
			//контур
			AddLine(LineNum, 'X', CST + XPlace, 'C', CPlace * 180 / M_PI, 'F', BFeed / 2); LineNum += 10;
			AddLine(LineNum, 'Y', E2-CST, 'F', BFeed ); LineNum += 10;
			AddLine(LineNum, 'X', -CST - XPlace, 'C', -CPlace * 180 / M_PI); LineNum += 10;
			AddLine(LineNum, 'Y', E1+CST); LineNum += 10;
			//+1 в ширину контура
			CPlace += CDelta;
			XPlace += XDelta;
		}
		AddLine(LineNum, "(White cut)"); LineNum += 10;
		//чистовой рез
		AddLine(LineNum, 'X', 0, 'C', 0, 'F', WFeed); LineNum += 10;
		AddLine(LineNum, 'Y', E1); LineNum += 10;
		AddLine(LineNum, 'X', MD / 2, 'C', HalfAngle * 180 / M_PI); LineNum += 10;
		AddLine(LineNum, 'Y', E2); LineNum += 10;
		AddLine(LineNum, 'X', -MD / 2, 'C', -HalfAngle * 180 / M_PI); LineNum += 10;
		AddLine(LineNum, 'Y', E1); LineNum += 10;
		// выход в центр на следующий ход
		AddLine(LineNum, 'X', 0, 'C', BaseC); LineNum += 10;
		AddLine(LineNum, "G0", 'Y', StartPoint); LineNum += 10;
		NextZ -= DeepSt;
	}
	AddLine(LineNum, 'Z', StartZ + FastFallGap); LineNum += 10;
}
inline System::Void MillerProgrammer::MyForm::ClearAngularRectangle(float StartZ, float TargetZ, float Rad, float HalfAngle, float StartPoint, float Edge1, float Edge2) {
	float EdgeHalfWide = Rad * HalfAngle;
	//ширина черновой выборки на четверть шага меньше (эта четверть шага остается под чистовой срез)
	// таким образом, рассчитаем адаптированный шаг
	float MD = MillD;
	int EdgeSideSteps = static_cast<int>((EdgeHalfWide - MD / 2 - SideSt / ClearSts) / SideSt);
	if (EdgeSideSteps == 0) EdgeSideSteps++;
	if (EdgeHalfWide - MD / 2 - SideSt / ClearSts - EdgeSideSteps * SideSt > SideSt * 0.3) EdgeSideSteps++;
	float ActEdgeSideStep = (EdgeHalfWide - MD / 2 - SideSt / ClearSts) / EdgeSideSteps;
	float CDelta = HalfAngle / EdgeSideSteps; //угловой шаг, в радианах.
	float XDelta = static_cast<float>(MD) / 2 / EdgeSideSteps;
	float E1 = Edge1 + MD / 2;
	float E2 = Edge2 - MD / 2;
	float CST = SideSt / ClearSts;
	NextZ = StartZ - DeepSt;
	//Movimg to start edge
	AddLine(LineNum, "G0", 'X', 0, 'Y', StartPoint); LineNum += 10;
	AddLine(LineNum, 'Z', (StartZ + FastFallGap)); LineNum += 10;
	AddLine(LineNum, "G1", 'Z', StartZ, 'F', BFeed / 10); LineNum += 10;
	AddLine(LineNum, 'Y', E1, 'F', BFeed / 2); LineNum += 10;
	AddLine(LineNum, 'Y', E2); LineNum += 10;
	AddLine(LineNum, "G0", 'Y', StartPoint, 'F', BFeed); LineNum += 10;
	//Layer cycles
	AddLine(LineNum, "(Layers)"); LineNum += 10;
	while (NextZ > (TargetZ))
	{
		//Cut down to one step
		AddLine(LineNum, "G1", 'Z', NextZ, 'F', BFeed / 10); LineNum += 10;
		//Cut Center on slow speed
		AddLine(LineNum, 'Y', E2 - CST, 'F', BFeed / 2); LineNum += 10;
		AddLine(LineNum, 'Y', E1 + CST); LineNum += 10;
		//do rectangle
		float XPlace = XDelta, CPlace = CDelta;
		while (CPlace < HalfAngle)
		{
			//контур
			AddLine(LineNum, 'X', CST + XPlace, 'C', CPlace * 180 / M_PI, 'F', BFeed / 2); LineNum += 10;
			AddLine(LineNum, 'Y', E2 - CST, 'F', BFeed); LineNum += 10;
			AddLine(LineNum, 'X', -CST - XPlace, 'C', -CPlace * 180 / M_PI); LineNum += 10;
			AddLine(LineNum, 'Y', E1 + CST); LineNum += 10;
			//+1 в ширину контура
			CPlace += CDelta;
			XPlace += XDelta;
		}
		AddLine(LineNum, "(White cut)"); LineNum += 10;
		//чистовой рез
		AddLine(LineNum, 'X', 0, 'C', 0, 'F', WFeed); LineNum += 10;
		AddLine(LineNum, 'Y', E1); LineNum += 10;
		AddLine(LineNum, 'X', MD / 2, 'C', HalfAngle * 180 / M_PI); LineNum += 10;
		AddLine(LineNum, 'Y', E2); LineNum += 10;
		AddLine(LineNum, 'X', -MD / 2, 'C', -HalfAngle * 180 / M_PI); LineNum += 10;
		AddLine(LineNum, 'Y', E1); LineNum += 10;
		// выход в центр на следующий ход
		AddLine(LineNum, 'X', 0, 'C', BaseC); LineNum += 10;
		AddLine(LineNum, "G0", 'Y', StartPoint); LineNum += 10;
		NextZ -= DeepSt;
	}
	AddLine(LineNum, "G1", 'Z', TargetZ, 'F', BFeed / 10); LineNum += 10;
	AddLine(LineNum, 'Y', E2 - CST, 'F', BFeed / 2); LineNum += 10;
	AddLine(LineNum, 'Y', E1 + CST); LineNum += 10;
	//do rectangle
	XDelta = XDelta / ClearSts;
	CDelta = CDelta / ClearSts;
	float XPlace = XDelta, CPlace = CDelta;
	while (CPlace < HalfAngle)
	{
		//контур
		AddLine(LineNum, 'X', CST + XPlace, 'C', CPlace * 180 / M_PI, 'F', BFeed / 2); LineNum += 10;
		AddLine(LineNum, 'Y', E2 - CST, 'F', BFeed); LineNum += 10;
		AddLine(LineNum, 'X', -CST - XPlace, 'C', -CPlace * 180 / M_PI); LineNum += 10;
		AddLine(LineNum, 'Y', E1 + CST); LineNum += 10;
		//+1 в ширину контура
		CPlace += CDelta;
		XPlace += XDelta;
	}
	AddLine(LineNum, "(White cut)"); LineNum += 10;
	//чистовой рез
	AddLine(LineNum, 'X', 0, 'C', 0, 'F', WFeed); LineNum += 10;
	AddLine(LineNum, 'Y', E1); LineNum += 10;
	AddLine(LineNum, 'X', MD / 2, 'C', HalfAngle * 180 / M_PI); LineNum += 10;
	AddLine(LineNum, 'Y', E2); LineNum += 10;
	AddLine(LineNum, 'X', -MD / 2, 'C', -HalfAngle * 180 / M_PI); LineNum += 10;
	AddLine(LineNum, 'Y', E1); LineNum += 10;
	// выход в центр на следующий ход
	AddLine(LineNum, 'X', 0, 'C', BaseC); LineNum += 10;
	AddLine(LineNum, "G0", 'Y', StartPoint); LineNum += 10;
	NextZ -= DeepSt;
	AddLine(LineNum, 'Z', StartZ + FastFallGap); LineNum += 10;
}

inline System::Void MillerProgrammer::MyForm::Calc_Short(System::Object^ sender, System::EventArgs^ e) {
	float PazAR = M_PI * PazA / 180;
		// пересчитали угол створа паза из градусов в радианы
	float EdgeAR = M_PI * EdgeA / 180;
		// пересчитали угол лезвия в радианы
	float PazTotLen;
	float MD = MillD;
	if (this->pazClear->Checked) 
	{
		PazTotLen = PazLen + ExtLen;
	}
	else 
	{
		PazTotLen = PazLen;
	}
		// и если селектор стоит на чистую длину паза - прибавить проточеную часть
	

	HeaderBlock();
	float TubeEnd = -HoldLenght - TotLen;
	float StPt;
	if (HoldedLen > 0) {
		StPt = TubeEnd + HoldedLen + PazTotLen / 2;
	}
	else 
	{
		StPt = TubeEnd - MD / 2;
	}

	float RectEdge2 = TubeEnd + PazTotLen + HoldedLen;
	
	if (PazForm)//если паз прямой
	{
		//Calc milling rectangle dimensions
		float RectRight = PazS / 2;
		//Cutting long paz
		//Checking for bold end of gap, and cutting it, if it exists
		if (PazTotLen > ExtLen)
		{
			AddLine(LineNum, "(Top part of paz)"); LineNum += 10;
			//Calc milling rectangle dimensions
			float RectEdge1 = TubeEnd + ExtLen + HoldedLen;
			VerticalRectangle(OutD/2, ExD / 2, RectRight,(RectEdge1+RectEdge2)/2, RectEdge1, RectEdge2);
		}
		
		//Calc milling rectangle dimensions
		float RectEdge1 = TubeEnd + HoldedLen;
		AddLine(LineNum, "(Full lenght paz)"); LineNum += 10;
		//Layer cycles
		float FinalZ = InD * cos(PazAR / 2) / 2 - DeepSt; //высота кромки паза
		VerticalRectangle(ExD / 2, FinalZ, RectRight, (RectEdge1 + RectEdge2) / 2, RectEdge1, RectEdge2);
	}
	else
	{//угловой вариант паза
		if (PazTotLen > ExtLen)//если вариант с проточкой -> есть не-проточенный участок
		{
			AddLine(LineNum, "(Top part of paz)"); LineNum += 10;
			//Calc milling rectangle dimensions
			float RectEdge1 = TubeEnd + ExtLen + HoldedLen;
			AngularRectangle(OutD / 2, ExD / 2, PazAR / 2, (RectEdge1 + RectEdge2) / 2, RectEdge1, RectEdge2);
		}
		float RectEdge1 = TubeEnd + HoldedLen;
		AddLine(LineNum, "(Full lenght paz)"); LineNum += 10;
		AngularRectangle(ExD / 2, InD / 2-DeepSt, PazAR / 2, (RectEdge1 + RectEdge2) / 2, RectEdge1, RectEdge2);
	}
	//Making Edge
	// Calc Metal geometry
	//Y max - в плоскости сечения YZ, точка пересечения лезвия и внутреннего диаметра. 
	//она же: Х=( конец трубы, минус длина паза ) Y= (половина внутреннего диаметра)
	//повернутая на угол заточки
	// итого, по пифагору имеем гипотенузу, неизменную (L1). имеем исходный угол(A1o), 
	// добавляем к нему заточку(EdgeAR) и получаем новый угол(A1n), находим координаты
	float Y1o, Z1o, A1o, L1, Y1n, Z1n, A1n;
	Y1o = TubeEnd + PazLen+HoldedLen;
	Z1o = InD/2+EdgeB;
	A1o = atan(Z1o / (-Y1o));
	A1n = A1o + EdgeAR;
	L1 = sqrt(Y1o * Y1o + Z1o * Z1o);
	Y1n = -L1 * cos(A1n);
	Z1n = L1 * sin(A1n);
	//Y min
	//от исходной нижней точки имеем длину (или угол), получаем Х,У исходной верхней точки
	//далее так же - гипотенула, старый и новый углы, новые координаты
	float Y2o, Z2o, A2o, L2, Y2n, Z2n, A2n;
	Y2o = Y1o + (OutD - InD)/2/tan(EdgeAR);
	Z2o = OutD/2;
	A2o = atan(Z2o / (-Y2o));
	A2n = A2o + EdgeAR;
	L2 = sqrt(Y2o * Y2o + Z2o * Z2o);
	Y2n = -L2 * cos(A2n);
	Z2n = L2 * sin(A2n);
	//Z min - определен предыдущими точками
	//Z max - определяется таким же расчетом для пересечения прямогог паза и наружнего диаметра.
	float Y3o, Z3o, A3o, L3, Y3n, Z3n, A3n;
	Y3o = Y1o;
	Z3o = Z2o;
	A3o = atan(Z3o / (-Y3o));
	A3n = A3o + EdgeAR;
	L3 = sqrt(Y3o * Y3o + Z3o * Z3o);
	Y3n = -L3 * cos(A3n);
	Z3n = L3 * sin(A3n);
	//из всего этого, получаем граничные цифры, с которыми и работаем дальше.
	float Ymin = Y1n, Ymax = Y2n, Zmin = (Z2n + Z1n) / 2, Zmax = Z3n;
	//теперь у У-кам добавляем по диаметру, для выхода за материал заготовки
	Ymin -= (MD + SideSt);
	Ymax += (MD + SideSt);
	// для Z рассчитаем актуализированный шаг, 
	// общуюю толщину минус чистовой ход делим на высоту реза по Z
	// берем целое, умножаем на шаги - смотрим недорез. если меньше трети - раскидываем на шаги. если больше - добавляем шаг.
	// и от такого количества находим высоту шага
	float ZDelta = Zmax - Zmin - DeepSt / ClearSts;
	int ZSteps = static_cast<int>(ZDelta / DeepSt);
	if (ZSteps == 0) ZSteps++;
	if (ZDelta - ZSteps * DeepSt > DeepSt * 0.3) ZSteps++;
	float ActZStep = ZDelta / ZSteps;
	Zmax = Zmin + (ZSteps+1) * ActZStep + DeepSt / ClearSts;
	// Move to Edge corner
	AddLine(LineNum, "G0", 'Y', Ymin,'Z',Zmax,'A',(this->BaseA + this->EdgeA)); LineNum += 10;
	AddLine(LineNum, "(Milling Edge)"); LineNum += 10;
	ClearAngularRectangle(Zmax, Zmin, OutD/2, PazAR / 2, (Ymin), Ymin, Ymax);
	// выход в центр на следующий ход
	FooterBlock();
}

inline System::Void MillerProgrammer::MyForm::Calc_Long(System::Object^ sender, System::EventArgs^ e) {
	float PazAR = M_PI * PazA / 180;
	// пересчитали угол створа паза из градусов в радианы
	float EdgeAR = M_PI * EdgeA / 180;
	// пересчитали угол лезвия в радианы
	float PazTotLen;
	float MD = MillD;
	if (this->pazClear->Checked)
	{
		PazTotLen = PazLen + ExtLen;
	}
	else
	{
		PazTotLen = PazLen;
	}
	HeaderBlock();
	PazStart = -HoldLenght - HoldedLen;
	PazEnd = PazStart - PazTotLen;
	//Selecting paz form
	if (PazForm)
	{
		float RectRight = PazS / 2;
		//Cutting long paz
		if (PazTotLen > ExtLen)	//Checking for bold end of gap, and cutting it, if it exists
		{
			VerticalRectangle(OutD / 2, ExD / 2, RectRight, (PazEnd+PazStart-ExtLen) / 2, PazStart-ExtLen, PazEnd);
		}
		AddLine(LineNum, "(Full lenght paz)"); LineNum += 10;
		//Layer cycles
		float FinalZ = InD * cos(PazAR / 2) / 2 - DeepSt; //высота кромки паза
		VerticalRectangle(ExD / 2, FinalZ, RectRight, (PazStart + PazEnd) / 2, PazStart, PazEnd);
	}
	else
	{
		float RectEdge1 = PazStart - ExtLen;
		float RectEdge2 = PazEnd;
		//Cutting long paz
			//Checking for bold end of gap, and cutting it, if it exists
		if (PazTotLen > ExtLen)
		{
			AddLine(LineNum, "(Top part of paz)"); LineNum += 10;
			//Calc milling rectangle dimensions
			AngularRectangle(OutD / 2, ExD / 2, PazAR / 2, (RectEdge1 + RectEdge2) / 2, RectEdge2, RectEdge1);

		}
		RectEdge1 = PazStart;
		RectEdge2 = PazEnd;
		AngularRectangle(ExD / 2, InD / 2-DeepSt, PazAR / 2, (RectEdge1 + RectEdge2) / 2, RectEdge2, RectEdge1);
	}
	//Making Edge
		// Calc Metal geometry
			//Y max - в плоскости сечения YZ, точка пересечения лезвия и снутреннего диаметра. 
				//она же: Х=( конец трубы, минус длина паза ) Y= (половина внутреннего диаметра)
				//повернутая на угол заточки
				// итого, по пифагору имеем гипотенузу, неизменную. имеем исходный угол, добавляем к нему новый угол, находим координаты
	float Y1o, Z1o, A1o, L1, Y1n, Z1n, A1n;
	Y1o = PazEnd;
	Z1o = InD / 2+EdgeB;
	A1o = atan(Z1o / (-Y1o));
	A1n = A1o - EdgeAR;
	L1 = sqrt(Y1o * Y1o + Z1o * Z1o);
	Y1n = -L1 * cos(A1n);
	Z1n = L1 * sin(A1n);
	//Y min
		//от исходной нижней точки имеем длину (или угол), получаем Х,У исходной верхней точки
		//далее так же - гипотенуза, старый и новый углы, новые координаты
	float Y2o, Z2o, A2o, L2, Y2n, Z2n, A2n;
	Y2o = Y1o - (OutD/2 - Z1o) / tan(EdgeAR);
	Z2o = OutD / 2;
	A2o = atan(Z2o / (-Y2o));
	A2n = A2o - EdgeAR;
	L2 = sqrt(Y2o * Y2o + Z2o * Z2o);
	Y2n = -L2 * cos(A2n);
	Z2n = L2 * sin(A2n);
	//Z min - определен предыдущими точками
	//Z max - определяется таким же расчетом для пересечения прямогог паза и наружнего диаметра.
	float Y3o, Z3o, A3o, L3, Y3n, Z3n, A3n;
	Y3o = Y1o;
	Z3o = Z2o;
	A3o = atan(Z3o / (-Y3o));
	A3n = A3o - EdgeAR;
	L3 = sqrt(Y3o * Y3o + Z3o * Z3o);
	Y3n = -L3 * cos(A3n);
	Z3n = L3 * sin(A3n);
	//из всего этого, получаем граничные цифры, с которыми и работаем дальше.
	float Ymin = Y1n, Ymax = Y2n, Zmin = (Z2n + Z1n) / 2, Zmax = Z3n;
	//теперь у У-кам добавляем выходы за металл
	Ymin += (MD / 2 + SideSt);
	Ymax -= (MD / 2 + SideSt);
	// для Z рассчитаем актуализированный шаг, 
		// общуюю толщину минус чистовой ход делим на высоту реза по Z
		// берем целое, умножаем на шаги - смотрим недорез. если меньше трети - раскидываем на шаги. если больше - добавляем шаг.
		// и от такого количества находим высоту шага

	AddLine(LineNum, "G0", 'Z', TopZ); LineNum += 10;
	AddLine(LineNum, "G0", 'Y', Ymin, 'A', (this->BaseA - this->EdgeA)); LineNum += 10;
	AddLine(LineNum, "G0", 'Z', Zmax+FastFallGap); LineNum += 10;
	ClearAngularRectangle(Zmax, Zmin, OutD/2, PazAR / 2, (Ymin), Ymin, Ymax);
	// выход в центр на следующий ход
	FooterBlock();
 }


