//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "EditarCliente.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEditarClienteForm *EditarClienteForm;
//---------------------------------------------------------------------------
__fastcall TEditarClienteForm::TEditarClienteForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEditarClienteForm::BotonEditarClick(TObject *Sender)
{
	EditarClienteForm->Hide();
	Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TEditarClienteForm::BotonSalidaClick(TObject *Sender)
{
	EditarClienteForm->Hide();
    Form1->Show();
}
//---------------------------------------------------------------------------
