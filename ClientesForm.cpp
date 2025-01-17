//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "ClientesForm.h"
#include "principal.h"
#include <string>
#include <fstream>
#include <sstream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TClientes *Clientes;
//---------------------------------------------------------------------------
__fastcall TClientes::TClientes(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TClientes::ClientesGridClick(TObject *Sender)
{
    listaClientes.cargarListaClientes("clientes.csv");

	if(listaClientes.getTotal() == 0)
	{
		ShowMessage("No se encontraron clientes registrados");
		return;
	}

	ClientesGrid->RowCount = listaClientes.getTotal() + 1;
	ClientesGrid->ColCount = 19;

	ClientesGrid->Cells[0][0] = "ID";
	ClientesGrid->Cells[1][0] = "Nombre";
	ClientesGrid->Cells[2][0] = "Apellido";
	ClientesGrid->Cells[3][0] = "Inicial 2do nombre";
	ClientesGrid->Cells[4][0] = "Email";
	ClientesGrid->Cells[5][0] = "Tel�fono";
	ClientesGrid->Cells[6][0] = "Genero";
	ClientesGrid->Cells[7][0] = "Ciudad";
	ClientesGrid->Cells[8][0] = "Estado/Provincia";
	ClientesGrid->Cells[9][0] = "Direccion";
	ClientesGrid->Cells[10][0] = "Codigo postal";
	ClientesGrid->Cells[11][0] = "Fecha de nacimiento";
	ClientesGrid->Cells[12][0] = "Edad";
	ClientesGrid->Cells[13][0] = "Tipo de tarjeta";
	ClientesGrid->Cells[14][0] = "Numero de tarjeta";
	ClientesGrid->Cells[15][0] = "Codigo de verificacion";
	ClientesGrid->Cells[16][0] = "Fecha de expiracion de tarjeta";
	ClientesGrid->Cells[17][0] = "Codigo";
	ClientesGrid->Cells[18][0] = "Plazas";

	//iterar sobre la lista enlazada y carga los datos
	Cliente *actual = listaClientes.getCabeza();
	int row = 1; //empieza en la segunda fila la primera es el encabezado

	while (actual != nullptr)
	{
		ClientesGrid->Cells[0][row] = IntToStr(actual->numero);
		ClientesGrid->Cells[1][row] = actual->nombre;
		ClientesGrid->Cells[2][row] = actual->apellido;
		ClientesGrid->Cells[3][row] = actual->inicialMedia;
		ClientesGrid->Cells[4][row] = actual->email;
		ClientesGrid->Cells[5][row] = actual->numeroTelefono;
		ClientesGrid->Cells[6][row] = actual->genero;
		ClientesGrid->Cells[7][row] = actual->ciudad;
		ClientesGrid->Cells[8][row] = actual->estado;
		ClientesGrid->Cells[9][row] = actual->direccion;
		ClientesGrid->Cells[10][row] = IntToStr(actual->zipCode);
		ClientesGrid->Cells[11][row] = actual->cumplea�os;
		ClientesGrid->Cells[12][row] = IntToStr(actual->edad);
		ClientesGrid->Cells[13][row] = actual->CCtype;
		ClientesGrid->Cells[14][row] = IntToStr(actual->CCnumber);
		ClientesGrid->Cells[15][row] = actual->CVV2;
		ClientesGrid->Cells[16][row] = IntToStr(actual->CCexpires);
		ClientesGrid->Cells[17][row] = actual->codigo;
		ClientesGrid->Cells[18][row] = IntToStr(actual->plazas);

		// Avanza al siguiente cliente y a la siguiente fila
		actual = actual->siguiente;
		row++;
	}
}
//---------------------------------------------------------------------------
void __fastcall TClientes::Button1Click(TObject *Sender)
{
	Form1->Show();
    Clientes->Hide();
}
//---------------------------------------------------------------------------

