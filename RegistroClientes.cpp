//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "RegistroClientes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormRegistroClientes *FormRegistroClientes;
//---------------------------------------------------------------------------
__fastcall TFormRegistroClientes::TFormRegistroClientes(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormRegistroClientes::BotonRegistroClick(TObject *Sender)
{
	FormRegistroClientes->Hide();
    Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TFormRegistroClientes::BotonSalidaClick(TObject *Sender)
{
	FormRegistroClientes->Hide();
    Form1->Show();
}
//---------------------------------------------------------------------------
