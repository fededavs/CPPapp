//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "DestinosForm.h"
#include "principal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDestinos *Destinos;
//---------------------------------------------------------------------------
__fastcall TDestinos::TDestinos(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDestinos::BotonVolverClick(TObject *Sender)
{
	Form1->Show();
	Destinos->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TDestinos::DestinosGridClick(TObject *Sender)
{
	DestinosGrid->RowCount = listaDestinos.getTotal() + 1;
	DestinosGrid->ColCount = 7;

	DestinosGrid->Cells[0][0] = "Nombre Paquete";
	DestinosGrid->Cells[1][0] = "Destino";
	DestinosGrid->Cells[2][0] = "Duraci�n (Dias)";
	DestinosGrid->Cells[3][0] = "Costo (USD)";
	DestinosGrid->Cells[4][0] = "Partida";
	DestinosGrid->Cells[5][0] = "C�digo";
	DestinosGrid->Cells[6][0] = "Plazas";

	Destino *actual = listaDestinos.getCabeza();
	int rows = 1;

	while(actual != nullptr)
	{
		DestinosGrid->RowCount = rows + 1;

		DestinosGrid->Cells[0][rows] = actual->nombrePaquete;
		DestinosGrid->Cells[1][rows] = actual->destino;
		DestinosGrid->Cells[2][rows] = IntToStr(actual->duracionDias);
		DestinosGrid->Cells[3][rows] = FloatToStr(actual->costoUSD);
		DestinosGrid->Cells[4][rows] = actual->partida;
		DestinosGrid->Cells[5][rows] = actual->codigo;
		DestinosGrid->Cells[6][rows] = IntToStr(actual->plazas);

		//siguiente destino en la lista
		actual = actual->siguiente;
		rows++;
	}
}
//---------------------------------------------------------------------------

