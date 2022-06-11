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

inline System::Void MillerProgrammer::MyForm::Save_New_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Program Files|*.tap";   // чтобы можно было сохранить только с разрешением txt (если не нужно - убери)
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) //проверка, если закрыто по нажатию кнопки ОК
	this->FileName->Text = saveFileDialog1->FileName;
	StreamWriter^ sw = gcnew StreamWriter(this->FileName->Text);

	sw->Write(this->CodeBox->Text);
	sw->Close();
}

inline System::Void MillerProgrammer::MyForm::Save_Click(System::Object^ sender, System::EventArgs^ e) {
	
	StreamWriter^ sw = gcnew StreamWriter(this->FileName->Text + ".tap");
	
	sw->Write(this->CodeBox->Text);
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
	int MillD, BSpeed, WSpeed, LineNum, ClearSts;
	float InD, ExD, OutD, ExtLen, TotLen, PazS, PazA, PazLen, EdgeA, EdgeLen, DeepSt, SideSt, BFeed, WFeed, NextX, NextY, NextZ, HoldLenght, TopZ;
	bool PazType, EdgeType, PazForm;
	std::cout.imbue(std::locale(""));
	char decPoint = std::use_facet< std::numpunct<char> >(std::cout.getloc()).decimal_point();
	HoldLenght =(float)Convert::ToDouble(this->HolderLenght->Text->Replace('.', decPoint)->Replace(',', decPoint));
	TopZ = (float)Convert::ToDouble(this->SafeZ->Text->Replace('.', decPoint)->Replace(',', decPoint));
	const float BaseA = -90;
	const float BaseC = 0;
	const float FastFallGap = 0.5;
	InD = (float)Convert::ToDouble(this->InternalDiam->Text->Replace('.', decPoint)->Replace(',', decPoint));
	ExD = (float)Convert::ToDouble(this->ExtermalDiam->Text->Replace('.', decPoint)->Replace(',', decPoint));
	OutD = (float)Convert::ToDouble(this->OutsideDiam->Text->Replace('.', decPoint)->Replace(',', decPoint));
	ExtLen = (float)Convert::ToDouble(this->ExternalLength->Text->Replace('.', decPoint)->Replace(',', decPoint));
	TotLen = (float)Convert::ToDouble(this->TotalLength->Text->Replace('.', decPoint)->Replace(',', decPoint));
	PazType = this->PazSelectorSize->Checked;
	PazS = (float)Convert::ToDouble(this->PazSize->Text->Replace('.', decPoint)->Replace(',', decPoint));
	PazA = M_PI * (float)Convert::ToDouble(this->PazAngle->Text->Replace(',', decPoint)->Replace('.', decPoint)) / 180;
	PazLen = (float)Convert::ToDouble(this->PazLenght->Text->Replace('.', decPoint)->Replace(',', decPoint));
	EdgeType = this->EdgeSelectorAngle->Checked;
	PazForm = this->PazParallel->Checked;
	EdgeA = M_PI* (float)Convert::ToDouble(this->EdgeAngle->Text->Replace('.', decPoint)->Replace(',', decPoint)) /180;
	EdgeLen = (float)Convert::ToDouble(this->EdgeLenght->Text->Replace('.', decPoint)->Replace(',', decPoint));
	MillD = Int32::Parse(this->Mill->Text);
	DeepSt = (float)Convert::ToDouble(this->DeepStep->Text->Replace('.', decPoint)->Replace(',', decPoint));
	SideSt = (float)Convert::ToDouble(this->SideStep->Text->Replace('.', decPoint)->Replace(',', decPoint));
	BFeed = (float)Convert::ToDouble(this->BlackFeed->Text->Replace('.', decPoint)->Replace(',', decPoint));
	BSpeed = Int32::Parse(this->BlackSpeed->Text);
	WFeed = (float)Convert::ToDouble(this->WhiteFeed->Text->Replace('.', decPoint)->Replace(',', decPoint));
	WSpeed = Int32::Parse(this->WhiteSpeed->Text);
	ClearSts = Int32::Parse(this->ClearanceDivider->Text);
	
	//header
		this->CodeBox->Text = System::Convert::ToString("%\r\n"); LineNum = 10;
		LineNum = 10;
		AddLine(LineNum, "G90 G17 G40 G80 G49"); LineNum += 10;
		AddLine(LineNum, "G21(Metric)"); LineNum += 10;
	//mill usage comment
		AddLine(LineNum, "("+ System::Convert::ToString(MillD)+"mm EndMill)"); LineNum += 10;
	//spindle start
		AddLine(LineNum, 'S', BSpeed); LineNum += 10;
		AddLine(LineNum, "M3"); LineNum += 10;
	//moving to start postition
		//moving up
			AddLine(LineNum, "G0 F" + WFeed.ToString()); LineNum += 10;
			AddLine(LineNum, 'Z', TopZ, 'A', BaseA, 'C', BaseC); LineNum += 10;

		//Moving to free end
			float TubeEnd = -HoldLenght - TotLen;
			NextY = TubeEnd - (MillD / 2 + 0.25); 
			NextX = 0;
			AddLine(LineNum, 'X', NextX, 'Y', NextY); LineNum += 10;

		//Drop down to edge
			NextZ = OutD / 2 + FastFallGap;
			AddLine(LineNum, 'Z', NextZ); LineNum += 10;
	//Selecting paz form
		if (PazForm)
		{
		//Cutting long paz
			//Checking for bold end of gap, and cutting it, if it exists
				if (PazLen > ExtLen)
				{
					AddLine(LineNum, "(Top part of paz)"); LineNum += 10;
				//Calc milling rectangle dimensions
					float RectEdge1 = TubeEnd + ExtLen - MillD / 2 - SideSt;
					float RectEdge2 = TubeEnd + PazLen - MillD / 2;
					float RectRight = PazS / 2 - MillD / 2 - SideSt / 4;
				//Movimg to start edge
					AddLine(LineNum, "G0", 'X', 0, 'Y', RectEdge1, 'Z', OutD / 2); LineNum += 10;
				//Bribe over top, preventing overload
					AddLine(LineNum, "G1", 'Y', RectEdge2, 'F', BFeed / 2); LineNum += 10;
					AddLine(LineNum, "G0", 'Y', RectEdge1, 'F', WFeed); LineNum += 10;
				//Layer cycles
					AddLine(LineNum, "(Layers)"); LineNum += 10;
					NextZ = OutD / 2 - DeepSt;
					while (NextZ > (ExD / 2))
					{
					//Cut down to one step
						AddLine(LineNum, "G1", 'Z', NextZ, 'F', BFeed / 10); LineNum += 10;
					//Cut Center on slow speed
						AddLine(LineNum, 'Y', RectEdge2, 'F', BFeed / 2); LineNum += 10;
						AddLine(LineNum, "G0", 'Y', RectEdge1, 'F', WFeed); LineNum += 10;
					//Calc Rectangle steps
						int SideStepsNum = static_cast<int>(RectRight / SideSt);
						float FieldWide = SideSt * SideStepsNum;
						if (SideStepsNum == 0) SideStepsNum++;
						if ((RectRight - FieldWide) / SideSt > 0.3) SideStepsNum++;
						float ActSideStep = RectRight / SideStepsNum;
						float RectRightStep = ActSideStep;
					//do rectangle
						while ((RectRightStep < RectRight + 0.3 * SideSt) && (RectRightStep < PazS / 2-MillD/2))
						{
							AddLine(LineNum, "G1", 'X', -RectRightStep, 'F', WFeed); LineNum += 10;
							AddLine(LineNum, 'Y', RectEdge2, 'F', BFeed); LineNum += 10;
							AddLine(LineNum, 'X', RectRightStep); LineNum += 10;
							AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
							AddLine(LineNum, "G0",'X', 0,'F',WFeed); LineNum += 10;
							RectRightStep += ActSideStep;
						}
					//White cut
						AddLine(LineNum, "(White cut)"); LineNum += 10;
						AddLine(LineNum, "G1", 'X', -PazS / 2 + MillD / 2); LineNum += 10;
						AddLine(LineNum, 'Y', TubeEnd + PazLen - (MillD / 2)); LineNum += 10;
						AddLine(LineNum, 'X', PazS / 2 - MillD / 2); LineNum += 10;
						AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
						AddLine(LineNum, "G0", 'X', 0); LineNum += 10;
					//To next Level
						NextZ -= DeepSt;
					}
				}
		//Moving to tube egde, start point on long paz
			AddLine(LineNum, "G1", 'X', 0, 'Y', TubeEnd - MillD / 2 - SideSt, 'Z', OutD / 2); LineNum += 10;

		//Calc milling rectangle dimensions
			float RectEdge1 = TubeEnd - MillD / 2 - SideSt;
			float RectEdge2 = TubeEnd - MillD / 2 + PazLen;
			float RectRight = PazS / 2 - MillD / 2 - SideSt / 4;
			AddLine(LineNum, "(Full lenght paz)"); LineNum += 10;
		//Layer cycles
			float FinalZ = InD * cos(PazA / 2) / 2; //высота кромки паза
			while (NextZ > (FinalZ - DeepSt * 2))
			{
			//Cut down to one step
				AddLine(LineNum, "G1", 'Z', NextZ, 'F', BFeed / 10); LineNum += 10;
			//Cut Center on slow speed
				AddLine(LineNum, "G1", 'Y', RectEdge2, 'F', BFeed / 2); LineNum += 10;
				AddLine(LineNum, "G0", 'Y', RectEdge1, 'F', WFeed); LineNum += 10;
			//Calc Rectangle steps
				int SideStepsNum = static_cast<int>(RectRight / SideSt);
				float FieldWide = SideSt * SideStepsNum;
				if ((RectRight - FieldWide) / SideSt > 0.3) SideStepsNum++;
				if (SideStepsNum == 0) SideStepsNum++;
				float ActSideStep = RectRight / SideStepsNum;
				float RectRightStep = ActSideStep;
				AddLine(LineNum, "(Layers)"); LineNum += 10;
			//do rectangle
				while ((RectRightStep < RectRight + 0.3 * SideSt) && (RectRightStep < PazS / 2-MillD/2))
				{
					AddLine(LineNum, "G1", 'X', -RectRightStep, 'F', WFeed); LineNum += 10;
					AddLine(LineNum, 'Y', RectEdge2, 'F', BFeed); LineNum += 10;
					AddLine(LineNum, 'X', RectRightStep); LineNum += 10;
					AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
					AddLine(LineNum, "G0", 'X', 0, 'F', WFeed); LineNum += 10;
					RectRightStep += ActSideStep;
				}
			//White cut
				AddLine(LineNum, "G1", 'X', -PazS / 2 + MillD / 2); LineNum += 10;
				AddLine(LineNum, 'Y', TubeEnd + PazLen - MillD / 2); LineNum += 10;
				AddLine(LineNum, 'X', PazS / 2 - MillD / 2); LineNum += 10;
				AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
				AddLine(LineNum, "G0", 'X', 0); LineNum += 10;
			//To next Layer
				NextZ -= DeepSt;
			}
		}
		else
		{
		//Cutting long paz
			//Checking for bold end of gap, and cutting it, if it exists
			if (PazLen > ExtLen)
			{
				AddLine(LineNum, "(Top part of paz)"); LineNum += 10;
			//Calc milling rectangle dimensions
				float RectEdge1 = TubeEnd + ExtLen - MillD / 2 - SideSt;
				float RectEdge2 = TubeEnd + PazLen - MillD / 2;

			//максимальный угол вправо и влево - половина угла створа.
			//ширина обрабатываемой поверхности, считаем оп верхнему диаметру
				float EdgeHalfWide = OutD * (PazA) / 2/2; 
			//ширина чернового сьема на четверть шага меньше.
			// таким образом, рассчитаем адаптированный шаг
				int EdgeSideSteps = static_cast<int>(EdgeHalfWide / SideSt);
				if (EdgeSideSteps == 0) EdgeSideSteps++;
				if (EdgeHalfWide - SideSt / 4 - EdgeSideSteps * SideSt > SideSt * 0.3) EdgeSideSteps++;
				float ActEdgeSideStep = (EdgeHalfWide - SideSt / 4) / EdgeSideSteps;
				float CDelta = PazA/(EdgeSideSteps*2); //угловой шаг, в радианах.
				float XDelta = static_cast<float>(MillD) / 2 / EdgeSideSteps;
				float XSafety = SideSt / 4;
			//Movimg to start edge
				NextZ = OutD / 2;
				AddLine(LineNum, "G0", 'X', 0, 'Y', RectEdge1); LineNum += 10;
	
			//Layer cycles
				AddLine(LineNum, "(Layers)"); LineNum += 10;			
				while (NextZ > (ExD / 2))
				{
				//Cut down to one step
					AddLine(LineNum, "G1", 'Z', NextZ, 'F', BFeed / 10); LineNum += 10;
				//Cut Center on slow speed
					AddLine(LineNum, 'X', -XSafety, 'F', BFeed / 2); LineNum += 10;
					AddLine(LineNum, 'Y', RectEdge2); LineNum += 10;
					AddLine(LineNum, 'X', XSafety); LineNum += 10;
					AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
					AddLine(LineNum, 'X', 0,'F',BFeed); LineNum += 10;//Calc Rectangle steps
					//do rectangle
					float XPlace = XDelta, CPlace = CDelta;
					while (CPlace < PazA / 2 * 1.001)
					{
					//контур
						AddLine(LineNum, 'X', XSafety + XPlace, 'C', CPlace * 180 / M_PI); LineNum += 10;
						AddLine(LineNum, 'Y', RectEdge2); LineNum += 10;
						AddLine(LineNum, 'X', -XSafety - XPlace, 'C', -CPlace * 180 / M_PI); LineNum += 10;
						AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
					//+1 в ширину контура
						CPlace += CDelta;
						XPlace += XDelta;
					}
					AddLine(LineNum, "(White cut)"); LineNum += 10;
				//чистовой рез
					AddLine(LineNum, 'X', MillD/2, 'C', PazA / 2 * 180 / M_PI, 'F', WFeed); LineNum += 10;
					AddLine(LineNum, 'Y', RectEdge2); LineNum += 10;
					AddLine(LineNum, 'X', -MillD / 2, 'C', -PazA / 2 * 180 / M_PI); LineNum += 10;
					AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
				// выход в центр на следующий ход
					AddLine(LineNum, "G0", 'X', 0, 'C', 0); LineNum += 10;
				//шаг в глубину
					NextZ -= DeepSt;
				}
			}
			//Moving to tube egde, start point on long paz
			AddLine(LineNum, "G1", 'X', 0, 'Y', TubeEnd - MillD / 2 - SideSt, 'Z', OutD / 2); LineNum += 10;

			//Calc milling rectangle dimensions
			float RectEdge1 = TubeEnd - MillD / 2 - SideSt;
			float RectEdge2 = TubeEnd - MillD / 2 + PazLen;
			float EdgeHalfWide = OutD * PazA / 2/2;
			int EdgeSideSteps = static_cast<int>(EdgeHalfWide / SideSt);
			if (EdgeSideSteps == 0) EdgeSideSteps++;
			if (EdgeHalfWide - SideSt / 4 - EdgeSideSteps * SideSt > SideSt * 0.3) EdgeSideSteps++;
			float ActEdgeSideStep = (EdgeHalfWide - SideSt / 4) / EdgeSideSteps;
			float CDelta = PazA / (EdgeSideSteps * 2);
			float XDelta = static_cast<float>(MillD) / 2 / EdgeSideSteps;
			float XSafety = SideSt / 4;
			float FinalZ = InD / 2; //высота кромки паза
			while (NextZ > (FinalZ - DeepSt * 2))
			{
			//Cut down to one step
				AddLine(LineNum, "G1", 'Z', NextZ, 'F', BFeed / 10); LineNum += 10;
			//Cut Center on slow speed
				AddLine(LineNum, 'X', -XSafety, 'F', BFeed / 2); LineNum += 10;
				AddLine(LineNum, 'Y', RectEdge2); LineNum += 10;
				AddLine(LineNum, 'X', XSafety); LineNum += 10;
				AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
				AddLine(LineNum, 'X', 0); LineNum += 10;//Calc Rectangle steps
			//do rectangle
				float XPlace = XDelta, CPlace = CDelta;
				while (CPlace < PazA / 2 * 1.001)
				{
				//контур
					AddLine(LineNum, 'X', XSafety + XPlace, 'C', CPlace * 180 / M_PI); LineNum += 10;
					AddLine(LineNum, 'Y', RectEdge2); LineNum += 10;
					AddLine(LineNum, 'X', -XSafety - XPlace, 'C', -CPlace * 180 / M_PI); LineNum += 10;
					AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
				//+1 в ширину контура
					CPlace += CDelta;
					XPlace += XDelta;
				}
				AddLine(LineNum, "(White cut)"); LineNum += 10;
			//чистовой рез
				AddLine(LineNum, 'X', MillD / 2, 'C', PazA / 2 * 180 / M_PI, 'F', WFeed); LineNum += 10;
				AddLine(LineNum, 'Y', RectEdge2); LineNum += 10;
				AddLine(LineNum, 'X', -MillD / 2, 'C', -PazA / 2 * 180 / M_PI); LineNum += 10;
				AddLine(LineNum, 'Y', RectEdge1); LineNum += 10;
			// выход в центр на следующий ход
				AddLine(LineNum, "G0", 'X', 0, 'C', 0); LineNum += 10;
			//шаг в глубину
				NextZ -= DeepSt;
			}
		}
	//Making Edge
		// Calc Metal geometry
			//Y max - в плоскости сечения YZ, точка пересечения лезвия и снутреннего диаметра. 
				//она же: Х=( конец трубы, минус длина паза ) Y= (половина внутреннего диаметра)
				//повернутая на угол заточки
				// итого, по пифагору имеем гипотенузу, неизменную. имеем исходный угол, добавляем к нему новый угол, находим координаты
				float Y1o, Z1o, A1o, L1, Y1n, Z1n, A1n;
				Y1o = TubeEnd + PazLen;
				Z1o = InD/2;
				A1o = atan(Z1o / (-Y1o));
				A1n = A1o + EdgeA;
				L1 = sqrt(Y1o * Y1o + Z1o * Z1o);
				Y1n = -L1 * cos(A1n);
				Z1n = L1 * sin(A1n);
			//Y min
				//от исходной нижней точки имеем длину (или угол), получаем Х,У исходной верхней точки
				//далее так же - гипотенула, старый и новый углы, новые координаты
				float Y2o, Z2o, A2o, L2, Y2n, Z2n, A2n;
				Y2o = Y1o + (OutD - InD)/2/tan(EdgeA);
				Z2o = OutD/2;
				A2o = atan(Z2o / (-Y2o));
				A2n = A2o + EdgeA;
				L2 = sqrt(Y2o * Y2o + Z2o * Z2o);
				Y2n = -L2 * cos(A2n);
				Z2n = L2 * sin(A2n);
			//Z min - определен предыдущими точками
			//Z max - определяется таким же расчетом для пересечения прямогог паза и наружнего диаметра.
				float Y3o, Z3o, A3o, L3, Y3n, Z3n, A3n;
				Y3o = Y1o;
				Z3o = Z2o;
				A3o = atan(Z3o / (-Y3o));
				A3n = A3o + EdgeA;
				L3 = sqrt(Y3o * Y3o + Z3o * Z3o);
				Y3n = -L3 * cos(A3n);
				Z3n = L3 * sin(A3n);
			//из всего этого, получаем граничные цифры, с которыми и работаем дальше.
				float Ymin = Y1n, Ymax = Y2n, Zmin = (Z2n + Z1n) / 2, Zmax = Z3n;
			//теперь у У-кам добавляем выходы за металл
				Ymin -= (MillD / 2 + SideSt);
				Ymax += (MillD / 2 + SideSt);
			// для Z рассчитаем актуализированный шаг, 
				// общуюю толщину минус чистовой ход делим на высоту реза по Z
				// берем целое, умножаем на шаги - смотрим недорез. если меньше трети - раскидываем на шаги. если больше - добавляем шаг.
				// и от такого количества находим высоту шага
				float ZDelta = Zmax - Zmin - DeepSt / 4;
				int ZSteps = static_cast<int>(ZDelta / DeepSt);
				if (ZSteps == 0) ZSteps++;
				if (ZDelta - ZSteps * DeepSt > DeepSt * 0.3) ZSteps++;
				float ActZStep = ZDelta / ZSteps;
				Zmax = Zmin + (ZSteps+1) * ActZStep + DeepSt / 4;
		// Move to Edge corner
			AddLine(LineNum, "G0", 'Y', Ymin,'Z',Zmax,'A',BaseA+(EdgeA/M_PI*180)); LineNum += 10;
		// Оконтурение прямоугольника.
			//максимальный угол вправо и влево - половина угла створа.
			//ширина обрабатываемой поверхности, считаем оп верхнему диаметру
				float EdgeHalfWide = OutD * PazA / 2/2;
			//ширина чернового сьема на четверть шага меньше.
			// таким образом, рассчитаем адаптированный шаг
				int EdgeSideSteps = static_cast<int>(EdgeHalfWide / SideSt);
				if (EdgeSideSteps == 0) EdgeSideSteps++;
				if (EdgeHalfWide - SideSt / 4 - EdgeSideSteps * SideSt > SideSt * 0.3) EdgeSideSteps++;
				float ActEdgeSideStep = (EdgeHalfWide - SideSt / 4) / EdgeSideSteps;
					// далее, доля окружности = ActEdgeSideStep/(OutD*2*M_PI)
					// угол в градусах = 360 * долей окружности
				float CDelta = PazA / (EdgeSideSteps * 2);
				float XDelta = static_cast<float>(MillD) / 2 / EdgeSideSteps;
				float XSafety = SideSt / 4;
				NextZ = Zmax;

			AddLine(LineNum, "(Milling Edge)"); LineNum += 10;
		// и наконец цикл по телу лезвия
			while (NextZ>Zmin) //цикл глубины
			{
			//выхогдим на высоту
				AddLine(LineNum, "G1", 'Z', NextZ, 'F', BFeed/10); LineNum += 10;
			//прорезаем центр
				AddLine(LineNum, 'X', -XSafety,'F',BFeed); LineNum += 10;
				AddLine(LineNum, 'Y', Ymax); LineNum += 10;
				AddLine(LineNum, 'X', XSafety); LineNum += 10;
				AddLine(LineNum, 'Y', Ymin); LineNum += 10;
			// и цикл в ширину
				float XPlace = XDelta, CPlace=CDelta;
				while (CPlace<PazA/2*1.001)
				{
				//контур
					AddLine(LineNum, 'X',XSafety+XPlace,'C',CPlace*180/M_PI); LineNum += 10;
					AddLine(LineNum, 'Y', Ymax); LineNum += 10;
					AddLine(LineNum, 'X', -XSafety - XPlace, 'C', -CPlace * 180 / M_PI); LineNum += 10;
					AddLine(LineNum, 'Y', Ymin); LineNum += 10;
				//+1 в ширину контура
					CPlace += CDelta;
					XPlace += XDelta;
				}
				AddLine(LineNum, "(White cut)"); LineNum += 10;
			//чистовой рез
				AddLine(LineNum, 'X', MillD / 2, 'C', PazA / 2 * 180 / M_PI, 'F', WFeed); LineNum += 10;
				AddLine(LineNum, 'Y', Ymax); LineNum += 10;
				AddLine(LineNum, 'X', -MillD / 2, 'C', -PazA / 2 * 180 / M_PI); LineNum += 10;
				AddLine(LineNum, 'Y', Ymin); LineNum += 10;
			// выход в центр на следующий ход
				AddLine(LineNum, "G0", 'X', 0, 'C',0); LineNum += 10;
			//шаг в глубину
				NextZ -= ActZStep;
			}
		// и чистовой ход по лезвию
			AddLine(LineNum, "(Final White Layer)"); LineNum += 10;
			NextZ = Zmin;
			AddLine(LineNum, "G1", 'Z', NextZ, 'F', BFeed / 10); LineNum += 10;
		//прорезаем центр
			AddLine(LineNum, 'X', -XSafety, 'F', WFeed); LineNum += 10;
			AddLine(LineNum, 'Y', Ymax); LineNum += 10;
			AddLine(LineNum, 'X', XSafety); LineNum += 10;
			AddLine(LineNum, 'Y', Ymin); LineNum += 10;
		// и цикл в ширину
			XDelta = XDelta / ClearSts;
			CDelta = CDelta / ClearSts;
			float XPlace = XDelta, CPlace = CDelta;
			while (CPlace < PazA / 2 * 1.001)
			{
			//контур
				AddLine(LineNum, 'X', XSafety + XPlace, 'C', CPlace * 180 / M_PI); LineNum += 10;
				AddLine(LineNum, 'Y', Ymax); LineNum += 10;
				AddLine(LineNum, 'X', -XSafety - XPlace, 'C', -CPlace * 180 / M_PI); LineNum += 10;
				AddLine(LineNum, 'Y', Ymin); LineNum += 10;
			//+1 в ширину контура
				CPlace += CDelta;
				XPlace += XDelta;
			}
		//чистовой рез
			AddLine(LineNum, 'X', MillD / 2, 'C', PazA / 2 * 180 / M_PI, 'F', WFeed); LineNum += 10;
			AddLine(LineNum, 'Y', Ymax); LineNum += 10;
			AddLine(LineNum, 'X', -MillD / 2, 'C', -PazA / 2 * 180 / M_PI); LineNum += 10;
			AddLine(LineNum, 'Y', Ymin); LineNum += 10;
		// выход в центр на следующий ход
			AddLine(LineNum, "G0", 'X', 0, 'C', 0); LineNum += 10;
		// Отвод инструмента, возврат на базу
			AddLine(LineNum, 'Z', TopZ,'A', BaseA); LineNum += 10;
			AddLine(LineNum, 'X', TopZ, 'Y', 0); LineNum += 10;
			AddLine(LineNum, "M5 M9"); LineNum += 10;
			AddLine(LineNum, "M30"); LineNum += 10;
		//Символ завершения программы
			this->CodeBox->Text += System::Convert::ToString("%");
}


