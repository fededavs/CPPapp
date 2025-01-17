//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "principal.h"
#include "Nodos.h"
#include "Listas.h"
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	LimpiarEditar();
	LimpiarEliminar();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Clientes1Click(TObject *Sender)
{
	FormRegistroClientes->Show();
    Form1->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Editar1Click(TObject *Sender)
{
	Titulo->Visible = false;
	LabelEditarCliente->Visible = true;
	IngresarClienteEditar->Visible = true;
	BotonBuscarEditar->Visible = true;

    LimpiarEliminar();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BotonBuscarEditarClick(TObject *Sender)
{
	EditarClienteForm->Show();
	Form1->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LimpiarEditar()
{
	LabelEditarCliente->Visible = false;
	IngresarClienteEditar->Visible = false;
	BotonBuscarEditar->Visible = false;
}
void __fastcall TForm1::LimpiarEliminar()
{
	LabelEliminarCliente->Visible = false;
	IngresarClienteEliminar->Visible = false;
	BotonBuscarEliminar->Visible = false;
}
void __fastcall TForm1::Eliminar1Click(TObject *Sender)
{
	Titulo->Visible = false;
	LabelEliminarCliente->Visible = true;
	IngresarClienteEliminar->Visible = true;
	BotonBuscarEliminar->Visible = true;

    LimpiarEditar();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Inicio1Click(TObject *Sender)
{
    Titulo->Visible = true;
	LimpiarEditar();
	LimpiarEliminar();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LeerClientesClick(TObject *Sender)
{
	Clientes->Show();
    Form1->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PaquetesTuristicosClick(TObject *Sender)
{
	Destinos->Show();
    Form1->Hide();
}
//---------------------------------------------------------------------------

