//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{

int GN=getGN();
Label1 ->Caption = GN;

}

//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
wchar_t *MN = new wchar_t[256];
getMN(MN);
Label2 ->Caption = MN;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Label2Click(TObject *Sender)
{
 Label2 ->Caption = "Name";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Label1Click(TObject *Sender)
{
Label1 ->Caption = "Group Number";
}
//---------------------------------------------------------------------------


